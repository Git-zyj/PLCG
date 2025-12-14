/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43415
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) ((unsigned char) arr_0 [i_0]))) - (((/* implicit */int) (signed char)60)))))))));
        var_15 -= min((((unsigned long long int) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))))));
    }
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) var_0)), (arr_7 [i_1] [i_2] [i_3]))), (((/* implicit */unsigned int) (signed char)-48))));
                    var_17 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_3] [i_1])) : (404802750)))), ((~(16809311738640348198ULL)))))));
                    var_18 = ((/* implicit */int) ((short) min((min((1015808), (((/* implicit */int) (signed char)39)))), (((/* implicit */int) var_0)))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_3] [i_2])) == (arr_11 [i_1] [i_1] [i_1] [i_1] [(unsigned short)7])));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (signed char)-40))) ? (((/* implicit */int) var_1)) : (arr_11 [(_Bool)0] [(short)15] [(signed char)13] [i_4 + 1] [i_4 - 1])));
                        var_21 = ((/* implicit */signed char) (~((~(-4194304)))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */short) ((int) arr_8 [i_1] [i_2] [i_3] [i_5]));
                        var_23 = ((/* implicit */signed char) max((min((((/* implicit */long long int) var_7)), (var_9))), (((/* implicit */long long int) min((arr_9 [i_1] [i_1] [i_1] [i_1]), (arr_9 [i_1] [i_2] [i_1] [i_5 + 2]))))));
                        var_24 = max((max((((/* implicit */unsigned long long int) arr_12 [0] [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 2])), (arr_1 [i_3]))), (((/* implicit */unsigned long long int) var_9)));
                        /* LoopSeq 4 */
                        for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_1] [i_1]), (arr_2 [i_6] [i_6]))))) : (min((((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (-2047379075753773198LL))), ((+(var_9)))))));
                            var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-48)) ? (max((((/* implicit */unsigned int) var_3)), (2478241893U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11))))));
                            var_27 = ((/* implicit */unsigned char) ((max((max((((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [i_2] [i_3] [i_5 + 2] [8ULL])), (var_8))), (((/* implicit */unsigned long long int) ((signed char) arr_6 [i_6]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [5LL] [i_5 + 2] [i_3] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(unsigned char)12] [(signed char)1] [i_3] [i_5] [1]))) : (var_13)))) || (((/* implicit */_Bool) ((signed char) arr_2 [i_3] [i_3])))))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((arr_14 [i_5 + 1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) (signed char)-14)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3264973168U)) ? (var_9) : (((/* implicit */long long int) arr_7 [i_7] [i_2] [i_3])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_5 [i_1]), ((signed char)-122)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_7] [10ULL])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) : (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11)))) : (arr_7 [i_1] [i_2] [i_3])))));
                            var_29 = ((/* implicit */signed char) min((((/* implicit */long long int) (+(var_4)))), ((-(-9109999572181738534LL)))));
                            var_30 += ((/* implicit */unsigned short) arr_14 [3LL] [0LL] [i_3] [i_5 + 1]);
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 2) 
                        {
                            var_31 = ((/* implicit */int) ((6633532624873150784ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121)))));
                            var_32 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) -1782876073)), (6633532624873150780ULL)));
                        }
                        for (int i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            var_33 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) ((int) (signed char)-40))), (max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_8 [9] [4LL] [i_3] [i_5]))))), (min((arr_17 [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 - 1] [i_5 - 1]), (((/* implicit */unsigned long long int) arr_22 [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 2] [i_5 + 2]))))));
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (1976305201) : (((/* implicit */int) (signed char)48)))))))) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (signed char)16)))))) : (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_5 - 1]))))), ((signed char)-110))))));
                        }
                    }
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        var_35 = ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)252)) + (((/* implicit */int) (short)-1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))) : (max((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) var_2)), (var_8))))));
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_16 [(signed char)15] [i_2] [i_3] [i_10] [i_10])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)36)))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((short)-21), (var_11)))), (arr_23 [i_1] [8ULL] [0LL] [0LL]))))));
                        var_37 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1] [i_1])) >= (((/* implicit */int) (short)0))))), (arr_25 [i_3] [i_2])));
                    }
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        var_38 = ((/* implicit */short) ((unsigned char) ((int) arr_12 [i_1] [i_1] [i_2] [i_3] [i_11])));
                        var_39 = ((/* implicit */signed char) ((unsigned short) 6633532624873150799ULL));
                    }
                }
            } 
        } 
    } 
}
