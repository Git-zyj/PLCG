/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26627
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
    var_17 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) var_13)) : (max((var_2), (((/* implicit */unsigned int) var_6)))))));
    var_18 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-2005070899)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (var_13))) : (((/* implicit */int) var_4))))), (var_11)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) -2005070906)) ? (((/* implicit */int) (short)-19867)) : (2005070899)))))));
                var_20 = ((/* implicit */signed char) arr_3 [i_0 - 1] [i_1]);
                var_21 = ((/* implicit */long long int) arr_6 [i_0] [i_0 - 2] [i_0]);
                /* LoopSeq 3 */
                for (short i_2 = 2; i_2 < 24; i_2 += 3) 
                {
                    arr_12 [i_0 + 1] [i_0 + 1] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_2 - 1] [i_2])), (var_3)))), (arr_11 [i_0 - 1] [i_1] [i_2] [i_2 - 2])));
                    arr_13 [i_2] [16LL] [i_0 - 2] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_2 - 1])), (arr_0 [i_2])))) == (arr_3 [i_0 - 3] [i_2 - 2])))), (min((((((/* implicit */_Bool) arr_9 [i_2] [i_1] [14LL])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_1] [15LL])) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_2] [i_2 - 2])))), (((/* implicit */int) min((arr_10 [i_1] [i_1] [i_1]), (((/* implicit */short) arr_8 [i_0] [i_0 - 2] [i_0] [i_0])))))))));
                    var_22 = ((/* implicit */unsigned long long int) var_15);
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_2 + 1]))) : (arr_11 [i_1] [i_2] [i_2] [i_0 - 3])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_2 + 1] [(unsigned short)0] [(unsigned short)0]))))) ? (min((10496709913148427622ULL), (((/* implicit */unsigned long long int) 0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [(unsigned short)12] [i_0])) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) -2005070905)) ? (-6830139467570537291LL) : (((/* implicit */long long int) 2005070898)))))))));
                    arr_14 [i_2 + 1] [(unsigned short)7] [i_1] [i_0] = ((/* implicit */long long int) (!(var_6)));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 2) 
                    {
                        arr_20 [i_4] [i_4] [15LL] [(short)8] [i_1] [(unsigned char)10] = ((/* implicit */unsigned char) (+(arr_17 [i_4 + 2] [i_0 + 2] [i_0 - 3])));
                        var_24 = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_3] [i_4]))) / (arr_11 [i_0] [i_0] [(_Bool)1] [i_0 - 1])))));
                    }
                    var_25 = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0 + 1]))));
                    var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 3]))));
                    arr_21 [5LL] [i_3] [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)229))));
                }
                for (short i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                {
                    var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */unsigned int) (+(arr_18 [i_0] [i_1] [(_Bool)1] [4LL])))) : (var_2)))) ? (((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) arr_0 [4]))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)9980))) : (((var_3) << (((((var_11) + (5968811626221322646LL))) - (3LL))))))) : ((+(((/* implicit */int) arr_0 [i_0 - 2]))))));
                    arr_25 [i_0] [i_5] [i_5] = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_9 [i_0] [i_1] [i_0 + 1])))), (((((/* implicit */_Bool) (unsigned short)0)) ? (1787814030) : (((/* implicit */int) (_Bool)0))))));
                    var_28 = ((int) max((2147483630), (2147483630)));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            {
                var_29 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_22 [(unsigned char)20] [i_6])) ? (((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_6])) : (((/* implicit */int) var_4))))))), (min((((/* implicit */unsigned long long int) ((short) var_8))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1]))) : (arr_24 [i_7] [i_6] [i_7])))))));
                arr_33 [i_6] [i_7] = ((/* implicit */long long int) min((var_4), (((/* implicit */short) ((((/* implicit */int) arr_30 [i_6] [i_7] [i_6])) > (((/* implicit */int) arr_30 [i_6] [i_7] [i_7])))))));
                var_30 = arr_8 [i_7] [i_7] [i_7] [i_6];
                /* LoopNest 3 */
                for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    for (signed char i_9 = 1; i_9 < 10; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)0)), (2005070875)))) || (((/* implicit */_Bool) max((((/* implicit */short) arr_9 [i_7] [18LL] [17ULL])), (var_9)))))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_39 [i_9 + 1] [i_8] [i_8] [i_6])), (((((/* implicit */_Bool) arr_9 [i_6] [(unsigned char)13] [(unsigned short)24])) ? (((/* implicit */int) arr_2 [8ULL])) : (((/* implicit */int) arr_8 [i_6] [i_7] [i_7] [i_9]))))))) : (((((/* implicit */long long int) max((((/* implicit */int) arr_0 [12U])), (arr_18 [i_6] [i_6] [i_7] [i_6])))) ^ (min((var_15), (((/* implicit */long long int) arr_22 [i_7] [i_9]))))))));
                                var_32 = ((/* implicit */unsigned char) ((max((((/* implicit */int) arr_19 [(short)14] [i_9 + 1] [i_9 - 1] [i_6] [i_6])), (var_16))) < (((((/* implicit */_Bool) arr_32 [i_8] [(signed char)2])) ? (((/* implicit */int) arr_6 [i_6] [(short)13] [i_9 - 1])) : (((/* implicit */int) arr_6 [i_10] [i_7] [i_10]))))));
                                arr_43 [i_6] [i_6] [i_8] [i_8] [i_10] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((arr_28 [i_8]) | (arr_28 [1]))) : (arr_28 [i_8]))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_10] [i_6])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))) == (((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                } 
                arr_44 [i_6] [1] [i_6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_7] [i_7])) ? (var_15) : (arr_27 [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (max((-9223372036854775802LL), (((/* implicit */long long int) (short)-8429)))))), (((/* implicit */long long int) min(((+(((/* implicit */int) var_7)))), ((+(((/* implicit */int) var_4)))))))));
            }
        } 
    } 
    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) (((!(((/* implicit */_Bool) ((unsigned int) var_5))))) && (((/* implicit */_Bool) min(((+(((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (var_3)))))))))));
}
