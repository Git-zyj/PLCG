/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33532
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
    for (int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */_Bool) min(((short)-28941), (((/* implicit */short) ((((/* implicit */_Bool) 4U)) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [(short)7])), (var_7)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_3 - 1] [i_1 + 2] [i_0 - 1])) ? (arr_2 [i_3 - 1] [i_1 + 2] [i_0 - 1]) : (((/* implicit */int) var_2)))), ((+(((/* implicit */int) var_3))))));
                            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (~(min((var_1), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_3 - 1] [i_3])))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_2] [(_Bool)1] [i_1 + 1] = (-9223372036854775807LL - 1LL);
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_3 [i_2] [i_1 + 1] [i_2]))));
                            arr_11 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned short) var_1);
}
