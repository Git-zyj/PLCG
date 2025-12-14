/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215580
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
    var_18 &= ((/* implicit */int) (short)11483);
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_15))))) : (((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) > (((var_0) & (((/* implicit */int) var_5))))));
    var_20 = ((/* implicit */unsigned int) var_17);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_21 -= ((/* implicit */short) (((~(((/* implicit */int) var_3)))) > (((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_16)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 6; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) var_8);
                                var_23 = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */short) ((((((/* implicit */int) (short)11487)) / (((/* implicit */int) var_12)))) - (((((((/* implicit */int) var_16)) * (((/* implicit */int) var_15)))) + ((+(((/* implicit */int) var_12))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)18756))));
}
