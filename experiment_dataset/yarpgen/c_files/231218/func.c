/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231218
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2] [i_3] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((~(var_6)))));
                            arr_10 [i_1] = ((/* implicit */signed char) min((((((-4329270004778928536LL) + (((/* implicit */long long int) (-2147483647 - 1))))) % (((/* implicit */long long int) (-(256637517U)))))), (((/* implicit */long long int) (signed char)-49))));
                            var_12 = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_1 [i_2])) ? (var_9) : (((/* implicit */int) (unsigned short)65408)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) <= (max((((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_1))))));
                        }
                    } 
                } 
                var_13 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-222)) ? (var_6) : (var_6)))))))));
                var_14 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)48))));
                arr_11 [i_1] [(unsigned short)0] = ((/* implicit */short) min(((!(((/* implicit */_Bool) ((((/* implicit */int) (short)221)) + (((/* implicit */int) (_Bool)0))))))), (((((/* implicit */int) (signed char)114)) > ((-(((/* implicit */int) (_Bool)0))))))));
                var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1]))))), ((-(((/* implicit */int) (short)250))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_7);
    var_17 = ((/* implicit */unsigned int) var_6);
}
