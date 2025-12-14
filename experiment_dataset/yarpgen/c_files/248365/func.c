/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248365
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (+((-((+(10713268513708119258ULL))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (short)4820))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((var_16), ((!((!((!(((/* implicit */_Bool) (unsigned short)47288))))))))));
                                arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-(arr_6 [i_4] [i_3]))))))));
                                var_17 = ((/* implicit */signed char) (~((~((~(var_7)))))));
                                arr_17 [i_4] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) (~((~((~(var_7)))))));
                                var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)31975))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+((~((~(((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_1])))))))))));
                var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_7)))))))));
                var_21 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
            }
        } 
    } 
}
