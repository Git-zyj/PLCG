/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39898
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (var_7)));
    var_15 = ((/* implicit */_Bool) min((var_8), (((signed char) ((((/* implicit */_Bool) (short)12061)) ? (((/* implicit */int) (unsigned short)34932)) : (((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((/* implicit */int) ((signed char) var_3))), ((-(arr_5 [i_1 - 1]))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_1 - 1]);
                            arr_11 [i_2] [i_0] [11ULL] [i_2] [i_3 + 2] = ((/* implicit */unsigned char) arr_10 [i_0] [i_2 - 3]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((((/* implicit */int) (short)-12061)), (var_1)));
}
