/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231604
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((unsigned short) max((0), (-656938691))));
                                var_21 = ((/* implicit */int) var_4);
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) max(((signed char)127), ((signed char)0)))), (arr_2 [i_0]))), (((/* implicit */unsigned long long int) min((((short) var_12)), (((/* implicit */short) arr_5 [i_1 - 4] [4ULL] [i_4 + 2]))))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [2] [i_1 - 4] [i_2] [i_1 - 4]))) : (max((((/* implicit */unsigned int) 928364274)), (0U)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)132)));
}
