/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37004
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
    var_12 = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) min((var_3), (((/* implicit */unsigned long long int) var_4)))))), (min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) (short)-32484))))));
    var_13 = ((/* implicit */unsigned char) ((long long int) var_3));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_9 [i_0] [i_1] [i_1 - 3] [i_1]), (arr_9 [i_0] [i_1] [i_1 + 2] [i_1]))))));
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] [i_4] [i_1] = ((/* implicit */short) (+(((unsigned long long int) var_5))));
                                arr_13 [i_1] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 11721598521790272029ULL)) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) var_7)))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) arr_5 [i_4] [i_1] [i_0]))))) ? ((-(((/* implicit */int) arr_7 [i_0] [i_0])))) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_1])))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) max((min((arr_2 [i_1]), (arr_2 [i_1]))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_1])))))));
                arr_15 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1 + 2] [i_1])) : ((+(((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1])))))))));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((11721598521790272006ULL), (((/* implicit */unsigned long long int) (short)19340))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (var_1))), (arr_4 [i_1 - 3] [i_1] [i_1]))))));
            }
        } 
    } 
}
