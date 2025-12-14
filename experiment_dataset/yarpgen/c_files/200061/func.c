/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200061
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_13 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)20)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */int) ((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned short) arr_0 [i_0]);
                    var_15 = ((/* implicit */unsigned int) (unsigned char)123);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_9 [i_3] [i_3] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0] [i_3])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_3])) : (arr_3 [i_3]))) : (((/* implicit */int) arr_1 [i_1]))));
                        var_16 = ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
                        var_17 = (-(((arr_8 [i_0] [i_1] [i_0] [i_3]) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133))) & (((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_1] [i_4] [i_1] [i_1])) : (((/* implicit */int) var_1)))))));
                                var_18 = ((/* implicit */unsigned int) arr_6 [i_0] [i_5] [i_0] [i_1]);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_10)) : (12462538910417022457ULL))), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])))))));
                }
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1])))))));
                arr_16 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned short)65535);
                arr_17 [i_0] [i_1] = ((/* implicit */unsigned char) max((((((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1])) + (2147483647))) << (((13726971302194921714ULL) - (13726971302194921714ULL))))), ((+(arr_13 [i_0] [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */int) var_6)) != (((/* implicit */int) ((((((/* implicit */_Bool) 13726971302194921714ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)134)))) <= (((/* implicit */int) var_1)))))));
}
