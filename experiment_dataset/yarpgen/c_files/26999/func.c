/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26999
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((var_5) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))))) ? (min((((/* implicit */unsigned long long int) var_13)), (min((((/* implicit */unsigned long long int) var_9)), (3037253491790036710ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >> ((-(((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((var_16), (((((((/* implicit */int) var_5)) | (((/* implicit */int) arr_3 [i_0] [i_0 + 2] [i_0 + 1])))) == (((max((((/* implicit */int) arr_1 [(_Bool)1])), (-1093633794))) - (((/* implicit */int) var_0))))))));
                var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-20))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_1))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)59)) ? (arr_11 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 3] [(unsigned char)5] [i_0 - 3])))))));
                            var_20 ^= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)0)) : ((((_Bool)1) ? (((/* implicit */int) var_0)) : ((-2147483647 - 1))))));
                        }
                    }
                    arr_15 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 10473425724129958356ULL)) || ((_Bool)1)))) > (((/* implicit */int) (signed char)89))));
                }
                for (long long int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (~(((((int) (unsigned short)29593)) ^ (((/* implicit */int) (_Bool)1))))));
                                arr_25 [i_0] [i_0] [i_1] [i_6] [i_0] = ((/* implicit */unsigned long long int) var_13);
                            }
                        } 
                    } 
                    arr_26 [i_1] [i_1] [(signed char)4] [i_5] = ((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_0] [i_1]);
                }
                for (long long int i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_9 = 3; i_9 < 15; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) min((min((((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) arr_20 [i_9 + 2] [i_1] [i_1] [i_0]))))), (((var_11) ? (var_14) : (((/* implicit */int) var_10)))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (((unsigned int) 16770837U)))))));
                        var_23 += ((/* implicit */_Bool) ((signed char) ((unsigned int) (_Bool)1)));
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned char) -1)))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_1))))), (max((((/* implicit */unsigned long long int) var_1)), (var_12)))))) ? (min((((/* implicit */unsigned int) arr_30 [i_0 + 2] [i_1] [i_8] [i_0 + 2] [i_8] [i_0 + 2])), ((+(4294967282U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [6U] [i_8] [i_1] [i_0])))))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) min(((-(18446744073709551595ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-541631385)))))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_11 = 1; i_11 < 16; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) arr_11 [i_0] [i_10])) ? (((/* implicit */int) (short)4095)) : (1819194671)))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_12)));
                        }
                        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            arr_40 [i_0] [9U] [i_1] [(signed char)5] [(signed char)5] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((unsigned int) (signed char)-107))));
                            var_29 = ((/* implicit */unsigned int) ((unsigned long long int) (!(var_0))));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)0))))) > (8643242273658534160ULL)));
                        }
                        for (unsigned long long int i_13 = 2; i_13 < 16; i_13 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) (unsigned short)48574))))));
                            var_32 |= ((/* implicit */unsigned long long int) var_3);
                        }
                        var_33 = ((/* implicit */int) ((unsigned long long int) 1320360138U));
                    }
                    for (unsigned char i_14 = 3; i_14 < 16; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_14 - 1]))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
                        var_35 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775785LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1851040625U))))));
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_47 [i_0 + 4] [i_0] [i_14] |= ((/* implicit */_Bool) max(((short)7472), (((/* implicit */short) (_Bool)0))));
                            var_36 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)27565))) - (2917326790371194582LL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) 11701306749756876188ULL))))))), (((/* implicit */int) var_6))));
                        }
                        var_37 = ((/* implicit */unsigned long long int) (signed char)-72);
                    }
                }
            }
        } 
    } 
    var_38 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)49782)) >> (((536870911ULL) - (536870911ULL)))));
    var_39 = ((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) ((short) (unsigned char)255))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_12))))));
}
