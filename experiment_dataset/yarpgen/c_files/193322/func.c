/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193322
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (short i_4 = 4; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)41619), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */int) ((_Bool) ((arr_8 [i_0] [10ULL] [(unsigned char)1]) >= (((/* implicit */int) arr_1 [(short)0])))))) : (((/* implicit */int) ((_Bool) (unsigned short)13135))))))));
                                var_16 -= ((/* implicit */unsigned long long int) ((unsigned char) min((523264), (((/* implicit */int) (short)-32766)))));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (min((127ULL), (((/* implicit */unsigned long long int) ((_Bool) (short)32767))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [4] [(_Bool)1] [i_4 - 1] [(_Bool)1] [i_4 - 3]), (arr_9 [(short)0] [(short)0] [i_4 - 4] [(short)0] [i_4 - 1])))))));
                                var_18 ^= ((/* implicit */unsigned char) min((((((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1] [(_Bool)1] [i_2])) * (((/* implicit */int) arr_9 [i_3 + 1] [i_4 - 3] [i_3 + 1] [(unsigned char)4] [i_0])))), (((/* implicit */int) max((arr_9 [6] [i_4] [i_3 + 1] [i_3] [i_3]), (arr_9 [i_3] [2U] [i_3 + 2] [(unsigned short)5] [i_3]))))));
                            }
                        } 
                    } 
                    var_19 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_2] [i_1 - 1] [5ULL] [5ULL] [i_0])) ? (1613601050) : (((/* implicit */int) (short)(-32767 - 1))))) | (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_20 ^= ((/* implicit */_Bool) arr_0 [i_1]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_14);
    var_22 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))))) - (max((var_6), (((((/* implicit */int) var_11)) * (((/* implicit */int) var_4))))))));
}
