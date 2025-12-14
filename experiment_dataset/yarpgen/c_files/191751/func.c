/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191751
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
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_4 [i_0 + 3])) ? (((/* implicit */int) ((signed char) arr_6 [i_2] [i_0 + 3] [(signed char)4]))) : (((arr_1 [i_2] [i_2]) & (((/* implicit */int) (unsigned short)45300)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((int) (+(((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [(_Bool)1] [(_Bool)0] [i_3])) != (((/* implicit */int) var_8))))))))));
                        var_17 -= ((/* implicit */unsigned long long int) arr_3 [i_3] [i_1] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (short i_5 = 2; i_5 < 14; i_5 += 3) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)20232))));
                                var_19 = ((((/* implicit */int) (signed char)-100)) != (((/* implicit */int) (_Bool)0)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) min(((~(var_13))), (((/* implicit */unsigned int) var_6))));
}
