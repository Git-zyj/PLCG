/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214604
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) var_3);
                                var_14 = ((/* implicit */unsigned long long int) ((long long int) ((short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_3) : (((/* implicit */int) (_Bool)1))))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) (+(448453587083095432LL)))) / ((-(var_1))))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) var_8);
                    var_17 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5))))))), (((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) (unsigned short)38075)) : (((/* implicit */int) arr_1 [i_0]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned long long int) (_Bool)0)), (var_1))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-12619))))))) ? (5676262730830098730LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
}
