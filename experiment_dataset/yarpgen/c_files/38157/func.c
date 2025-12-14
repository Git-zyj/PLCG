/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38157
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
    var_14 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -2769742066046269015LL)) : (arr_5 [i_0] [i_1] [(unsigned char)8])))));
                arr_8 [i_1] [(short)6] [(short)6] = ((/* implicit */_Bool) ((short) min((arr_1 [i_1 - 1]), (((/* implicit */unsigned long long int) var_7)))));
                var_15 = var_10;
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (signed char)123);
                            var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_14 [i_3] [i_2] [i_0]), (arr_14 [i_1 - 1] [(_Bool)1] [i_2])))), (((((/* implicit */_Bool) arr_11 [i_3] [i_1] [i_1] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_13)), (var_9))))))));
                            var_17 = ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_4);
}
