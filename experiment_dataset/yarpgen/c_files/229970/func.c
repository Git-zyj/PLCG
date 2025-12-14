/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229970
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (~(max((((/* implicit */unsigned int) min((var_3), (((/* implicit */short) var_11))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9))))))))));
                            arr_12 [8LL] [i_3] [(short)14] [i_3] [i_3] = ((/* implicit */short) max(((~(((/* implicit */int) (unsigned short)15061)))), (((((/* implicit */_Bool) (unsigned short)15646)) ? (((/* implicit */int) (unsigned short)8190)) : (((/* implicit */int) (unsigned short)50474))))));
                        }
                        for (short i_5 = 3; i_5 < 13; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_9))));
                            var_20 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_15)), (var_4)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) var_13))))))) : (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7))), (((/* implicit */long long int) max((((/* implicit */short) var_13)), (var_16)))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7))), (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))) ? (max((var_9), (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_9))))) ? ((~(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
                        }
                        for (short i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))), ((-(((/* implicit */int) (unsigned short)15062))))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (var_0))))) : ((+(var_9)))))));
                            arr_20 [i_0] [i_0] [i_0] [(short)4] [i_0] [i_0] = ((/* implicit */short) min(((+(((/* implicit */int) (unsigned short)61045)))), (((/* implicit */int) var_0))));
                            arr_21 [(unsigned short)4] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                        }
                        /* LoopSeq 4 */
                        for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50475)) ? (((/* implicit */int) (unsigned short)50459)) : (((/* implicit */int) (unsigned short)50474)))))));
                            var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)1165)) : (((/* implicit */int) (unsigned short)15060)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_4))))))) ? (((/* implicit */int) var_10)) : ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_1))))))));
                            var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_15)) ? ((~(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) (short)-5645)) ? (((/* implicit */int) (unsigned short)15061)) : (((/* implicit */int) (unsigned short)42688))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 3; i_8 < 15; i_8 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
                            arr_27 [i_0] [i_0] [i_1 + 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (unsigned short)50475)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (unsigned short)32)))) : ((-(((/* implicit */int) (short)28765))))));
                            var_28 = ((/* implicit */short) var_7);
                            var_29 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : ((-9223372036854775807LL - 1LL))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 3; i_9 < 15; i_9 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned char) var_0);
                            var_31 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12))))));
                            var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)64))));
                            var_33 = ((/* implicit */unsigned int) var_6);
                        }
                        for (long long int i_10 = 3; i_10 < 13; i_10 += 2) 
                        {
                            arr_35 [i_2] [i_3] = ((/* implicit */unsigned char) (+(1074818959808947190LL)));
                            arr_36 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_12))))) : ((~(((/* implicit */int) var_3)))))), (min(((+(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (unsigned short)15067))))));
                        }
                        arr_37 [i_0] [(short)12] [i_0] [i_0] [(unsigned char)9] |= ((/* implicit */short) max((((/* implicit */int) var_13)), (max((((/* implicit */int) min((var_16), (((/* implicit */short) var_11))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))))));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)32)) ? (1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
    }
    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) min(((~((~(-1801636486339417721LL))))), (((/* implicit */long long int) (~(((/* implicit */int) max((var_14), (((/* implicit */unsigned char) var_1)))))))))))));
        arr_41 [i_11] = ((/* implicit */unsigned short) var_10);
        arr_42 [(unsigned char)15] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))) : (max((var_7), (((/* implicit */long long int) var_17)))))))));
    }
    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)57355))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)(-32767 - 1))))))))) : (max((((/* implicit */unsigned int) var_6)), (var_9)))));
}
