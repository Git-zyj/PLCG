/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245631
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
    var_13 = ((/* implicit */signed char) (+(((/* implicit */int) (short)(-32767 - 1)))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(2196297719U)))) ? (((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0 + 2]))) ? (((((/* implicit */_Bool) 1827973808)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_1])))) : (min((((/* implicit */int) var_9)), (var_11))))) : ((~(((((/* implicit */int) arr_10 [(signed char)1] [i_4] [i_4] [i_4] [i_0] [(signed char)1] [i_3])) >> (((var_3) - (1515485564U)))))))));
                            var_14 ^= ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_2]);
                            arr_13 [i_4] [i_1] [i_1] [i_0 + 1] [i_1] [i_1] [i_0 + 1] = ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_4]))))) == (((((/* implicit */_Bool) 9311333580304833099ULL)) ? (var_11) : (((/* implicit */int) arr_9 [i_1] [i_4] [i_1] [i_2] [i_1] [i_0])))))) && (((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_2] [i_3] [i_2]))))))));
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_3] [i_4])) | (((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_0 + 1] [16] [i_4] [16]))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (((arr_0 [4U]) >> (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) var_1)))) > (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))))))))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 15; i_5 += 1) /* same iter space */
                        {
                            var_16 |= ((/* implicit */unsigned int) max((236357179), (((/* implicit */int) (signed char)2))));
                            var_17 &= ((/* implicit */long long int) max((5803531346298275196ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                            arr_18 [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_5 - 1])) ? (arr_0 [i_5 + 3]) : (arr_0 [i_1])))));
                            var_18 |= ((/* implicit */short) arr_2 [i_3]);
                        }
                        for (unsigned char i_6 = 1; i_6 < 15; i_6 += 1) /* same iter space */
                        {
                            var_19 *= ((/* implicit */short) ((0ULL) >> (((236357186) - (236357163)))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((~(((int) arr_7 [(unsigned char)9] [i_1] [(signed char)9] [i_1])))) : (((/* implicit */int) arr_2 [i_0 + 2]))));
                            var_21 = ((/* implicit */int) arr_1 [i_0] [i_0]);
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_7 [i_2] [i_3] [i_1] [i_2]))));
                            var_23 = ((/* implicit */unsigned char) ((long long int) 236357200));
                        }
                        for (unsigned char i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_1] [(short)8] [i_3] [(short)8] = ((((/* implicit */_Bool) (~(((arr_19 [(short)9] [i_3] [i_1] [i_1] [8]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [17])))))))) ? (((((((/* implicit */_Bool) arr_2 [(unsigned short)3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_20 [i_0] [0ULL] [i_2] [i_1] [i_7]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((arr_0 [i_7 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))));
                            var_24 = ((/* implicit */unsigned long long int) ((short) ((((((/* implicit */unsigned long long int) arr_8 [i_3] [i_2] [i_2] [i_3])) < (arr_20 [i_7] [i_1] [i_2] [i_1] [i_1]))) ? (((/* implicit */unsigned int) ((arr_14 [i_0] [i_7 + 3] [i_2] [i_3]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_1]))))) : (arr_23 [i_0 + 1] [i_1] [i_1] [i_7] [i_1]))));
                        }
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_10))));
                        arr_25 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) 236357186);
                        arr_26 [i_0 - 1] [i_0 - 1] [i_1] = ((/* implicit */short) arr_10 [i_2] [i_1] [i_2] [i_2] [i_1] [i_2] [4]);
                        arr_27 [i_1] [15LL] [i_2] [i_3] = ((/* implicit */int) arr_4 [i_0] [i_2] [i_3]);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) (+(arr_20 [i_8] [i_1] [i_2] [i_1] [i_0])));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((long long int) -236357197)) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46570)))))))))));
                        var_28 = ((/* implicit */int) ((unsigned int) ((_Bool) arr_3 [i_8])));
                        var_29 |= ((/* implicit */long long int) max((((((/* implicit */int) ((arr_11 [i_8] [i_2] [i_0 + 2] [i_1] [i_0 + 2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [(unsigned char)4] [i_8])))))) % (((/* implicit */int) arr_5 [i_2])))), (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1]))));
                        var_30 = ((/* implicit */unsigned char) var_8);
                    }
                    arr_30 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_28 [i_1] [i_0 + 2]))) ? (((/* implicit */int) arr_6 [i_0 - 1])) : (((((-236357179) + (2147483647))) >> ((((((-2147483647 - 1)) - (-2147483631))) + (48)))))));
                    var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0 + 1])) && (((/* implicit */_Bool) arr_4 [i_0 + 2] [i_2] [i_0 + 1])))) && (((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_1] [i_2] [i_0 - 1])) || (((/* implicit */_Bool) arr_8 [(short)17] [3LL] [i_1] [i_0 + 2]))))));
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_1] [(short)17])))))));
                }
            } 
        } 
    } 
}
