/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28588
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) * (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) ((var_16) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [8] [8] [8] [8] [8])))))) : (((/* implicit */int) arr_3 [i_3] [i_2]))))));
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_10))));
                    }
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_6 [i_0])))) ? (arr_6 [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2])))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 4; i_5 < 6; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_5 [i_0] [(short)3] [(_Bool)1] [i_4])) & (((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_4] [i_5])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [(_Bool)1] [i_0] [i_2] [i_2] [i_5])) : (((/* implicit */int) var_17)))))));
                            var_23 = ((/* implicit */unsigned char) (-(((var_1) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_4] [i_5 - 1])))))));
                        }
                        arr_17 [5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41876)) ? (((/* implicit */int) arr_8 [i_4] [i_2] [i_1] [i_0])) : (((((/* implicit */_Bool) (short)-15489)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [(unsigned short)2] [(unsigned short)2])) : (arr_0 [i_0]))))))));
                        arr_18 [(signed char)3] [i_2] [i_1] &= ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
                    }
                    var_24 = ((/* implicit */unsigned char) var_17);
                }
            } 
        } 
    } 
    var_25 -= ((/* implicit */short) (!(((/* implicit */_Bool) (short)15489))));
}
