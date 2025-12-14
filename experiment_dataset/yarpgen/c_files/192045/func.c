/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192045
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
    var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-9)) ^ (((/* implicit */int) var_8)))) | (((/* implicit */int) var_13))))), (((var_9) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) ((short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_0 [i_1]))))))));
                var_17 = (-(max((2114074533879705607LL), (((/* implicit */long long int) (_Bool)1)))));
                arr_4 [i_1] = ((/* implicit */unsigned long long int) -2114074533879705629LL);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 4528311510938287178ULL)) && (((/* implicit */_Bool) ((var_12) ? (-2114074533879705629LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-21661)))))))))));
                            arr_12 [i_3] [i_1] [(_Bool)1] = var_3;
                            var_18 = ((/* implicit */short) (((-(-2114074533879705629LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-24656)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max((var_8), (var_8)))))))));
                            arr_13 [i_0] [12] [i_1] [6] [i_2] [i_1 + 3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-24655))) - (min((arr_8 [(unsigned char)5] [i_1 - 2] [i_1 - 1] [i_1 + 1]), (((/* implicit */long long int) arr_1 [i_1 - 1]))))));
                            arr_14 [i_1] [2ULL] [i_2] [(unsigned char)1] = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1 + 1])) >= (((/* implicit */int) arr_10 [(short)7] [i_0] [i_1 + 3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) arr_0 [1LL]);
                    var_20 = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (short)24656)), (-2114074533879705607LL)))))));
                }
            } 
        } 
    } 
}
