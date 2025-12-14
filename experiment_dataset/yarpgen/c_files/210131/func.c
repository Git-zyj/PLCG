/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210131
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -111288760)) % (9241944068748974245ULL)))) ? (((/* implicit */int) (short)20231)) : (((/* implicit */int) var_2))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    var_16 = ((/* implicit */unsigned short) (~(((unsigned int) max((var_1), (((/* implicit */int) var_10)))))));
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((((((/* implicit */int) var_6)) + (2147483647))) >> (((var_4) - (439592197U))))), (((/* implicit */int) ((unsigned short) 2526434640U)))))), (max((((/* implicit */long long int) arr_7 [11ULL] [i_2 - 1] [i_1 - 1])), (((long long int) var_8))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)51595)) ? (((/* implicit */unsigned long long int) var_13)) : (max((2ULL), (((/* implicit */unsigned long long int) (short)16383))))));
                }
                var_19 = ((((/* implicit */_Bool) ((arr_1 [i_0] [i_1 + 1]) << (((((((/* implicit */int) var_12)) - (((/* implicit */int) var_15)))) - (61919)))))) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (2334400737U));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_1 - 1] [i_1] [i_1 - 2])), (var_2)))) == ((-(((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 2]))))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((3298534883328LL) / (((/* implicit */long long int) 1001947212))))) * (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (arr_6 [i_0]))) / (max((18446744073709551614ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0]))))))));
                }
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                {
                    arr_14 [i_0] [13U] [13U] [i_4] = ((/* implicit */unsigned long long int) 1821502081U);
                    arr_15 [i_0] [10U] [i_4] [(unsigned char)8] &= ((/* implicit */_Bool) var_9);
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((max((2334400737U), (2334400729U))) / (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_12))))) ? (var_0) : (((/* implicit */unsigned int) ((int) var_12)))))));
}
