/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191183
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
    var_18 = ((/* implicit */unsigned short) (((+(max((2199023255551LL), (((/* implicit */long long int) var_10)))))) << (((var_15) - (9213133686088696507LL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_0]);
                            var_19 += ((/* implicit */int) (_Bool)1);
                            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [19] [i_1] [i_3 + 1] [i_3])) ? ((-(var_13))) : (((/* implicit */unsigned long long int) ((((var_9) + (2147483647))) >> (((2147483647) - (2147483638))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : ((~((~(var_11))))));
                            var_21 = ((/* implicit */short) max((var_21), (var_12)));
                            arr_13 [i_0] [i_1] [i_3 + 1] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (-2199023255549LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-460714827) : (-460714827))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775801LL)) ? (((/* implicit */long long int) 8388606)) : (-2199023255535LL)))))))));
                        }
                    } 
                } 
                var_22 *= ((/* implicit */short) -2199023255551LL);
            }
        } 
    } 
    var_23 &= ((/* implicit */short) ((unsigned long long int) var_17));
}
