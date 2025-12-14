/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44372
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
    var_15 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_4))))) : (max((arr_3 [i_0] [i_1] [i_1]), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 7350952397839348674LL)) : (arr_3 [i_0] [i_1] [i_1])))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 14917554868685372206ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9)))), (((var_13) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_0] [i_2]))))))) ? ((~(((unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_4] [i_2 - 2])) ? (max((3529189205024179397ULL), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [(unsigned short)3] [i_2 - 2])))) : (((/* implicit */unsigned long long int) ((arr_13 [i_0] [i_1] [i_4] [i_3] [i_4]) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (signed char)-7))))))) ^ (((/* implicit */unsigned long long int) max((5266752687784152047LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12896)) && (((/* implicit */_Bool) var_7)))))))))))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((arr_8 [i_0] [i_1 + 1] [i_3 + 1]) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_4] [i_3 + 1]))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-83))));
                        arr_17 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-5266752687784152037LL)))) ? (((((/* implicit */_Bool) (short)22060)) ? (arr_9 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : ((~(var_8)))));
                    }
                }
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1 - 3] [i_1 - 4] [i_1 - 4])) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_12 [i_0] [i_0] [(_Bool)0] [i_0] [i_0])), (arr_14 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1] [(signed char)10] [i_1])))))) ? (((arr_2 [(signed char)6]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5266752687784152035LL)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_4 [(signed char)8] [i_1]))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34119))) : (var_10))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22977)) && (((arr_13 [i_0] [i_1 + 1] [(unsigned char)4] [i_1 + 2] [i_1]) && (((/* implicit */_Bool) arr_1 [6ULL])))))))))))));
            }
        } 
    } 
}
