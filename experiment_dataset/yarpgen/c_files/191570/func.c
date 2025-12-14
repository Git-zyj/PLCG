/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191570
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
    var_17 += ((/* implicit */unsigned short) (_Bool)1);
    var_18 = ((/* implicit */unsigned char) (~((~((-(((/* implicit */int) (signed char)-91))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [20U] [i_4] [i_2] |= ((/* implicit */unsigned int) ((_Bool) ((unsigned short) var_0)));
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_1 [i_1] [i_2])))), ((-(((/* implicit */int) (unsigned char)6))))))) <= ((+(((unsigned int) arr_10 [i_2] [i_1] [i_1] [i_3] [(short)6]))))));
                                var_20 = ((/* implicit */signed char) var_5);
                                var_21 -= max((((/* implicit */long long int) ((unsigned short) var_10))), (max((arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_2]), (((/* implicit */long long int) arr_3 [i_1 - 1] [i_2])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)6))))) ? (((arr_4 [i_0] [i_0] [i_2]) ? (((/* implicit */int) ((signed char) arr_9 [i_5] [i_5] [i_5] [20LL]))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1 + 2])))) : (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_9 [i_1] [i_1] [i_1 + 2] [i_1 + 2])))))));
                        var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (-9223372036854775807LL - 1LL)))) ? (((-6067079825375595573LL) / (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_1 - 1])), (var_9))))))) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) arr_15 [i_5] [i_5]))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        for (unsigned int i_7 = 4; i_7 < 14; i_7 += 3) 
        {
            {
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_3 [i_6] [i_6]))));
                arr_25 [i_6] [i_6] [i_7] = ((/* implicit */short) ((((arr_13 [i_7] [i_7]) + (9223372036854775807LL))) << (((((min((arr_16 [i_7] [i_7 - 2] [i_7] [i_7 - 1] [(_Bool)1]), (((/* implicit */long long int) arr_12 [i_6] [i_6] [i_7 - 2] [i_6] [i_7 - 2])))) + (404050237443327357LL))) - (12LL)))));
            }
        } 
    } 
}
