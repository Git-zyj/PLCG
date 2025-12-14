/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205717
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
    var_16 = ((/* implicit */unsigned int) ((signed char) var_3));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_3)) : (var_4)));
    var_18 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) min((max((var_14), (((/* implicit */unsigned long long int) var_10)))), (max((var_14), (((/* implicit */unsigned long long int) var_10))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_6))))) && (((/* implicit */_Bool) ((unsigned short) var_9)))));
                var_21 = ((/* implicit */signed char) var_13);
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) var_6)), (var_14))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (signed char i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) var_7);
                            var_23 = ((/* implicit */signed char) ((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 929069117))))));
                            arr_19 [i_3] [(unsigned short)5] [i_3] = ((/* implicit */unsigned char) var_3);
                        }
                    } 
                } 
                arr_20 [i_3] = ((/* implicit */signed char) var_13);
            }
        } 
    } 
}
