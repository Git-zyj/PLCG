/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40027
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned int i_3 = 4; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 ^= ((/* implicit */_Bool) (unsigned char)104);
                                var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18151))) : (3299333313U)))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_1] = arr_1 [i_0] [i_1];
                arr_14 [i_1 - 1] [i_1] [i_0] = ((/* implicit */short) ((max(((~(2047U))), (((/* implicit */unsigned int) ((1417739567U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197)))))))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249)))));
                arr_15 [i_0] [i_1] = ((/* implicit */long long int) ((2536890367U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7)))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_9);
    var_14 = ((/* implicit */short) ((signed char) ((((/* implicit */int) (!((_Bool)1)))) / (((/* implicit */int) (!(var_9)))))));
    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
}
