/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217327
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)61)), (((((/* implicit */_Bool) (unsigned short)17)) ? (min((((/* implicit */long long int) (unsigned char)139)), (1556874098968319533LL))) : (max((-5556614578937761137LL), (((/* implicit */long long int) (unsigned char)228))))))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)37006)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (7635363969398465003ULL)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_3 [i_0]))))));
                    var_12 = ((/* implicit */unsigned char) (-((-(min((((/* implicit */long long int) arr_1 [i_0] [i_2])), (-9223372036854775793LL)))))));
                }
            } 
        } 
    } 
    var_13 = var_2;
}
