/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227399
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
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((+(817993654U))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_1] [i_2 + 1] [i_2] [i_2 + 1] = ((/* implicit */signed char) (~((~((-(((/* implicit */int) (_Bool)1))))))));
                            var_14 -= ((/* implicit */signed char) (-((~((~(((/* implicit */int) (short)(-32767 - 1)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    var_15 = ((/* implicit */_Bool) (~((~((-(((/* implicit */int) (short)-23662))))))));
                    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned char)7])))))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 14; i_5 += 1) 
    {
        for (unsigned int i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            {
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-((-((+(((/* implicit */int) arr_17 [12LL])))))))))));
            }
        } 
    } 
}
