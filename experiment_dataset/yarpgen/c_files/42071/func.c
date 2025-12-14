/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42071
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (~(((((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0]))) & (((/* implicit */int) ((unsigned short) var_3))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned int) arr_7 [i_3] [i_4]);
                                var_15 += ((/* implicit */unsigned int) arr_7 [i_3] [i_1]);
                                var_16 += ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_13 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9] [i_0 + 3] [(unsigned short)1] [(_Bool)1]))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */long long int) (~(2362366589U)));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_2))));
    var_19 += var_1;
}
