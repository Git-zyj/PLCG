/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210331
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
    var_20 -= ((/* implicit */unsigned short) max((((/* implicit */short) var_5)), (var_3)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((max((((/* implicit */long long int) min((arr_3 [i_0]), (((/* implicit */int) var_10))))), (((long long int) arr_2 [i_0] [i_1 + 2])))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) == (min((((/* implicit */int) arr_2 [i_0] [i_0])), (arr_3 [i_1 - 1])))))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) var_17);
                                arr_12 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_0] [i_3] [i_3] [i_4]);
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) ^ (var_9)))));
                            }
                        } 
                    } 
                } 
                var_22 &= ((/* implicit */signed char) ((15682520874439979221ULL) + (((/* implicit */unsigned long long int) 1613228562))));
            }
        } 
    } 
}
