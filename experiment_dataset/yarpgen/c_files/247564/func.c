/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247564
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
    for (int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0 - 1] [(signed char)10] = (_Bool)0;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_10 *= (_Bool)0;
                                var_11 = ((/* implicit */short) var_4);
                                var_12 -= ((/* implicit */short) max((((/* implicit */long long int) ((var_0) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0]))))), (min((min((arr_8 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) var_2))))));
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 445944581U)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (_Bool)1))));
                                arr_17 [i_0] [i_1] [3ULL] [i_3] [i_4] = ((/* implicit */short) arr_4 [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_13 [16U] [i_1] [i_1] [i_1]))))) / (((/* implicit */int) ((arr_10 [i_0 + 1] [i_0] [i_0] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (short)1587)))))))), (((/* implicit */int) arr_9 [(unsigned short)4] [i_1] [i_1]))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) min((((/* implicit */int) var_2)), (((((/* implicit */int) (unsigned char)198)) * (((/* implicit */int) (short)-1609))))));
    var_15 = ((/* implicit */_Bool) var_2);
}
