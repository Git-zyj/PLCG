/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214000
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
    var_19 = ((/* implicit */long long int) ((unsigned long long int) var_17));
    var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_13)), (min((((/* implicit */unsigned long long int) 5294966635150849542LL)), (2116049345525844757ULL)))));
    var_21 = ((/* implicit */unsigned int) var_13);
    var_22 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1 + 3] [i_1])) ? ((+(var_18))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 2116049345525844757ULL))))));
                        var_24 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-31)) ? (arr_5 [i_0] [(_Bool)0] [i_3 - 2] [i_3]) : (arr_5 [i_3] [0ULL] [i_3 - 2] [(signed char)4])))));
                        arr_10 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */long long int) arr_1 [i_0]);
                    }
                    for (int i_4 = 1; i_4 < 12; i_4 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 3; i_5 < 9; i_5 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((((((/* implicit */int) var_0)) * (((/* implicit */int) arr_3 [i_1 + 1] [i_2 + 1])))), (((/* implicit */int) arr_9 [i_4]))));
                            var_26 = ((/* implicit */signed char) arr_0 [i_1 + 1]);
                        }
                        for (short i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                        {
                            var_27 = max((((/* implicit */unsigned long long int) var_7)), ((~((+(var_4))))));
                            var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)32)) || ((_Bool)0))) ? (((/* implicit */int) arr_4 [2U] [i_1] [2U])) : (((/* implicit */int) arr_2 [i_4]))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-701149429), (((/* implicit */int) (short)-32397))))) ? (arr_13 [i_0] [i_4]) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (var_1))))) & (var_12)))));
                            arr_20 [i_2] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(0)));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned char) ((arr_16 [i_4 - 1] [i_4] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_4] [i_1 + 2]) == (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_1 + 1] [i_4])))));
                            var_31 = ((unsigned char) -6504464256577057095LL);
                        }
                        var_32 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_1 + 3] [i_1 + 2] [i_2 + 1] [i_2 + 1] [i_4 - 1]))))) || (((/* implicit */_Bool) var_11))));
                    }
                    var_33 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (signed char)-63))))) == (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [i_2])));
                }
                arr_23 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) min((arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 3] [i_1 + 3]), (arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1])))) >= (((((/* implicit */_Bool) (signed char)-116)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)-19)) : (1023))) : (max((((/* implicit */int) var_7)), (-1909393040)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    var_34 = ((/* implicit */long long int) arr_7 [i_8]);
                    var_35 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_0] [i_1 + 2]))));
                }
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)1574)), (arr_13 [i_0] [i_0]))))))) : (((/* implicit */int) var_7))));
            }
        } 
    } 
}
