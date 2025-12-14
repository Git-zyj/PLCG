/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42146
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (var_5) : (var_7)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_0 + 3])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_2 - 1] [i_0 + 2])) : (((/* implicit */int) var_13))))));
                    var_16 |= ((/* implicit */int) var_6);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) (unsigned short)23409);
                        arr_12 [i_0] [(signed char)2] [i_0] [i_1] [10] [10] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)486)) ? (((/* implicit */int) arr_2 [i_2] [i_3 - 1])) : (var_2)));
                    }
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */short) min((((/* implicit */unsigned short) (short)31670)), ((unsigned short)14073)));
                        arr_16 [i_0 + 2] [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */short) (unsigned short)12736);
                        var_18 = ((/* implicit */int) arr_10 [i_0] [i_1] [i_2 + 1] [i_0]);
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_9), (((/* implicit */short) arr_0 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) arr_7 [i_0] [(signed char)7] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (short)-31670)))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [4ULL])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_4]))))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) (short)31670)) ? (33423360U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_20 |= arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1];
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) var_14))))) ? (min((((/* implicit */int) var_0)), (arr_17 [i_0] [3] [i_0] [i_0 + 2]))) : (((/* implicit */int) arr_2 [i_5] [i_1]))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) (short)-18592)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_3 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_17 [i_5 - 1] [i_2 + 1] [i_2 + 1] [i_0 + 3]) : (((/* implicit */int) arr_5 [i_0] [i_0])))))));
                        var_22 |= max((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_5])) ? (var_3) : (((((/* implicit */_Bool) (unsigned char)37)) ? (arr_15 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_5 [10U] [10U])))) : (var_2)))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_1))));
    var_24 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31670)) ? (var_5) : (var_7)))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_3)) : (666953949808758644ULL))))), (((/* implicit */unsigned long long int) var_6))));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)31274)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)13))));
}
