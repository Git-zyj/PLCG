/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204521
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_2] [i_3 + 1]);
                            arr_10 [i_0] [i_0] [i_0] [i_1] [(short)0] = ((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_3 + 1]))))), (((arr_6 [i_1] [i_1] [i_2]) ? (min((((/* implicit */unsigned int) arr_3 [i_1] [i_2])), (arr_8 [i_1] [i_2] [21]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))));
                            arr_11 [i_1] [i_1] [i_2] [i_2] [1LL] = ((/* implicit */signed char) (~(((min((8679551063291472658ULL), (((/* implicit */unsigned long long int) arr_2 [i_1])))) * (((/* implicit */unsigned long long int) arr_8 [i_1] [i_3 - 1] [i_3]))))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_1])))));
                arr_13 [i_1] = ((/* implicit */signed char) min((((long long int) ((int) (unsigned char)204))), (((/* implicit */long long int) (+(((/* implicit */int) (short)0)))))));
                var_19 = ((/* implicit */unsigned int) ((int) ((((long long int) var_13)) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_1])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((min((var_4), (((/* implicit */unsigned long long int) ((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_5)), (min((((/* implicit */short) var_0)), ((short)4974)))))))));
}
