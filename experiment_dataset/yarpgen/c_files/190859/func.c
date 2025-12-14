/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190859
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
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) max((arr_0 [i_0]), (arr_0 [i_0]))))) < (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95))) : (arr_0 [(signed char)5])))))))));
        var_11 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)38432))));
    }
    for (int i_1 = 2; i_1 < 9; i_1 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (~(max((max((arr_1 [i_1 - 2]), (((/* implicit */unsigned long long int) (unsigned short)42994)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)0))))))))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_17 [i_2] [i_1] [i_3] [i_4 - 1] [i_4] [i_2] = min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))))) ? ((((_Bool)1) ? (arr_0 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)109)))))), (((((/* implicit */_Bool) arr_16 [i_1])) ? (arr_14 [i_4] [i_1 + 1] [i_1 + 1] [i_4] [(short)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                        arr_18 [i_4] [i_4] = ((/* implicit */short) ((unsigned int) (+(arr_4 [i_4 - 1]))));
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_13 *= ((/* implicit */unsigned long long int) arr_20 [i_5] [i_4] [(unsigned short)1] [i_3] [i_2] [(unsigned short)1]);
                            arr_21 [9] [i_4] = ((/* implicit */long long int) (((~(arr_19 [0LL] [i_1] [i_5] [(short)8] [i_4]))) > (((/* implicit */long long int) min((max((((/* implicit */unsigned int) (unsigned short)60443)), (var_0))), (((/* implicit */unsigned int) ((short) var_2))))))));
                            arr_22 [(signed char)8] [(signed char)8] [i_4] [i_4] [(signed char)8] [(_Bool)1] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_14 = arr_15 [i_1 - 2] [9ULL] [i_1 - 2] [9ULL];
                        }
                        for (unsigned int i_6 = 1; i_6 < 9; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_1 [i_1 - 1]))) ? (min((((/* implicit */unsigned long long int) ((arr_19 [i_1 + 1] [4LL] [i_3] [i_4] [i_4]) - (((/* implicit */long long int) ((/* implicit */int) (short)25599)))))), (((arr_10 [i_6]) - (arr_11 [i_1 - 1] [i_2] [i_1 - 1]))))) : (((/* implicit */unsigned long long int) min((arr_3 [i_4] [i_4]), (arr_3 [i_4] [i_4]))))));
                            var_16 = ((((/* implicit */_Bool) (short)-25599)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) var_1)))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (arr_10 [i_1])))))))) : (((((/* implicit */_Bool) max((arr_5 [(unsigned char)1] [i_3]), (arr_12 [9U] [i_6 + 1])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 4U)), (var_8)))) : (arr_5 [i_3] [(short)3]))));
                        }
                        for (signed char i_7 = 2; i_7 < 9; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 3421693804U)) ? (arr_5 [i_4] [i_2]) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) * (arr_3 [i_1] [i_4]))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [1ULL] [i_1 - 2])) : (((/* implicit */int) var_2))))) : (min((max((((/* implicit */unsigned long long int) (short)-25796)), (arr_27 [4U] [3LL] [6] [i_3] [i_1] [i_1]))), (((((/* implicit */_Bool) (signed char)115)) ? (arr_0 [(signed char)4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [(unsigned short)3])))))))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)26013))))), ((-(arr_23 [i_1] [i_1] [i_7] [(signed char)6] [i_1] [i_4] [i_4])))))), (min((((/* implicit */unsigned long long int) arr_23 [i_7] [i_4] [i_7] [i_3] [i_7] [i_2] [i_1])), (((((/* implicit */_Bool) arr_1 [i_2])) ? (17ULL) : (((/* implicit */unsigned long long int) 393216))))))))));
                            var_19 = ((/* implicit */unsigned long long int) ((short) arr_11 [i_1 - 2] [6LL] [i_1]));
                        }
                        for (unsigned short i_8 = 3; i_8 < 8; i_8 += 4) 
                        {
                            arr_32 [i_1 - 2] [i_4] [i_4] = ((((/* implicit */_Bool) max((arr_30 [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_4] [i_4 - 1] [i_4 - 1]), (arr_30 [i_1] [i_1] [i_1] [i_1 - 1] [i_4] [i_4 - 1] [(unsigned short)0])))) ? (((((/* implicit */_Bool) max((var_5), (0ULL)))) ? (arr_10 [i_8 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_6 [i_4 - 1] [i_1 + 1]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? (((/* implicit */long long int) arr_29 [i_1 - 2] [i_2] [i_4 - 1] [(short)5])) : (((long long int) arr_2 [i_2] [i_2]))))));
                            arr_33 [(short)3] [i_4] [(short)3] = 1725472821;
                            var_20 = (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (arr_23 [1ULL] [1ULL] [i_4] [i_3] [(signed char)1] [i_4] [i_8])))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32766))) * (arr_16 [i_1]))))));
                            var_21 = ((arr_11 [1] [i_4] [i_8]) >> (((/* implicit */int) ((unsigned short) arr_24 [i_1 - 1] [i_1 + 1]))));
                            arr_34 [9ULL] [9ULL] [i_3] [i_4] [9ULL] = min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25))) >= (arr_1 [(unsigned short)0])))), (((((/* implicit */_Bool) arr_25 [i_8 + 1] [(unsigned char)5] [i_4 - 1] [i_4 - 1] [i_1 - 1] [8ULL] [i_1])) ? (arr_10 [i_8 - 1]) : (arr_10 [i_8 - 3]))));
                        }
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 - 1] [(short)3] [i_1])) ? ((-((+(((/* implicit */int) (signed char)-33)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max(((short)-32763), ((short)9442)))))))));
        arr_35 [i_1] = ((/* implicit */long long int) max((((arr_5 [i_1 - 1] [i_1 + 1]) << (((arr_10 [i_1 - 1]) - (17713669521881601082ULL))))), ((+(max((4690857358532869055ULL), (((/* implicit */unsigned long long int) arr_24 [i_1] [i_1]))))))));
        var_23 = ((/* implicit */short) (-(min((arr_27 [i_1] [3] [i_1] [i_1] [(short)1] [i_1 + 1]), (arr_1 [i_1 - 1])))));
    }
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_36 [i_9]), (arr_36 [i_9])))) / (((/* implicit */int) arr_36 [i_9]))));
        var_25 = ((/* implicit */long long int) arr_36 [i_9]);
    }
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (4613471468690861821ULL) : (((/* implicit */unsigned long long int) -393216))))))) ? (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_3)) : (var_5))) - (((/* implicit */unsigned long long int) (+(var_8)))))) : (((/* implicit */unsigned long long int) 699399747U))));
}
