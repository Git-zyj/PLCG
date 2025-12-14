/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26003
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_13))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] [(unsigned char)7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_15)))) ? (arr_2 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_7 [i_1] [i_1] [i_1]))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) - (var_19)));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_13 [i_0] [i_1] [i_3] [(short)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)238))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_0])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 3; i_5 < 8; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_3] [i_0] [i_5 + 2] = ((arr_7 [i_5 - 2] [i_5 + 2] [i_5 - 2]) ? (arr_2 [i_5 - 3]) : (arr_2 [i_5 + 1]));
                            arr_19 [i_0] [i_0] [i_3] [i_4] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)96)))))) | (((/* implicit */int) (short)17531))));
                            arr_20 [i_0] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */int) (!(((((/* implicit */int) arr_3 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6])) < (var_16)))));
                            arr_21 [i_0] [i_1] [i_3] [i_3] [i_5] [i_1] = ((/* implicit */short) arr_7 [i_0] [i_0] [i_0]);
                        }
                        for (unsigned char i_6 = 3; i_6 < 8; i_6 += 4) /* same iter space */
                        {
                            arr_26 [3ULL] [i_4] [i_4] [i_6] [i_4] [6ULL] [i_4] = ((/* implicit */signed char) var_7);
                            arr_27 [i_0] [i_0] [i_0] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */int) arr_25 [i_0] [i_6] [i_1] [i_0] [i_6] [i_0])) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17531))) >= (var_7))))));
                            arr_28 [i_4] [(unsigned char)1] [i_6] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3])) / (-761287552)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-17532))))) : (((/* implicit */int) (signed char)53))));
                            arr_29 [i_0] [i_6] [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) var_13);
                        }
                        arr_30 [i_0] [i_0] [4LL] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_3] [(unsigned char)5]))));
                    }
                    arr_31 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    arr_32 [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_22 [5LL] [i_0] [i_1] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17553))))))));
                    arr_33 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_3])) * (((/* implicit */int) arr_6 [i_1])))))));
                }
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    arr_38 [i_0] [4ULL] [(_Bool)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 67092480))));
                    arr_39 [i_0] [i_0] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)17525)) < (((/* implicit */int) (unsigned char)14))));
                    arr_40 [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)6406))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 4; i_9 < 9; i_9 += 3) 
                        {
                            {
                                arr_47 [i_0] [i_1] [i_0] [i_1] [i_9] &= ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (arr_14 [i_9 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                                arr_48 [i_0] [i_0] [i_0] [i_8] [i_7] [i_8] [i_9] = ((/* implicit */unsigned long long int) var_9);
                                arr_49 [i_7] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_7] [i_9]))) : (arr_37 [i_0]))))));
                                arr_50 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_9 - 1] [i_9 - 1]))));
                                arr_51 [i_7] = ((/* implicit */signed char) arr_35 [i_9 - 1] [i_8] [i_7] [i_1]);
                            }
                        } 
                    } 
                }
                arr_52 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((arr_42 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-22)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_0] [i_0])), (2754659920U)))) <= (arr_41 [i_1] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (short)(-32767 - 1)))));
                arr_53 [i_1] = ((/* implicit */_Bool) min((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)17556))))) == (-67092481))))));
                arr_54 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)133)) >= (((/* implicit */int) (short)-17532))));
            }
        } 
    } 
}
