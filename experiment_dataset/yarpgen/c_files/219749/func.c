/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219749
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
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) ((unsigned int) var_15));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    arr_8 [i_0 - 1] [i_1 + 1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_18))) > ((-(arr_7 [i_2] [i_1] [i_2] [i_0])))))) : (((/* implicit */int) min((arr_1 [i_1 + 1] [i_0 + 1]), (arr_1 [i_1 + 1] [i_0 - 1]))))));
                    var_21 = ((/* implicit */unsigned char) var_5);
                }
                for (long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                {
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_0 [1]);
                    arr_12 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))))))) < (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_7 [i_0] [i_0 + 1] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) 0LL))))));
                    var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : ((-2147483647 - 1)))) : (((/* implicit */int) var_14))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 2; i_4 < 7; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_3 - 1] [i_4] [i_4] [i_5] = var_0;
                                var_23 = ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)32)) : (-1784116214));
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */unsigned int) arr_3 [i_0] [(short)7] [i_1]);
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_1))));
}
