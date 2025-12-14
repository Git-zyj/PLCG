/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221053
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                            {
                                arr_15 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31968)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (0U)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_2] [(_Bool)1]))))) : (((arr_14 [i_3] [i_3] [i_3] [i_3] [i_4]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 3248939639U))))))) : (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_11))), (((/* implicit */unsigned long long int) arr_13 [i_3] [i_3] [i_3] [i_4] [i_4] [i_4 + 1]))))));
                                var_14 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_11)) ? (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]) : (arr_14 [i_0] [i_0] [i_2] [4LL] [i_2]))), (((/* implicit */long long int) ((arr_0 [i_0]) & (arr_0 [(unsigned short)4]))))));
                            }
                            arr_16 [i_0] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 9845889568088810674ULL)) ? (((/* implicit */int) (unsigned short)23392)) : (((/* implicit */int) (_Bool)1)))));
                            arr_17 [i_0] [i_0] [(unsigned short)3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-38)) && (((/* implicit */_Bool) 2637992135U)))))))) && (((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_5 [i_1])))) <= (((/* implicit */int) arr_12 [i_0]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    arr_22 [i_0] [i_0] [(_Bool)1] [i_5] = (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 3628726170U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_2))))));
                    arr_23 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0U)) ? ((~(-1378909361268880336LL))) : (((/* implicit */long long int) 0U)))) >= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5 - 1] [i_5] [i_1] [4LL])))));
                    arr_24 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)0)), (max((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) (_Bool)1)), (805306368U)))))));
                    var_15 |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (short)-3537))))))), (arr_3 [i_5 - 1])));
                }
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (+(arr_20 [i_0] [i_1] [i_1] [i_6]))))));
                    var_17 *= ((/* implicit */unsigned char) var_3);
                }
                var_18 = (!(((/* implicit */_Bool) arr_5 [i_0])));
                var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) arr_0 [10U])) : (arr_14 [i_1] [i_1] [(_Bool)1] [i_1] [(_Bool)1])))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) var_7)) : (arr_2 [i_0]))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (0U))))))) : (((/* implicit */int) (short)-3537))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (short)-22729)) : (((/* implicit */int) (signed char)-84)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) min((-2147483630), (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-38)))))))) - (1)))));
}
