/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203117
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3283))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)218))) : (((/* implicit */int) ((max((((/* implicit */unsigned int) (unsigned short)13626)), (var_9))) != (((/* implicit */unsigned int) 1716309492)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) var_3);
                                arr_15 [i_4 + 1] [i_0] [i_2] [8U] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((-1716309514) & (-1716309472)));
                                arr_16 [i_0] [i_1] [i_0] [i_1] [i_3 + 3] [9] [i_1] = ((/* implicit */unsigned short) (~(1334373839U)));
                            }
                        } 
                    } 
                } 
                var_20 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13618)) << (((((((/* implicit */int) (short)-31198)) + (31219))) - (14))))))));
            }
        } 
    } 
}
