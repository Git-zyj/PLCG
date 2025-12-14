/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33149
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) var_8);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    arr_7 [i_0 - 2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_5))))) ? (4333476876968456423LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)27896)))))))));
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (4333476876968456423LL)))) <= (arr_0 [i_0 + 1]))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            var_13 &= ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [4U] [i_2] [i_0] [i_4])))));
                            var_14 = ((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_1]);
                            arr_14 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_2 - 2])) < (((/* implicit */int) var_0)))))) == (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_2] [i_3]))) - (((-5949485851455438092LL) - (-5949485851455438076LL)))))));
                            var_15 = ((/* implicit */short) var_7);
                            arr_15 [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)-47)) ? (arr_0 [i_4 - 2]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-20120)))))))));
                        }
                        var_16 = ((/* implicit */signed char) ((_Bool) var_10));
                    }
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            arr_21 [i_2] [i_1] [i_1] = ((/* implicit */long long int) var_0);
                            arr_22 [i_1] [i_1] [13LL] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((17444473153712739145ULL), (((/* implicit */unsigned long long int) (unsigned char)241))))) ? (((/* implicit */int) arr_10 [i_1] [i_6])) : (((((/* implicit */_Bool) arr_3 [i_1] [i_0 - 2] [9LL])) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_2 + 2] [i_2 - 2] [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_0 - 2] [i_2]))))));
                            arr_23 [i_6] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (unsigned char)2);
                        }
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_17 = var_5;
                            arr_27 [i_7] [i_5] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1] [i_2 - 2])) ? (((/* implicit */int) arr_17 [i_1] [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_5])) : (((/* implicit */int) ((((/* implicit */int) (short)-8161)) != (((/* implicit */int) (unsigned char)241))))))))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) 5949485851455438075LL)) && (((/* implicit */_Bool) (short)-27890))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65074)) : (((/* implicit */int) var_9))))))), (var_6))))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 3295461130U))) || (((/* implicit */_Bool) min((((/* implicit */int) arr_17 [i_1] [i_1] [i_0 - 2] [i_2 - 1] [i_2] [(signed char)10])), (arr_12 [i_0] [i_1] [i_0 + 2] [i_2 - 1] [i_1]))))));
                            var_20 = ((/* implicit */unsigned int) (short)56);
                        }
                    }
                    for (short i_8 = 1; i_8 < 17; i_8 += 4) 
                    {
                        arr_30 [i_0 + 2] [i_1] [i_2] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(var_2)))))) ? (((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)53928)))) : (((/* implicit */int) ((arr_11 [i_0] [i_0 + 1] [i_2] [i_0 + 1] [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5949485851455438092LL)))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_9 = 1; i_9 < 17; i_9 += 3) 
                        {
                            var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_0] [i_8 - 1] [i_0 + 1])) ? (arr_28 [i_0] [i_8 + 1] [i_0 + 2]) : (arr_1 [i_9 - 1])));
                            var_22 = ((/* implicit */long long int) var_1);
                        }
                        var_23 = ((((/* implicit */_Bool) max((((/* implicit */short) arr_9 [i_1] [i_0 + 1] [i_2 - 1])), (var_9)))) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_0 + 1] [i_2 + 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)32886)))) : (((((/* implicit */int) arr_25 [i_1] [i_8] [i_8] [i_8 - 1])) % (((/* implicit */int) arr_25 [i_1] [i_8] [i_8] [i_8 + 1])))));
                    }
                }
            }
        } 
    } 
    var_24 &= ((/* implicit */long long int) var_5);
}
