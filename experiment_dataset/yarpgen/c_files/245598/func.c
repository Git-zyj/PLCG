/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245598
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
    var_19 = ((/* implicit */unsigned long long int) 813221593115394247LL);
    var_20 *= ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [(unsigned char)0] [i_0] [i_0]) ? (((/* implicit */int) (signed char)-1)) : (min((((/* implicit */int) (signed char)-83)), (2147483647)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3106351600U)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned short)21755))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 522240LL)) ? (2652262346U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)6] [i_0] [i_0])))))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (5576345346092239370ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) -31LL)) ? (-502297750) : (((/* implicit */int) (short)32767))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3758615395U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) : (arr_6 [i_0] [(signed char)1] [(short)12] [i_3])))) ? (arr_2 [i_3]) : (((/* implicit */int) (unsigned short)6893))))) ? (min((((/* implicit */unsigned int) (unsigned short)58666)), (3951787406U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4 + 1] [i_2]))))))));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) (short)192)) : (((/* implicit */int) arr_1 [i_4 + 1] [i_4 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4 + 1] [i_4 - 1]))) : (((((/* implicit */_Bool) arr_1 [i_4 - 1] [i_4 - 1])) ? (((/* implicit */long long int) -502297750)) : (-7148914560462183394LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_18 [i_1] [i_0] |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((arr_10 [i_6 + 1] [8ULL] [8ULL]), (arr_10 [i_0] [i_0] [i_0])))), (arr_5 [i_1] [i_1] [(unsigned char)3] [i_1])));
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned char)12] [(_Bool)1] [6U])) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_2])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)53336)))) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_0]))));
                                arr_19 [i_6] [(short)0] [i_1] [i_5] [i_6] = (_Bool)1;
                                var_26 |= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5 - 2] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27674))) : (-491083145948046794LL)))));
                            }
                        } 
                    } 
                }
                for (long long int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 1311878455)) ? (((/* implicit */int) arr_15 [(unsigned short)4] [i_1] [12LL] [i_7] [(unsigned short)4])) : (((/* implicit */int) arr_22 [(unsigned char)7]))));
                    arr_24 [i_0] [i_1] [(unsigned char)2] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (17841730455289785274ULL))), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]))));
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [i_0] [i_0] [8ULL])), (max((arr_9 [(short)6] [i_0] [i_0] [i_0]), (arr_9 [i_1] [i_1] [i_0] [i_1]))))))));
                    var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min(((signed char)75), ((signed char)-32)))), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_10 [(short)9] [(unsigned short)12] [2U])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_0]))))));
                }
                for (long long int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
                {
                    var_30 &= ((/* implicit */unsigned int) min((((/* implicit */long long int) min((arr_14 [i_0] [(short)2] [(unsigned char)0] [i_0] [i_8] [i_8]), (arr_14 [i_8] [i_1] [i_1] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_8 [i_0] [(short)3] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-104))) : (arr_8 [i_8] [(signed char)11] [(unsigned char)0] [i_0])))));
                    var_31 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 9176492095946536542ULL)) ? (2170921933U) : (((/* implicit */unsigned int) 410131087)))), (((/* implicit */unsigned int) ((arr_3 [i_8] [i_1] [i_0]) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))));
                }
                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_0] [i_1])) ? (-1308815415) : (1308815415)))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (20ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29103)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 3; i_9 < 13; i_9 += 1) 
    {
        for (int i_10 = 2; i_10 < 11; i_10 += 3) 
        {
            {
                var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9 - 2])) ? (((/* implicit */int) arr_28 [i_9 + 1])) : (-1308815415)))) ? (((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47548))) : (11577867498291932345ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_9 + 1] [i_9 + 1])) ? (arr_31 [i_9 - 2] [9LL]) : (arr_31 [i_9 - 2] [i_10])))));
                var_34 = ((/* implicit */_Bool) arr_32 [i_9]);
                var_35 = (unsigned char)204;
                var_36 = ((/* implicit */unsigned long long int) (short)32378);
            }
        } 
    } 
}
