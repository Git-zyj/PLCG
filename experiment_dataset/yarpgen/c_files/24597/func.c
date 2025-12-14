/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24597
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((2424300058U) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) (unsigned short)37802))))))))) ? (min((var_3), (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_1] [i_3 + 1] [i_0] = ((/* implicit */signed char) arr_12 [i_0] [i_1] [i_2] [i_3]);
                                arr_17 [i_1] [i_1] [3U] [i_1] = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [(_Bool)1] [i_2] [i_3] [i_4]))))))));
                                var_16 = ((/* implicit */short) var_1);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) arr_3 [i_1])))));
                    arr_18 [i_0] [i_2] [i_0] [i_1] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [13LL] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1779895721U))))));
                }
                arr_19 [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((signed char) var_9)))))));
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (var_3))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32746)))))))) ? (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_1)))))) : (((/* implicit */int) var_7)));
    var_19 = ((/* implicit */_Bool) var_8);
}
