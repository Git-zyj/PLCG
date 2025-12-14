/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237544
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
    var_12 = ((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_5)));
    var_13 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))) > (var_6))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) == (((/* implicit */int) ((var_1) && (var_10)))))))) : (var_4)));
    var_14 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) + (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    var_15 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-5278801808080282067LL) : (var_4)))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) * (((/* implicit */unsigned long long int) ((((((var_10) ? (var_9) : (arr_8 [i_1] [i_1] [i_1]))) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_1 [i_1 + 1] [i_2 - 1])) + (12842))) - (4)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) var_11);
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1 - 3] [i_3 + 1] [2LL] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_3 - 1] [i_2] [i_2 - 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : ((+(15ULL)))));
                                var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_10)))) > (((/* implicit */int) arr_14 [i_3 - 3] [i_1 + 1] [i_2 + 1] [i_1 + 1] [i_0]))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_0)), (var_5)));
                }
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    var_19 += ((/* implicit */long long int) (((_Bool)1) ? ((((+(17ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 3] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            {
                                arr_26 [i_1 - 2] [i_1 - 2] [i_0] = ((arr_6 [i_1 + 1] [i_1] [i_1 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((arr_13 [i_1 + 1] [i_1]) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 2] [i_1 + 1]))))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 3] [i_6] [i_6])) ? (18446744073709551586ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((var_2) ? (((9223372036854775781LL) >> (((((/* implicit */int) var_8)) - (34273))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 14ULL)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)50152))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))));
                                arr_27 [i_7] [i_1] [(unsigned short)5] [i_6] [8ULL] [8ULL] [(unsigned short)5] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_25 [i_1 - 1] [i_1 - 2])) ? (arr_25 [i_1 + 1] [i_1 - 3]) : (arr_25 [i_1 + 2] [i_1 + 1])))));
                            }
                        } 
                    } 
                    arr_28 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [17ULL] [i_0] [i_1] [i_5])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) && (((/* implicit */_Bool) (~(var_6))))))))));
                }
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_23 [i_1 + 1] [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_2)))))));
                var_22 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) var_1)), (arr_24 [i_0] [i_1] [i_1 + 2] [i_1 - 2]))) + (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))));
            }
        } 
    } 
}
