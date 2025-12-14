/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249049
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_19 = min((((/* implicit */unsigned int) (signed char)87)), (arr_10 [i_0] [i_1] [(short)9] [i_0] [i_4] [i_0]));
                                arr_13 [i_0] [(unsigned char)9] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (+((~(arr_12 [i_0 + 3] [i_3 + 1])))));
                                var_20 = ((/* implicit */int) var_15);
                                arr_14 [i_0] [(unsigned char)4] [i_0] [8U] [(unsigned char)4] = ((/* implicit */unsigned short) (-(((/* implicit */int) min(((short)32761), ((short)-9565))))));
                                arr_15 [i_0 + 3] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */_Bool) ((short) arr_0 [i_0 - 2] [i_4]));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1] |= ((((((/* implicit */_Bool) (signed char)-6)) || (((/* implicit */_Bool) -1689933174)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 + 3]))))) : (((int) arr_5 [i_0 + 2])));
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 3])), (arr_2 [i_0] [i_0])))) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9565)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (-(min(((~(((/* implicit */int) var_7)))), (((var_2) - (var_16)))))));
    var_22 = ((/* implicit */signed char) min((((/* implicit */int) (short)9564)), (((((/* implicit */int) (short)9564)) | (((/* implicit */int) (short)-19982))))));
}
