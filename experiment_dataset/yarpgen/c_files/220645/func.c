/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220645
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
    var_15 = ((/* implicit */signed char) (~(var_11)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */long long int) (~((((~(((/* implicit */int) var_4)))) & (((/* implicit */int) (signed char)-1))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_0 - 2] [i_0 - 2]), (((/* implicit */unsigned char) var_7))))) ? ((~(((((/* implicit */int) arr_7 [i_4] [i_3] [i_0] [i_0])) | (((/* implicit */int) arr_9 [i_0] [i_1] [i_2])))))) : ((-(((/* implicit */int) arr_6 [i_0 + 1] [i_3 + 1] [i_4 + 1] [i_4 + 1]))))));
                                var_17 = ((/* implicit */signed char) min((var_3), (((/* implicit */int) (unsigned short)52822))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
