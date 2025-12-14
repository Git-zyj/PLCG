/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220644
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
    var_11 = ((/* implicit */short) max((((/* implicit */unsigned int) var_3)), (4294967295U)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) 1621361709)) ? (-129875451486594980LL) : (((/* implicit */long long int) 230063814)))) : (((/* implicit */long long int) ((/* implicit */int) (short)-7578)))));
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (+(arr_2 [6] [i_1]))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_13 = ((/* implicit */short) max((var_0), (((/* implicit */long long int) (!(((/* implicit */_Bool) -9223372036854775803LL)))))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? ((~(arr_8 [i_1 + 1] [i_1] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
                    var_15 -= ((/* implicit */int) max((var_9), (((/* implicit */short) (_Bool)1))));
                }
                for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 8; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            {
                                arr_15 [i_0] [(_Bool)1] [i_1] = ((/* implicit */long long int) var_1);
                                var_16 &= ((/* implicit */short) (+((~((-(arr_12 [i_4] [2LL] [i_1 + 1] [i_4])))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) arr_4 [i_1 + 1]);
                }
                var_18 = ((/* implicit */long long int) (short)-21707);
            }
        } 
    } 
    var_19 = ((/* implicit */short) (+(((/* implicit */int) var_9))));
    var_20 = ((/* implicit */short) -2147483628);
}
