/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214853
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 3396962819117166633ULL)) ? (((/* implicit */long long int) 49193342U)) : (4000464485316686390LL)))))) : (((unsigned long long int) 49193344U))));
    var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_12)) & (((/* implicit */int) var_11))))));
    var_18 = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) var_13)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)33479))) ? ((+(((/* implicit */int) var_4)))) : (((((((/* implicit */_Bool) 3921209577578496917ULL)) && (((/* implicit */_Bool) arr_2 [i_0])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)129)))) : ((-(((/* implicit */int) var_6))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((short) (+(((/* implicit */int) (unsigned char)212))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */short) arr_8 [i_0 - 1] [i_1] [i_0]);
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 49193342U)) ? (((/* implicit */int) (unsigned short)6881)) : (((/* implicit */int) (unsigned short)58655)))))));
                            }
                        } 
                    } 
                    var_21 = (~((+(arr_9 [i_2] [i_0] [i_0]))));
                }
                for (signed char i_5 = 3; i_5 < 22; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 23; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) var_3);
                                arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) var_11)))) * (((/* implicit */int) min((((910253083U) > (arr_15 [i_0] [i_1] [i_6] [i_6] [i_6]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6 + 1]))) == (49193322U))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_5]) != (var_0))))) : ((+(arr_1 [i_1])))));
                    arr_25 [i_0] [i_1] [i_1] [i_0] = (_Bool)1;
                }
                for (int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 2; i_10 < 22; i_10 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) == (((/* implicit */int) ((((/* implicit */int) arr_28 [i_10] [i_10 + 1] [i_10] [i_10 + 1])) < (((/* implicit */int) var_6)))))));
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_10 + 2] [i_10 + 2] [i_0 - 1]), (arr_9 [i_10 - 1] [i_10 - 1] [i_0 - 1])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_15))) & (arr_9 [i_10 - 2] [i_10 - 1] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_9 [i_10 - 2] [i_10 - 2] [i_0 + 1])) ? (arr_9 [i_10 - 1] [i_10 - 2] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6881))))))))));
                                arr_32 [i_10] [i_9] [i_0] [i_0] [i_0] = min((4294967295U), (((/* implicit */unsigned int) (short)-32757)));
                                arr_33 [i_10 + 2] [i_9] [16ULL] [i_1] [(unsigned char)20] |= ((((arr_30 [20ULL] [i_0 + 1] [(_Bool)1] [i_10 - 2]) <= (arr_30 [(signed char)4] [i_0 - 1] [i_1] [i_10 + 2]))) ? ((~(((/* implicit */int) ((arr_19 [i_0] [i_0] [i_0] [i_10]) != (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) : ((+(((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_14)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 23; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 2; i_12 < 22; i_12 += 2) 
                        {
                            {
                                arr_39 [i_0] [i_1] [i_8] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 941370375734866803LL)) ? (arr_29 [21LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [13LL] [i_1] [i_0])))))) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_12] [(unsigned char)12] [i_12]) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-61))))))))) : (-941370375734866804LL));
                                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10319)) ? (min((arr_13 [i_0] [i_12 + 2] [i_0 - 1] [i_11]), (((/* implicit */int) (unsigned short)33484)))) : (((/* implicit */int) var_12))));
                                var_27 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((4245773954U), (arr_31 [i_0] [14LL] [i_0] [i_11] [i_11] [i_11] [i_1])))))) ? (((/* implicit */int) max((arr_10 [i_0 + 1] [i_0 - 1]), (arr_11 [i_0 + 1] [i_0] [i_11] [i_11 + 1])))) : (((((/* implicit */_Bool) min((2196825583296531076LL), (((/* implicit */long long int) (unsigned short)33469))))) ? (((((/* implicit */_Bool) (signed char)0)) ? (-2063120348) : (((/* implicit */int) (unsigned short)13723)))) : (((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_34 [i_12] [i_0] [i_8] [i_0] [i_0]))))))));
                                arr_40 [i_0] [i_1] [i_11] [i_0] [i_11] = ((/* implicit */long long int) arr_22 [9U] [i_0] [i_8] [i_0] [i_0]);
                                var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)32054))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0 - 1]) & (((/* implicit */unsigned long long int) 0LL))))) ? (max((((/* implicit */unsigned int) var_15)), (4245773949U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (-1146856173) : (((/* implicit */int) (short)-28384)))))));
                    arr_41 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_19 [i_1] [i_1] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) (((+(4294967285U))) % (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                                var_31 = ((/* implicit */unsigned char) (_Bool)1);
                                var_32 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)65535))), (((((/* implicit */_Bool) 4294967295U)) ? (10141728637232685952ULL) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_13]))))))) ? (((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_1] [i_0] [i_0] [i_14])) ? (((/* implicit */int) arr_21 [i_0 + 1] [i_0] [i_8] [i_0] [i_0 + 1])) : (((/* implicit */int) (short)-6716)))) : (((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) <= (664260848637536744ULL)))) : (min((((/* implicit */int) arr_3 [i_14])), (-1146856173))))));
                                var_33 = ((/* implicit */long long int) (+(min((arr_4 [i_0]), (var_3)))));
                                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0 + 1])) == (12ULL))))) + (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0 - 1])) ? (arr_9 [i_0] [i_1] [i_0 - 1]) : (arr_9 [i_0] [i_0] [i_0 + 1]))))))));
                            }
                        } 
                    } 
                }
                var_35 = ((/* implicit */short) var_8);
                arr_46 [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((min((arr_23 [i_0] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_1] [i_0 + 1])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_1] [i_0 + 1]))))))));
            }
        } 
    } 
}
