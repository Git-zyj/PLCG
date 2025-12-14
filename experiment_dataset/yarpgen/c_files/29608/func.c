/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29608
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
    var_13 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (arr_0 [i_1 + 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1 + 2])) | (arr_3 [i_0] [i_1 + 1]))))));
                var_15 -= ((/* implicit */_Bool) var_4);
                var_16 = ((/* implicit */short) max(((~(var_5))), (((/* implicit */unsigned long long int) (~(var_4))))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) var_7);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    arr_10 [i_0] [2LL] [2LL] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24864))) : (var_5))));
                    var_17 = ((/* implicit */int) (short)-24855);
                    arr_11 [i_0] [11] [i_2] = ((/* implicit */short) var_0);
                }
                for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    var_18 = ((/* implicit */short) max((var_18), (var_2)));
                    arr_16 [9] [(_Bool)0] [i_0] = ((/* implicit */unsigned int) (~(-674597122)));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_8);
}
