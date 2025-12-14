/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19918
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_4))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) var_2);
                var_13 = ((/* implicit */long long int) (-(((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (unsigned short)22442))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)121)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_15 [i_2] [i_3] [i_4] [i_5 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((arr_1 [i_2 - 1] [i_5 - 1]), (arr_1 [i_2 + 1] [i_5 - 1])))), (min((((/* implicit */unsigned int) var_4)), (var_2)))));
                            var_15 = ((/* implicit */unsigned short) min((var_5), (((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) var_7))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) var_1)))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 14156215951750326261ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_2 [i_2 - 1] [i_2 - 1]))));
            }
        } 
    } 
}
