/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24185
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
    var_10 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */int) ((unsigned char) var_4)))))) ? (min((6905923744255183863ULL), (((/* implicit */unsigned long long int) (unsigned char)164)))) : (((/* implicit */unsigned long long int) var_7))));
    var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-6983)) ? (((/* implicit */long long int) min(((-(((/* implicit */int) (signed char)-101)))), (((((/* implicit */_Bool) (short)-13926)) ? (var_7) : (((/* implicit */int) (unsigned char)178))))))) : (min((((((var_5) + (9223372036854775807LL))) >> (((var_0) - (2353942784U))))), (var_4)))));
    var_13 -= ((/* implicit */_Bool) (-(var_5)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) arr_4 [(_Bool)1] [i_1] [i_1]);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    arr_8 [(unsigned short)1] [i_0] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_9)), (min((((/* implicit */unsigned int) arr_4 [i_1] [i_1 + 4] [i_1 + 2])), ((~(var_0)))))));
                    var_15 = ((signed char) var_0);
                    var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_1 + 2])) - (((/* implicit */int) arr_7 [i_0 + 1])))) * ((~(arr_6 [i_0 + 3])))));
                    var_17 = ((/* implicit */short) min(((-(arr_2 [i_2]))), (arr_2 [i_2])));
                    var_18 = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) (short)-13918)) : (((/* implicit */int) (short)-26224))))))));
                }
                for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 2; i_4 < 13; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_6 [i_0])))) == (((((var_4) + (9223372036854775807LL))) << ((((+(979434765))) - (979434765)))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 + 4])) ? (((/* implicit */int) arr_7 [i_0 + 1])) : (arr_6 [i_4 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_6 [i_4 - 1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) arr_1 [i_0])) : ((~(((/* implicit */int) var_8))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_1) : (var_7)))) ? (((/* implicit */int) arr_15 [i_0 + 2] [(signed char)5] [(signed char)5] [i_3] [i_6] [i_6])) : (arr_4 [i_0 - 1] [i_0 + 2] [i_0 + 1])));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */short) ((var_2) + (((/* implicit */long long int) ((/* implicit */int) ((var_5) <= (arr_2 [i_0])))))));
                            arr_24 [i_0] [i_0] [i_0 + 3] [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned int) ((unsigned long long int) arr_7 [i_0 + 3]));
                        }
                    }
                    for (unsigned char i_8 = 2; i_8 < 13; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) -979434766)) / (-5016881801197810109LL)));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */int) ((min((((((/* implicit */_Bool) arr_17 [(unsigned short)1] [(unsigned short)1] [i_3] [i_3] [i_3] [i_3] [1])) ? (var_2) : (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)43)) * (((/* implicit */int) (short)7011))))))) - (((((/* implicit */_Bool) (unsigned short)12138)) ? (((long long int) arr_2 [(_Bool)1])) : (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_0])))))))));
                            var_26 = ((/* implicit */signed char) (-(((/* implicit */int) arr_17 [i_0] [i_0 + 3] [i_0] [i_0] [(_Bool)1] [i_0 + 2] [i_0 + 2]))));
                        }
                        var_27 = ((/* implicit */unsigned short) ((short) (-(((((/* implicit */int) (signed char)10)) + (((/* implicit */int) arr_1 [i_8])))))));
                        var_28 = ((/* implicit */unsigned long long int) (-(max((arr_30 [i_8] [i_0] [i_8] [(signed char)12]), (((/* implicit */long long int) var_8))))));
                    }
                    for (long long int i_10 = 4; i_10 < 13; i_10 += 4) 
                    {
                        var_29 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */int) (short)814)) : (377349067))) : (((((/* implicit */int) arr_19 [i_0 + 1] [i_0] [i_0] [i_0 + 3] [i_0 + 2] [i_0 + 3])) & (var_7)))))), ((-(arr_13 [i_0] [i_1 - 1] [i_3] [i_10 - 3])))));
                        var_30 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_32 [12U] [i_0 + 2] [i_1] [i_3] [i_0 + 2] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((979434765) >> (((var_0) - (2353942841U)))))))));
                    }
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned char) arr_31 [i_0 + 4] [i_0] [i_1 - 2] [i_3] [7LL] [i_11]);
                        var_32 -= ((/* implicit */unsigned char) ((arr_34 [i_0] [i_0 + 4]) << (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 4] [6U] [i_0 + 4]))) / (arr_32 [i_11] [i_11] [i_11] [8ULL] [i_11] [4ULL])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            arr_38 [i_0] [i_1 - 2] [(_Bool)1] [i_0] [i_0 + 2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0]))))) ? (((arr_31 [i_0 + 4] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) + (((/* implicit */int) arr_17 [i_0 + 4] [7U] [i_0 + 2] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_36 [i_0] [i_1] [(_Bool)1] [i_11] [i_0 - 1] [i_1])) != (((/* implicit */int) arr_37 [i_0] [i_1] [i_3] [i_3] [i_12]))))))) | (((/* implicit */int) arr_3 [i_0]))));
                            var_33 = ((/* implicit */unsigned short) min((((unsigned long long int) (-(arr_2 [i_0])))), (((/* implicit */unsigned long long int) (unsigned short)27414))));
                            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */long long int) var_0)) > (var_4)))) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_3] [i_3] [i_11] [i_12]))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [(unsigned short)12])) ? (5035461634086065445LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_7)) < (var_0)))))))));
                            var_35 = ((((/* implicit */_Bool) ((((/* implicit */int) (short)-20075)) % (((((/* implicit */_Bool) arr_30 [4U] [i_0] [i_11] [i_12])) ? (((/* implicit */int) (unsigned short)38807)) : (var_7)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-31388)) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)12138)))))))));
                        }
                    }
                    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) arr_14 [i_0] [i_0] [i_0 + 1] [i_0]))));
                }
                var_37 = ((/* implicit */short) min((var_6), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) -1188854987)) ? (((/* implicit */long long int) arr_34 [i_0 + 2] [i_1])) : (var_2)))))));
            }
        } 
    } 
}
