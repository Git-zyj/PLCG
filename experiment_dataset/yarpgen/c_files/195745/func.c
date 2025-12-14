/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195745
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
    var_13 = ((/* implicit */unsigned short) max(((~(max((((/* implicit */unsigned long long int) (unsigned short)42750)), (5587003332744293284ULL))))), (((/* implicit */unsigned long long int) var_1))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) - ((-(((/* implicit */int) (unsigned char)14))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_15 += ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2])) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [(short)19] [i_1])), (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1]))) : (min((((/* implicit */unsigned int) var_11)), (arr_1 [i_1]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_0 + 2])) || (((/* implicit */_Bool) -37287989)))))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) min((((int) arr_1 [(signed char)14])), (min(((-(((/* implicit */int) (short)17667)))), (((/* implicit */int) (short)-1045))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    arr_12 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_2);
                    var_16 |= ((/* implicit */short) max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) ((((unsigned int) 1359667185U)) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47229))))))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((((/* implicit */int) arr_3 [i_0 - 1] [i_2 + 2])) ^ (((/* implicit */int) arr_3 [i_0 - 1] [i_2 + 2])))), (((/* implicit */int) arr_10 [i_0 - 1])))))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_12)))) / (var_9)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */short) (-(var_5)));
                            var_19 |= ((/* implicit */long long int) (!(((((/* implicit */_Bool) (unsigned short)14388)) || (((/* implicit */_Bool) 723201168798385495ULL))))));
                            arr_20 [i_0] [i_0] [i_2] [i_0] [22ULL] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13613272187078989072ULL)) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 1] [i_3] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_3])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)3)) && (((/* implicit */_Bool) arr_0 [i_0])))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) (short)985)))));
                            var_21 -= ((/* implicit */short) (((~(((/* implicit */int) (unsigned char)11)))) % (((/* implicit */int) var_0))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_2 - 1])) || (((/* implicit */_Bool) arr_4 [i_0 + 2] [i_2 + 2]))));
                            arr_25 [i_0] [i_3] = ((/* implicit */unsigned short) ((int) ((int) arr_21 [i_5] [i_3] [i_1])));
                            arr_26 [i_0 - 1] [i_0] [i_2] [i_0 - 1] [i_5] [i_0] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_10)) > (var_5))))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_3 + 2] [i_3] [i_3] [i_2 - 1] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_28 [i_3 - 1] [i_2] [i_2 + 2] [i_2 - 2] [i_0 + 2] [i_0 - 1])) : (((/* implicit */int) arr_28 [i_3 + 3] [i_2] [i_2] [i_2 + 2] [i_0 + 2] [i_0]))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [(unsigned char)21] [i_0] [i_0] [i_0 + 2] [i_2 - 1])) >> (((arr_15 [(unsigned short)11] [i_0 + 1] [i_0] [i_0 - 1]) - (11668261823716682306ULL)))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_7))));
                            arr_33 [i_0] [i_2] [i_0] [i_7] = ((/* implicit */signed char) (~(-150125641)));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (unsigned char)255))));
                        }
                    }
                }
                /* vectorizable */
                for (long long int i_8 = 3; i_8 < 22; i_8 += 3) 
                {
                    arr_36 [i_0] [i_0] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                    arr_37 [i_0] [i_8] [i_0] = ((unsigned long long int) (+(((/* implicit */int) (unsigned char)101))));
                }
            }
        } 
    } 
}
