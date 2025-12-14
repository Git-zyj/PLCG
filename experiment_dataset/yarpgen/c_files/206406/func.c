/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206406
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(2147483647)))) ? (((((/* implicit */_Bool) 3740879668123247437ULL)) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [12U] [i_1] [i_1] [i_1] [(_Bool)1]))))) && (((/* implicit */_Bool) var_4))));
                            var_19 |= ((/* implicit */short) (+(((((/* implicit */_Bool) var_14)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (var_3))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [12] [i_1] [i_2] [i_3] [i_4] [18U]))) : (var_17)))))));
                            var_20 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_7))))) / (((((/* implicit */_Bool) var_11)) ? (arr_1 [i_3]) : (8ULL)))))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (var_13)));
                        }
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            arr_17 [(unsigned short)2] [2] [i_2] [i_3] [i_2] |= ((/* implicit */long long int) min(((~((+(var_10))))), (((/* implicit */unsigned int) var_14))));
                            arr_18 [i_0] [i_3] [i_0] = ((/* implicit */short) min((min(((+(var_4))), (((/* implicit */unsigned long long int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned short)2047))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) var_15))))) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_13 [i_5] [i_3] [i_0] [i_0] [i_0] [i_0])) > (var_4)))))))));
                            arr_19 [i_0] [i_1] [i_2] [i_0] [i_5] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) var_1);
                            var_22 ^= max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1U)), (17128003673712704664ULL)))) ? (((((/* implicit */_Bool) arr_4 [2ULL] [2ULL] [(unsigned short)16])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [i_1] [i_2] [i_3] [i_2] [2] [10U]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(_Bool)1] [i_1]))))), (((/* implicit */unsigned int) var_1)));
                        }
                        var_23 |= ((((/* implicit */_Bool) ((arr_6 [i_2]) ^ (((/* implicit */unsigned long long int) (+(arr_9 [10U] [10U] [10U] [i_2] [(_Bool)1] [10U]))))))) ? (((/* implicit */unsigned long long int) (~(max((var_10), (((/* implicit */unsigned int) var_6))))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) max((-1593239267), (2147483647)))) : (arr_6 [i_1]))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_0)) : (arr_7 [i_0] [i_0] [i_2])))), (arr_13 [3] [i_0] [i_0] [i_0] [1U] [6])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && ((_Bool)1)))) : ((((~(((/* implicit */int) arr_2 [i_0] [i_2] [i_0])))) - (((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [8U] [8U] [i_0])), ((unsigned short)127))))))));
                        arr_23 [i_0] [(unsigned short)6] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_14)) << (((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned short)65535)))), (((arr_13 [(unsigned short)14] [i_1] [i_2] [i_0] [i_1] [19ULL]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8190))))))))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (max((max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) arr_5 [(unsigned short)4] [i_6])) ? (((/* implicit */unsigned int) 9)) : (var_3))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [(unsigned char)6] [i_6] [i_6] [i_0] [i_2] [14LL]))))))))))));
                    }
                    var_26 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
                    arr_24 [i_0] [i_0] [i_0] [i_2] = ((((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0])))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_2])) ? (((/* implicit */int) arr_22 [(unsigned short)2] [i_2] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_2]))))) ? (arr_10 [i_0] [i_1] [i_1] [i_2] [i_0] [(unsigned short)15]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535))))))));
                    var_27 = ((/* implicit */unsigned char) (+(var_11)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            {
                                arr_29 [i_8] [i_0] [14U] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((((/* implicit */int) arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [(_Bool)1] [i_0])), (arr_4 [19U] [i_1] [i_0])))) ? (arr_10 [i_0] [i_0] [i_2] [i_7] [i_8] [i_0]) : (max((arr_6 [i_1]), (arr_6 [i_0])))))));
                                var_28 ^= (-(((((/* implicit */_Bool) arr_20 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))));
                                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (signed char)37))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
                {
                    var_30 += ((/* implicit */unsigned int) (_Bool)1);
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_15 [i_0] [i_1] [0] [i_9] [i_9])) : (((/* implicit */int) arr_5 [(unsigned short)18] [i_9])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) & (var_2)))) ? (((/* implicit */int) ((_Bool) 3754595811U))) : (((/* implicit */int) ((((/* implicit */int) (short)27275)) != (arr_4 [13U] [i_9] [i_0]))))))) < (max((((/* implicit */unsigned long long int) arr_34 [i_0])), (max((((/* implicit */unsigned long long int) var_3)), (var_4)))))));
                                arr_38 [i_11] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((unsigned int) arr_7 [i_0] [i_1] [i_9])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_9] [i_1] [i_11] [(signed char)5] [i_1] [i_11] [i_0])))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                {
                    var_33 = ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) var_15))))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) var_7)))));
                    var_34 ^= ((/* implicit */unsigned int) max(((~(((/* implicit */int) (signed char)100)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_12] [(_Bool)1] [i_1])))))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 3) 
                        {
                            {
                                arr_46 [(unsigned char)5] [i_0] [i_12] [i_0] [i_0] = ((/* implicit */unsigned short) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_47 [(short)16] |= ((/* implicit */unsigned short) var_1);
                                arr_48 [i_0] [i_0] = ((/* implicit */unsigned short) var_15);
                                var_35 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)14] [0LL]))) % ((~(max((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)44470))))))));
                                arr_49 [i_0] [i_0] [i_0] [(short)18] [i_14] |= ((/* implicit */unsigned int) var_14);
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_35 [i_0] [6] [i_0]))))) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [7U] [i_1])) : (((/* implicit */int) min((var_16), (var_14)))))));
                }
                arr_50 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((max((((/* implicit */int) arr_3 [i_0] [i_0])), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5)))))) != (((/* implicit */int) (!(((arr_37 [i_0] [i_0] [i_0] [i_0]) < (var_3))))))));
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) 9978806891322794675ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15)))))))));
    var_38 = ((/* implicit */_Bool) min((((/* implicit */int) var_6)), (1206165429)));
}
