/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28939
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
    var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)114))))), (max((((635138741U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (short)-30582))))));
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (-(((/* implicit */int) (short)-28504)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100))) + (179160139U))));
                                arr_14 [i_3] = ((/* implicit */short) max((((/* implicit */long long int) max(((!(((/* implicit */_Bool) arr_9 [i_0])))), (((_Bool) arr_0 [i_0] [i_0]))))), (min((((/* implicit */long long int) arr_7 [i_1 - 1] [i_4])), (-2056627360350845204LL)))));
                                var_14 = ((/* implicit */signed char) ((_Bool) var_4));
                            }
                        } 
                    } 
                } 
                arr_15 [(signed char)7] [i_1] = ((/* implicit */long long int) ((short) ((signed char) ((unsigned short) var_9))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) < (arr_1 [i_0]))))));
                var_16 = ((/* implicit */unsigned int) arr_4 [i_1 - 1]);
            }
        } 
    } 
}
