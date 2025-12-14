/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246496
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
    var_14 = ((/* implicit */unsigned short) var_12);
    var_15 = ((((/* implicit */long long int) min((var_12), (var_11)))) <= (var_0));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [15] [15] [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) % (max((0ULL), (((/* implicit */unsigned long long int) var_3)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_2]), (((/* implicit */signed char) arr_3 [i_0] [i_1] [i_2]))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        arr_11 [i_0] [(unsigned short)13] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (unsigned char)187);
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) min((((((/* implicit */int) (unsigned short)65516)) - (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])))), ((+(((/* implicit */int) arr_6 [i_3] [i_1] [i_2] [14LL]))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        arr_15 [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_2 [15])), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)24)), (var_11)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)91))) + (arr_9 [10ULL] [(unsigned char)11] [i_1] [(unsigned char)11] [i_4])))))));
                        arr_16 [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((long long int) var_1))) / (arr_10 [i_0] [i_0] [i_0] [(_Bool)1])));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_10 [i_5] [i_4] [i_1] [(signed char)4]))) + (arr_19 [i_0] [i_2] [i_0] [i_0])));
                            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((arr_19 [i_0] [i_1] [i_4] [i_4]), (((/* implicit */int) var_7))))) | (max((max((((/* implicit */unsigned long long int) var_3)), (18446744073709551615ULL))), (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1])), (var_2)))))));
                            arr_22 [i_0] [i_0] [i_1] [8] [10] [i_5] [i_5] = ((/* implicit */signed char) min((arr_10 [i_0] [i_1] [(unsigned short)9] [i_5]), (min((max((((/* implicit */unsigned long long int) arr_14 [i_2] [14ULL])), (arr_8 [i_0] [i_0] [i_5] [i_4] [i_5] [i_5]))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_4] [i_5]))))));
                            arr_23 [i_1] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_8 [i_5] [i_4] [i_2] [i_1] [i_0] [i_0])))) ? (((long long int) arr_13 [i_4] [i_5])) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1] [i_5]))))));
                            arr_24 [i_0] = ((/* implicit */short) min(((unsigned short)36364), (((/* implicit */unsigned short) arr_1 [i_1]))));
                        }
                        arr_25 [i_0] [i_0] [(unsigned short)10] = ((/* implicit */int) ((long long int) max((arr_18 [i_1] [i_1] [i_2] [i_2] [i_4]), (var_0))));
                    }
                    for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        arr_28 [i_2] [5ULL] [9U] [i_2] [i_1] [i_0] |= arr_18 [i_0] [i_1] [i_0] [i_2] [i_6];
                        arr_29 [i_0] [i_1] = ((/* implicit */int) arr_2 [i_0]);
                    }
                    arr_30 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [2] [i_1]))));
                    arr_31 [i_0] [i_1] [(unsigned short)11] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) min((577261929), (((/* implicit */int) var_6)))))))), (min((((unsigned long long int) arr_3 [i_0] [i_1] [i_2])), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) ^ (arr_26 [i_0] [i_1] [i_0] [i_2]))))))));
                }
            } 
        } 
    } 
}
