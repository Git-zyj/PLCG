/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202697
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
    var_15 = var_3;
    var_16 = ((/* implicit */unsigned short) var_13);
    var_17 |= ((/* implicit */unsigned short) var_5);
    var_18 = ((/* implicit */unsigned short) max((max((((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), ((~(((/* implicit */int) var_1)))))), (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 6; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20028))) > (7U)));
                            var_19 = ((/* implicit */unsigned short) arr_4 [i_2] [i_2]);
                            var_20 = arr_2 [i_0];
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((4294967293U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29021))))))));
                arr_12 [i_0] [i_0] = var_12;
                var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)57616))));
            }
        } 
    } 
}
