/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199706
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
    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
    var_19 = (+(((((unsigned long long int) var_7)) * (((/* implicit */unsigned long long int) var_16)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_17)), (16124996508122943867ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                                arr_15 [i_1] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13196))) - (2430871757U)))) - (var_16))), (((/* implicit */long long int) ((((/* implicit */_Bool) 12789304052043773361ULL)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)33510))))) : (1864095538U))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) min((var_17), (((/* implicit */unsigned short) arr_11 [i_0])))))) / (min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (var_16))))) > (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [(unsigned short)12] [i_0] [(unsigned short)12] [i_0] [(unsigned short)12] [i_0])), (((unsigned short) (signed char)-57))))))));
                var_21 = ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_1])))))) / (var_4))), (((/* implicit */long long int) ((unsigned char) var_2)))));
                var_22 = ((/* implicit */unsigned char) var_6);
            }
        } 
    } 
}
