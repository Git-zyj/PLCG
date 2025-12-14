/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219183
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)0)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))) ? (max((((/* implicit */int) (short)11774)), (((var_14) ? (((/* implicit */int) (short)-11769)) : (-1424033607))))) : (min((var_11), (((int) var_7))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-11775)) ? (((/* implicit */int) (unsigned short)10154)) : (((/* implicit */int) (short)11786))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min((max(((~(((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] [i_1] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */signed char) max((849847431430898797LL), (((/* implicit */long long int) var_8))));
                            arr_12 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) << (((((/* implicit */int) (short)11774)) - (11750))))) - (((/* implicit */int) ((short) var_0)))))) ? (((((/* implicit */int) var_3)) % (((/* implicit */int) ((unsigned char) var_7))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (0U)))) ? ((~(((/* implicit */int) var_9)))) : (min((-954938459), (((/* implicit */int) var_15))))))));
                            arr_13 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)0)) / (((/* implicit */int) (short)-11787))));
                            var_17 = ((/* implicit */int) ((unsigned short) max((((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
