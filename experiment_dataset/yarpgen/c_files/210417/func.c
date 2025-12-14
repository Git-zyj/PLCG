/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210417
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
    var_13 &= ((/* implicit */unsigned short) max((((/* implicit */short) ((((/* implicit */unsigned long long int) 1050979399)) < (1896496639388593242ULL)))), ((short)-21724)));
    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (var_6))))));
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_3))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [3] [i_2] &= ((/* implicit */long long int) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_3 + 2] [i_3 - 1]))))));
                                arr_14 [i_1] [(unsigned char)12] [(short)8] [i_1] = ((/* implicit */unsigned char) (short)-2088);
                                arr_15 [(_Bool)1] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) var_11);
                            }
                        } 
                    } 
                    var_17 += ((((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(short)6] [i_2]))) - (var_9))))) | (((/* implicit */int) var_10)));
                }
            } 
        } 
    } 
}
