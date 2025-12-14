/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237030
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
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((long long int) (short)32767);
                arr_7 [(_Bool)1] [(_Bool)1] &= ((/* implicit */short) var_2);
                arr_8 [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 3; i_2 < 23; i_2 += 4) 
    {
        for (unsigned int i_3 = 3; i_3 < 23; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned int i_5 = 2; i_5 < 23; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_25 [i_6] [(short)10] [i_6] [i_6] [i_6] = ((/* implicit */long long int) arr_9 [i_6]);
                                arr_26 [i_6] [(short)7] = ((/* implicit */short) arr_19 [i_2] [19LL] [i_6]);
                                arr_27 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_14 [i_3]) ? (((/* implicit */int) arr_18 [i_2 + 1] [i_3 - 3] [i_3 + 1] [i_5 + 1])) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : (((((1152515622U) < (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ? (arr_9 [i_2 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)32759), (((/* implicit */short) var_9))))))))));
                                arr_28 [i_6] [i_5 - 1] [i_5] [i_4] [i_3] [i_2] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_22 [i_5 - 2] [i_5] [i_2 + 1] [i_5] [i_3] [i_3 - 3] [i_2 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_17 [i_2 + 1])) >= (((/* implicit */int) arr_17 [i_2 + 1])))))));
                            }
                        } 
                    } 
                } 
                arr_29 [i_2 + 1] |= min((((/* implicit */unsigned int) (_Bool)1)), (((arr_17 [i_2 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2 + 1]))) : (var_2))));
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) (!(var_4)))), ((-(var_2)))))));
}
