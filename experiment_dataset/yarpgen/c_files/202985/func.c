/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202985
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
    var_16 = ((/* implicit */short) min((var_11), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-1727)), (var_13)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_17 &= ((/* implicit */unsigned short) -81058164);
                                var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(signed char)14] [(unsigned char)2] [i_3 + 1] [(short)0] [i_3 + 1] [i_0])) ? (((/* implicit */int) ((_Bool) arr_7 [11] [i_3] [i_4 + 1]))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)28710)) - (((/* implicit */int) (short)-21424))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_4 - 3] [i_4 - 1] [i_4] [i_0]))))));
                                arr_17 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned short)40075)), (var_13)));
                                var_19 = ((/* implicit */short) arr_14 [i_3 + 1] [i_3 + 1] [i_4 - 3] [i_3 + 1] [i_4 + 4]);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */signed char) min((127U), (((/* implicit */unsigned int) -81058164))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((var_0) - (56190372)))))) && (((/* implicit */_Bool) max((((/* implicit */int) var_3)), (var_0)))))));
}
