/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228914
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
    var_10 = ((int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) var_1)))) : (((((/* implicit */int) var_4)) % (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((short) ((((835188187U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) min(((unsigned short)54388), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) (unsigned short)27373))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_8 [i_3] [i_3] [i_3] [i_3] [i_3] [7U] = ((/* implicit */int) ((var_0) >= (var_0)));
                            var_12 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? (((unsigned int) arr_7 [i_2 + 2] [i_2 - 1] [i_2] [i_1] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_6 [i_2 + 2] [i_2 - 1] [i_1] [i_1] [i_0]))))));
                            var_13 = ((unsigned short) min((arr_4 [i_2 + 2] [i_2 + 3] [i_2 + 3]), (arr_4 [i_2 + 3] [i_2] [i_2 - 2])));
                        }
                    } 
                } 
            }
        } 
    } 
}
