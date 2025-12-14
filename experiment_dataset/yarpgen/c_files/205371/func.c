/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205371
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
    var_15 = (-(((/* implicit */int) var_3)));
    var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65535)), (((((/* implicit */_Bool) var_4)) ? (4121940692028521345LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [9ULL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65535)))) + (((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */long long int) arr_3 [(unsigned char)2] [i_1])) - (var_12)))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_13))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1])))), (max((arr_3 [i_0 - 1] [i_0 - 2]), (arr_3 [i_0 - 2] [i_0 - 2])))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 10; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4618768386186404159LL)) ? (var_14) : (((/* implicit */unsigned long long int) arr_6 [i_1] [(short)7] [i_1]))))) || (((/* implicit */_Bool) ((arr_1 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_0 + 1] [i_2]))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (arr_6 [i_0] [i_1] [i_3]) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) % (6202374617650492177LL)))));
                        var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (1191032944078991878ULL))) + (((/* implicit */unsigned long long int) arr_1 [i_2 - 2]))));
                    }
                    arr_12 [6ULL] [i_2] [(short)4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_2])) || (((/* implicit */_Bool) arr_3 [i_0] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (short)30269))))) : (((/* implicit */int) var_9))));
                    var_21 = (+(17626369367166553801ULL));
                }
                for (short i_4 = 2; i_4 < 10; i_4 += 1) /* same iter space */
                {
                    var_22 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))))) ? (((long long int) 0ULL)) : (max((((((/* implicit */_Bool) arr_0 [i_4])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), ((-(arr_10 [i_1]))))));
                    var_23 = ((/* implicit */unsigned long long int) arr_7 [i_4] [i_1] [i_4]);
                    arr_17 [i_4 + 1] [i_4] [i_4] [i_0 + 1] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_9)) << (((var_12) + (6781080638700885956LL))))), ((+(((/* implicit */int) arr_2 [i_0 + 1]))))));
                }
                for (short i_5 = 2; i_5 < 10; i_5 += 1) /* same iter space */
                {
                    var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)17690)) || (((/* implicit */_Bool) -1646960354456688630LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [(signed char)10] [i_0]))) : (min((var_12), (((/* implicit */long long int) var_10))))))) ? (((((((/* implicit */int) var_2)) > (((/* implicit */int) var_5)))) ? (max((17255711129630559738ULL), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_2 [i_1 + 1]))))))) : (((/* implicit */unsigned long long int) (~(var_12))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 3; i_6 < 10; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */_Bool) max((-4618768386186404155LL), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)64717)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_6] [(unsigned short)5] [(unsigned short)5] [i_0])))))))));
                        var_26 = ((/* implicit */int) ((long long int) ((arr_21 [i_0] [i_5 - 2] [i_6 - 3] [i_1 + 2] [i_5 - 2] [i_0]) || (((/* implicit */_Bool) var_1)))));
                    }
                    arr_23 [i_0] [2U] = ((/* implicit */unsigned char) ((-6202374617650492177LL) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_12) > (((/* implicit */long long int) ((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1167452444U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) 0)) : ((((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
}
