/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212477
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
    var_16 *= ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) >> (((var_14) - (660925782))))) != (-424201284)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_7 [i_2]), (var_6)))) ? (max((var_0), (((/* implicit */int) var_13)))) : (((/* implicit */int) ((unsigned short) var_6))))) << (((((/* implicit */int) var_7)) - (61373)))));
                    var_17 = var_1;
                    var_18 = (unsigned short)51082;
                    var_19 = ((unsigned short) (unsigned short)53481);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((int) var_9));
                                arr_16 [i_0] [i_1] [i_2] [i_3 - 1] [i_3 - 1] = ((unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_1]))))) >> (((arr_12 [i_0] [i_3 - 1] [i_3] [i_3]) - (784948626)))));
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1257085380)) ? (((/* implicit */int) var_3)) : (((((var_0) + (2147483647))) << (((1257085380) - (1257085380)))))))) ? (arr_2 [i_1]) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2] [i_1] [i_0] [i_4] [i_4])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_0])) : (arr_3 [i_0]))))))));
                                var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)0)), (-193431275)));
                                arr_17 [i_1] [(unsigned short)7] [i_2] [i_3] [i_2] = max((((((/* implicit */_Bool) ((730101856) % (((/* implicit */int) (unsigned short)28391))))) ? (((/* implicit */int) ((-1257085380) >= (((/* implicit */int) var_15))))) : (min((arr_8 [i_1] [i_1] [i_2]), (((/* implicit */int) (unsigned short)29502)))))), ((~(((/* implicit */int) arr_15 [i_3] [i_3 - 1] [i_3 - 1] [i_1] [i_3 - 1] [i_3 - 2] [i_3 - 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
