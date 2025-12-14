/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231808
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
    var_11 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (1542218610U)))))));
    var_12 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 2])) || (((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_2 [i_1 - 1]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) var_7);
                            arr_11 [i_0] [10ULL] [i_1] [i_0] = arr_5 [i_0] [i_1] [i_2 - 1];
                            arr_12 [i_0] [i_0] [i_1] [i_1] [7LL] [i_3] = ((/* implicit */signed char) ((int) (_Bool)1));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_10;
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) min(((_Bool)1), ((!(((/* implicit */_Bool) (((_Bool)1) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
    var_14 = ((((/* implicit */int) var_1)) != (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (var_9))))));
}
