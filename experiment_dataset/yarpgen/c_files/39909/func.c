/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39909
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
    var_18 = ((/* implicit */long long int) ((_Bool) (((+(((/* implicit */int) (short)-19795)))) & (((/* implicit */int) max((var_4), ((short)13980)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) (~((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_20 = max((min((arr_9 [i_2] [i_2] [i_0] [i_2] [i_3]), (arr_8 [i_1] [i_0] [i_3 + 1] [i_0]))), ((unsigned char)242));
                            var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_2 - 1] [i_2 + 1])), (((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1] [i_1])) ? (((/* implicit */int) (short)-19795)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */int) ((_Bool) arr_1 [i_2 + 1] [i_3 + 1]))) : (1890442443)));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] = arr_6 [i_0];
            }
        } 
    } 
    var_22 = max((((((/* implicit */_Bool) var_8)) ? (937184942) : (((((/* implicit */int) (unsigned char)244)) / (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (-7777589353364266218LL))))))));
    var_23 = ((/* implicit */_Bool) min((var_11), (max((var_6), ((-(((/* implicit */int) (short)19769))))))));
}
