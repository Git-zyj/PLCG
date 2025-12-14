/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22413
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
    var_13 = ((/* implicit */short) (~((-(((/* implicit */int) min((var_0), ((short)-16160))))))));
    var_14 = ((/* implicit */short) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) ((short) (short)17488))) ? (((/* implicit */int) min(((short)-3922), (var_1)))) : (((/* implicit */int) ((short) var_9)))))));
    var_15 = ((short) var_5);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [(short)4] [(short)9] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_4 [(short)13] [(short)5] [i_0 - 1])) ? (((/* implicit */int) (short)-9945)) : (((/* implicit */int) (short)-22018)))), (((((/* implicit */int) var_9)) & (((/* implicit */int) var_10))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_16 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-28287)) / (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [(short)5] [(short)10])) >= (((/* implicit */int) (short)-28280))))) : (((((/* implicit */_Bool) (short)-12807)) ? (((/* implicit */int) arr_9 [(short)1] [(short)12] [(short)13])) : (((/* implicit */int) (short)-20527)))))) ^ (((((/* implicit */int) (short)-12545)) ^ (((/* implicit */int) var_3))))));
                                var_17 = ((/* implicit */short) max((var_17), (((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [(short)5] [i_3 - 1] [i_4 + 3])) : (((/* implicit */int) arr_3 [(short)14] [i_3 - 2] [i_0 - 1])))))));
                                arr_17 [(short)0] [i_4] [(short)9] [(short)7] [(short)11] [i_4] [(short)0] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(short)3] [(short)7] [(short)8])) && (((/* implicit */_Bool) (short)-4919))))) ^ (((/* implicit */int) ((short) (short)4915))))) / (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_2 [(short)10]))))) ? (((/* implicit */int) arr_4 [i_0 + 2] [i_3 + 1] [i_4 + 1])) : (((/* implicit */int) min(((short)32753), (var_8))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
