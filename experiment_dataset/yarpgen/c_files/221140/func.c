/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221140
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
    var_16 = ((/* implicit */_Bool) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */int) var_9);
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_1] [i_1])))), (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_15)) : (((((((/* implicit */int) (short)22955)) / (1958817486))) * (((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((short) min((((((/* implicit */_Bool) 2147483634)) ? (var_6) : (((/* implicit */int) (short)-18300)))), (((/* implicit */int) var_2))))))));
                                var_19 = ((/* implicit */unsigned char) 746969693);
                                arr_15 [i_0] [i_1] [i_2 - 1] [i_1] [i_4] [i_3] = -1958817487;
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) arr_9 [i_0 - 2]);
                    var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((((/* implicit */_Bool) (short)28291)) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) (short)-26661))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((signed char) ((var_1) == (((/* implicit */int) (short)18299))))))));
                    arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((arr_2 [i_1]) % (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))))));
                }
            } 
        } 
    } 
}
