/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219908
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) ((unsigned char) var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_0] [i_1])))) : (((((((/* implicit */_Bool) 1179198206U)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7))) % (((/* implicit */long long int) (-(((/* implicit */int) (signed char)11)))))))));
                var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 3340971364321338657LL)) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (arr_0 [i_1] [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3340971364321338657LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_6)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)11)))) - (((var_4) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_1] [i_2])))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */unsigned char) 3625425U);
                            arr_16 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) arr_13 [i_0] [i_1] [i_1]));
                            arr_17 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */signed char) (-(arr_6 [i_0] [i_0] [i_0])));
                            var_13 = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                        }
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */long long int) ((signed char) arr_19 [i_5] [i_5] [i_1] [i_5] [i_5]));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-12)) * (((/* implicit */int) (_Bool)1))));
                            arr_21 [i_0] [i_0] [i_1] [i_1] = ((unsigned int) arr_11 [i_0] [i_0] [i_1] [i_0] [i_0]);
                        }
                        var_16 = arr_0 [i_0] [i_1];
                        arr_22 [i_3] [i_1] [i_0] = var_5;
                        var_17 = ((/* implicit */signed char) 2045129558U);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_6 - 1])) <= (((/* implicit */int) var_2)))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_6 + 2] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_6] [i_2]))))) : (((unsigned int) (signed char)31))));
                    }
                    var_20 = ((/* implicit */signed char) var_3);
                    arr_25 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_5);
                }
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            arr_35 [i_0] [i_1] [i_7] [i_8] [i_9] = ((/* implicit */unsigned long long int) 466081499427396497LL);
                            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_9 [i_0] [i_0] [i_1] [i_8]))) ? (((((/* implicit */int) arr_9 [i_0] [i_1] [i_7] [i_8])) & (((/* implicit */int) arr_9 [i_9] [i_8] [i_1] [i_0])))) : (((/* implicit */int) ((_Bool) arr_33 [i_0] [i_1] [i_7] [i_8] [i_9])))));
                        }
                        for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_1 [i_0] [i_7])) >> (((arr_15 [i_1] [i_7] [i_10]) - (1838153379013861220ULL)))))))) ? (arr_11 [i_0] [i_1] [i_7] [i_8] [i_10]) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_19 [i_10] [i_8] [i_7] [i_1] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_20 [i_8] [i_1] [i_7] [i_1])))))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) 1614099957U)) < (0LL)));
                            var_24 = ((/* implicit */unsigned int) arr_19 [i_0] [i_1] [i_1] [i_8] [i_10]);
                        }
                        /* vectorizable */
                        for (long long int i_11 = 1; i_11 < 22; i_11 += 3) 
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_11 + 1] [i_11 + 2] [i_1] [i_11 - 1] [i_11 + 1]))) | (arr_33 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1])));
                            arr_41 [i_1] [i_8] [i_7] [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) arr_37 [i_8] [i_1] [i_7] [i_8] [i_11] [i_1]));
                        }
                        for (int i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_0 [i_0] [i_7]))));
                            var_27 = ((/* implicit */long long int) ((3969458179U) > (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)61), ((unsigned char)0)))))));
                        }
                        var_28 = ((/* implicit */int) (unsigned char)123);
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1] [i_7] [i_1])) ? (((/* implicit */int) ((unsigned char) (signed char)115))) : (((/* implicit */int) max(((signed char)8), (arr_9 [i_0] [i_1] [i_7] [i_8]))))));
                        var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) max((var_6), (arr_24 [i_7] [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_13 [i_8] [i_1] [i_7])))) : (2680867338U)))) : (((((/* implicit */_Bool) 0LL)) ? (((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_43 [i_0] [i_1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7] [i_1] [i_8]))))))))));
                    }
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_0] [i_0] [i_7] [i_1] [i_7]))))), (0LL))))));
                    arr_45 [i_1] [i_1] = ((/* implicit */_Bool) var_6);
                    var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 492116136844825908ULL)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (unsigned char)52)))) == (((/* implicit */int) ((max((((/* implicit */long long int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_31 [i_1]))) != (((/* implicit */long long int) (-(((/* implicit */int) (signed char)115))))))))));
                }
                var_33 |= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-7)) >= (((/* implicit */int) (signed char)-20))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_13 = 1; i_13 < 21; i_13 += 1) 
                {
                    arr_49 [i_1] [i_1] [i_1] [18] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_0] [i_1] [(signed char)4] [i_13] [i_0]))));
                    var_34 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_12 [(unsigned char)22])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_0))));
                }
            }
        } 
    } 
    var_35 = var_7;
    var_36 = ((/* implicit */signed char) (-(((((/* implicit */long long int) (-(((/* implicit */int) (signed char)115))))) * (((((/* implicit */_Bool) 1965052648)) ? (0LL) : (var_7)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 1; i_14 < 7; i_14 += 2) 
    {
        for (unsigned short i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            {
                var_37 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (0LL)))), (((arr_6 [i_14] [i_14 - 1] [i_15]) << (((var_7) - (6630437533123524834LL)))))));
                var_38 = ((/* implicit */unsigned int) var_2);
                arr_56 [i_15] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_15])))))));
            }
        } 
    } 
}
