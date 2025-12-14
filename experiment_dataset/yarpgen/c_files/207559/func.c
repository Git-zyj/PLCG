/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207559
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) 2147483635);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned short) ((((-2147483631) | (2147483635))) != ((+(2147483636)))));
                        arr_12 [i_0] [i_1 + 2] [i_1 + 2] [i_3] = (~(885587462U));
                    }
                    for (int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) ((int) (+(max((927490837U), (((/* implicit */unsigned int) 2147483635)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) ((int) (+(((/* implicit */int) (unsigned short)23471)))));
                            var_23 = (+(-389657184));
                            var_24 = ((unsigned int) (~(2147483647)));
                        }
                    }
                    var_25 = ((/* implicit */int) (((~((+(1900192583U))))) != (((/* implicit */unsigned int) (~(((/* implicit */int) min(((unsigned short)34628), ((unsigned short)40658)))))))));
                    var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) ((signed char) 1140125749U));
}
