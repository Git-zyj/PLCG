/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28113
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 6; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 = var_11;
                    arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (_Bool)1)) : (371667294)))) ? ((-2147483647 - 1)) : (-217718294)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1586377244)))) >= (arr_4 [i_0 - 2] [i_0] [i_0] [i_0]))))) : (((long long int) arr_0 [i_1 + 2] [i_0 - 2]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
    var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) (((~(var_18))) >> (((/* implicit */int) ((((/* implicit */_Bool) 2134422290)) && (((/* implicit */_Bool) (unsigned char)40)))))))) ? (((/* implicit */int) max((var_2), (var_16)))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (short)-25815))))) < (((var_10) - (((/* implicit */int) var_1)))))))));
}
