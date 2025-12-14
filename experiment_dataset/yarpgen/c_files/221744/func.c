/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221744
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
    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_7))));
    var_21 = ((/* implicit */unsigned int) max((var_15), (var_9)));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-4223))))) ? (((((/* implicit */_Bool) (signed char)-51)) ? (254532156) : (((/* implicit */int) var_0)))) : (max((((/* implicit */int) var_8)), (var_19))))) : (((/* implicit */int) (!(var_11))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_0]);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_8 [(unsigned short)6] [i_0] = arr_1 [i_0];
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((unsigned short) arr_7 [i_0] [4] [i_1] [7]));
                }
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) ((int) 6849665671223273473ULL));
                arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) ? (((((/* implicit */_Bool) 11597078402486278143ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 2])) : (((/* implicit */int) arr_3 [i_0] [(signed char)2] [i_1])))) : (((/* implicit */int) arr_4 [i_1] [i_0]))))) >= ((+(((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (arr_2 [(short)5] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [(short)8])))))))));
                var_23 += (((-(arr_6 [i_0] [(_Bool)1] [i_0] [i_1]))) / (((/* implicit */int) max((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) ((signed char) arr_0 [i_1] [i_0])))))));
            }
        } 
    } 
}
