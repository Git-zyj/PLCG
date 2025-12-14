/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34859
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
    var_12 |= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0 - 1] [i_0] [i_2] [i_0 - 2] [i_0] = ((/* implicit */short) var_2);
                            var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_3 [i_1] [7])))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) (-(var_2))))))) ^ (((/* implicit */int) var_6))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((arr_1 [i_4]) > (min((((/* implicit */unsigned long long int) arr_0 [i_0 - 2])), (((((/* implicit */_Bool) arr_12 [i_5])) ? (var_7) : (((/* implicit */unsigned long long int) var_9)))))))))));
                            arr_17 [i_0] &= ((/* implicit */short) var_11);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (var_3)))))))));
}
