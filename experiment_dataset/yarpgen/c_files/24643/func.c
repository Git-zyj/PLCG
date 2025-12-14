/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24643
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) ((_Bool) var_7));
                                arr_11 [i_4 - 1] [i_3] [i_4] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) var_10)))));
                                arr_12 [i_0] [i_1] [i_4] [i_3] [i_4 + 2] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_4)) ? (arr_4 [i_4 + 2] [i_4 - 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_3)))))))));
                                arr_13 [i_4] [i_1] [i_2 + 1] [i_3] [i_4] = ((/* implicit */unsigned char) min(((~(arr_10 [i_0] [i_1] [i_4 + 1] [i_2 - 1] [i_3] [i_1]))), ((+(((/* implicit */int) (short)-16384))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_8))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0]))))));
            }
        } 
    } 
    var_12 |= ((/* implicit */unsigned short) var_3);
}
