/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243632
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
    var_20 = ((/* implicit */unsigned int) (+(var_7)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((unsigned long long int) arr_4 [i_1 + 3] [i_1] [i_1] [i_1 + 1]));
                    arr_7 [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) max((1741507176914105469ULL), (var_6))))))), ((~(((/* implicit */int) var_5))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_13)))) ? (max((((/* implicit */long long int) var_16)), (var_9))) : (var_14)))) ? ((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_15))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [(unsigned char)1] [i_1 + 4]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            var_23 = ((((/* implicit */_Bool) (+(1581633103U)))) || (((/* implicit */_Bool) 5712178731079043559LL)));
                            arr_12 [i_0] [i_0] [i_2] [i_3 + 1] [i_0] = (~(((min((var_13), (((/* implicit */unsigned int) (_Bool)1)))) ^ (((arr_3 [i_0] [i_0] [i_2]) >> (((/* implicit */int) (_Bool)1)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) var_18);
                            arr_15 [i_0 + 1] [i_0 + 1] [(_Bool)1] [(_Bool)1] [i_1 + 1] [i_3 + 1] [i_0] = ((/* implicit */signed char) ((long long int) ((var_5) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))));
                            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_3 + 1] [i_1 + 1] [i_0] [i_3 + 1]))));
                        }
                        arr_16 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) min((var_18), (arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (unsigned char)220))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1 + 3])) || (((/* implicit */_Bool) (unsigned char)93))))) : (arr_8 [i_1 - 1] [i_1] [i_2] [i_0])));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_5)))))) ? (((/* implicit */int) (unsigned char)7)) : ((~(arr_9 [i_6 - 1] [i_6 - 1] [i_0] [i_6 - 1])))));
                        arr_19 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                        var_28 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) min((arr_17 [(unsigned char)3] [i_6] [i_6] [(unsigned char)3] [i_6 - 1] [i_6 - 1]), (((/* implicit */unsigned int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (signed char)126))))))), (((/* implicit */long long int) (short)-31090))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_7] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_20 [(signed char)7] [(signed char)7] [i_0 + 1] [i_6] [i_0 + 1] [i_1])) : (var_1)))));
                            var_29 = ((/* implicit */unsigned long long int) ((var_0) << (((var_6) - (1838899515694101303ULL)))));
                            var_30 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1]))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            arr_26 [i_8] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) var_18);
                            arr_27 [i_8] [i_0] [i_0] = ((/* implicit */short) min(((+(max((0U), (var_0))))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)62)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (13606249143592005625ULL)))))))));
                        }
                    }
                    for (unsigned int i_9 = 2; i_9 < 11; i_9 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_9 - 1] [i_1 + 1] [i_0 + 1])) ? (4267586349U) : (var_13)))) / (((long long int) arr_25 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
                        arr_31 [i_0] [i_0] [i_0 + 1] [i_9] |= ((/* implicit */int) ((unsigned long long int) var_17));
                    }
                }
            } 
        } 
    } 
    var_32 = ((unsigned int) (~((-(((/* implicit */int) (signed char)-62))))));
    var_33 *= ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
    var_34 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_7)) : (max((13544211541807117333ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
}
