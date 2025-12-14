/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20903
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_1] [i_1] = ((/* implicit */short) ((_Bool) ((6035967158833446856ULL) >> (((((/* implicit */int) var_6)) - (35337))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 4294967278U)))) : ((+(6035967158833446856ULL)))))) && (((/* implicit */_Bool) (-(6035967158833446856ULL))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_8), ((unsigned short)37812))))) * (var_1)))))));
    var_21 = ((/* implicit */unsigned long long int) ((((_Bool) min((12410776914876104760ULL), (12410776914876104759ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (min((3LL), (((/* implicit */long long int) (short)-26558))))));
}
