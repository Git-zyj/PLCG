/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221879
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
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                var_13 = (~((~((~(((/* implicit */int) (unsigned char)152)))))));
                var_14 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 - 4]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_1 [i_0 - 2] [i_0 - 2]))));
                        arr_11 [i_0 - 2] [i_0] [i_0 - 3] [i_2] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_6 [i_0 - 2] [i_1 - 3] [i_0 - 2])), (arr_9 [i_2]))), (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) var_0)), (arr_10 [i_2] [i_1 - 2] [i_1 - 2] [i_3]))))))));
                        arr_12 [i_0 - 4] [i_2] [i_2] [i_3] = ((/* implicit */short) (+(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) var_9)) : (442642401U)))))));
                        arr_13 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2 + 2]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (arr_9 [i_2]))) ? ((+(((/* implicit */int) (unsigned short)47060)))) : (((/* implicit */int) arr_7 [i_3] [i_2] [i_1 - 1]))))) : (max(((~(7171907503724109851ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)47060)))))))));
                    }
                    for (short i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            arr_19 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */short) (+(min((((/* implicit */int) (unsigned short)18482)), ((~(((/* implicit */int) arr_18 [1] [i_4] [i_2]))))))));
                            arr_20 [i_0] [12] [i_1] [(short)2] [7LL] [i_4] [i_2] = ((/* implicit */long long int) arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_4] [i_5]);
                        }
                        var_16 ^= ((((/* implicit */int) ((((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0])))) >= (((/* implicit */int) arr_7 [i_0] [i_0] [(short)2]))))) * (min(((-(((/* implicit */int) arr_5 [2] [i_2 + 2] [(short)1])))), (var_7))));
                        arr_21 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_14 [i_0] [i_1] [i_1] [i_4] [5U])))) ? (((((/* implicit */int) var_10)) / (((/* implicit */int) (short)-19329)))) : (((/* implicit */int) arr_6 [i_1] [i_2 + 3] [i_1]))))) : (max((((/* implicit */unsigned int) (-(1926097560)))), (arr_2 [i_0] [i_0] [8ULL])))));
                    }
                    for (short i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                    {
                        arr_24 [i_1] [i_6] [i_6] [i_6] [i_2] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (short)-9212)))), (((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_2 + 3] [i_0] [i_0] [12LL]))));
                        arr_25 [i_6] [9] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1] [i_1]);
                    }
                    for (short i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                    {
                        arr_30 [i_2] [i_1] [(_Bool)1] [i_7] = ((/* implicit */signed char) ((max((((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 - 4] [i_0 - 3])) / (arr_9 [i_2]))), (((/* implicit */unsigned long long int) (short)-19315)))) << (((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_7))))), (arr_17 [i_0] [(signed char)3] [(signed char)3] [i_7] [i_1 - 2] [(unsigned char)12] [6ULL])))) + (15395)))));
                        arr_31 [i_2] [i_2] = ((/* implicit */int) arr_2 [i_0] [i_2] [i_7]);
                    }
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        var_17 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 5898497101318655424ULL))));
                        arr_35 [i_0] [i_0] [8ULL] [i_2] = ((/* implicit */signed char) arr_18 [i_2] [i_2 - 1] [i_2]);
                    }
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (unsigned short)18478);
    var_19 ^= ((/* implicit */unsigned long long int) var_9);
    var_20 = ((/* implicit */unsigned int) (-(2147483647)));
}
