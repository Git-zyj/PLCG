/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202130
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
    var_14 = ((/* implicit */long long int) (((+(132271157))) ^ (((/* implicit */int) var_4))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-11510)) > (((/* implicit */int) ((((/* implicit */_Bool) (short)-11532)) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)11492)))))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) ((_Bool) var_11));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0 + 1] [i_1] [i_2 + 1] [i_1] [i_1] [i_0 - 1] [i_3] = ((int) ((((/* implicit */long long int) -132271158)) + (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) + (2033654671909192917LL)))));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_2 + 2])) / (((/* implicit */int) arr_0 [i_2 - 1])))) << (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_2] [i_2] [i_1] [i_0]))) % (((-3778784982233978084LL) + (((/* implicit */long long int) ((/* implicit */int) (short)19422))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
