/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192553
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
    var_19 *= ((/* implicit */int) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) var_14)))))))));
    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(-2147483637)))))))));
    var_21 = ((/* implicit */unsigned int) (+((+((~(((/* implicit */int) var_1))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [(unsigned short)3] [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)168))))))))));
                                var_22 *= (-((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)100))))))));
                                var_23 = ((/* implicit */unsigned char) (~((-((-(arr_7 [i_0] [i_1 + 2])))))));
                                arr_13 [i_0] [i_0] [i_1] [i_3] [i_1] [i_1] = (+(-1533467247));
                            }
                        } 
                    } 
                    var_24 |= ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) (unsigned char)198))))))));
                }
            } 
        } 
    } 
}
