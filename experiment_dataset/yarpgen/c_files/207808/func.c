/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207808
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_14))), (((/* implicit */unsigned int) min((-49192167), (((/* implicit */int) var_13))))))))));
    var_16 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((_Bool) ((var_14) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(short)22]))))))), (min((max((arr_4 [i_0] [i_1]), (((/* implicit */long long int) -49192167)))), (((/* implicit */long long int) max((var_6), (((/* implicit */unsigned char) arr_3 [i_0 - 2] [i_1])))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2 - 1] [15U] = ((/* implicit */signed char) 1321160513660551497LL);
                            var_18 = ((/* implicit */short) arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)57651)))) + (((/* implicit */int) var_4))))) ? (max((((/* implicit */unsigned int) ((signed char) (unsigned char)110))), ((-(var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
    var_20 = ((/* implicit */short) (((+(((/* implicit */int) var_10)))) % (max((((((/* implicit */int) var_0)) | (var_8))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (var_8)))))));
}
