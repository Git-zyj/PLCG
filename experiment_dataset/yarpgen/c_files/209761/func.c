/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209761
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)65529);
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) 1487573221U))))))))))));
                            arr_11 [i_0] [i_0] [i_2] [i_3] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_9 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) == (max((529296403U), (((/* implicit */unsigned int) arr_3 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_19 = (unsigned char)28;
    var_20 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)21)) < (((/* implicit */int) (short)-1))))))));
}
