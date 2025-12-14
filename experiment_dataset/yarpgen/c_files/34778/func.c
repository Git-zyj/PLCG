/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34778
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
    var_17 *= ((/* implicit */unsigned int) (-((~((~(var_5)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (-((~((~(((/* implicit */int) (unsigned short)42140))))))));
                                var_19 = (!(((/* implicit */_Bool) (unsigned short)23390)));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((+(arr_7 [i_0] [i_0] [i_0] [(unsigned short)1] [(unsigned short)1] [(unsigned short)1])))))))))));
                var_21 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23384)))))))));
                arr_11 [i_0] = ((/* implicit */unsigned short) (~((-((+(((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))))))));
            }
        } 
    } 
}
