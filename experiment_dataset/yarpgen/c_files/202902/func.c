/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202902
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
    var_10 = ((/* implicit */unsigned long long int) var_3);
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / ((+(min((((/* implicit */unsigned int) (_Bool)1)), (3519073287U)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_10 [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), ((~(((/* implicit */int) (unsigned short)5260))))));
                            var_13 = ((/* implicit */_Bool) arr_6 [i_3] [(unsigned char)12] [i_0]);
                            var_14 = (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0 - 1])), ((unsigned short)27573)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) + (1307325431)));
}
