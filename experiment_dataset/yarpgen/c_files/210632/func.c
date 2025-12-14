/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210632
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
    for (short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [(_Bool)1] [i_1] [i_2] = (~((~(arr_4 [i_1 - 4] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_12 += ((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2] [0LL] [i_4] [i_0]);
                                var_13 -= (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3032))) : (var_1))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_11))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_5), (((long long int) min((((/* implicit */unsigned int) var_7)), (var_4))))));
    var_16 = ((((/* implicit */_Bool) (~(((int) var_4))))) ? (var_8) : ((-(((/* implicit */int) ((unsigned short) var_1))))));
}
