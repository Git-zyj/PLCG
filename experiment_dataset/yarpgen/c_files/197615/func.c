/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197615
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (10ULL))) / (((((/* implicit */_Bool) (short)3197)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) var_5)))))) * (((/* implicit */unsigned long long int) min(((~(var_1))), (((/* implicit */long long int) arr_12 [i_4 - 1] [i_1 - 1] [i_2 + 1])))))));
                                var_11 -= arr_9 [i_2] [i_2];
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned char) (~(max((arr_4 [i_1 + 1] [i_1 + 2]), ((~(4824888290825148690ULL)))))));
                arr_16 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) (((~(((/* implicit */int) (short)-3195)))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)15323))) <= (arr_11 [i_1] [i_1] [i_1] [(short)3] [(unsigned char)1] [(short)11]))))))), (((((/* implicit */_Bool) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))) ? (min((((/* implicit */long long int) 1535898290)), (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) (short)-3200)))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (-(min((var_4), (((/* implicit */long long int) var_8)))))))));
}
