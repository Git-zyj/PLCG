/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48427
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 7; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) (((!(((_Bool) var_13)))) && (((((/* implicit */_Bool) -408766515)) && (((/* implicit */_Bool) ((arr_12 [i_4] [(unsigned short)4] [i_0] [i_0] [i_0] [i_0]) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [6LL] [i_1] [5]))))))))));
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(-1705642404592100990LL)))) - (min((min((var_14), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_4 [i_3] [(signed char)8] [(signed char)6])), (arr_5 [i_0])))))))))));
                                var_19 *= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_7 [i_1] [i_2 - 3] [i_2 - 3] [i_1 + 1] [i_1]))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39078))) : (1705642404592100962LL))))), ((-(-1705642404592100990LL)))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */short) (((+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 604982528182476908LL))))))) < (((/* implicit */int) (!(arr_12 [(short)0] [i_1 + 1] [i_0] [i_1] [i_1] [i_1]))))));
                arr_13 [i_0] [(unsigned char)2] [i_1] |= ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1 + 1]);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
    var_22 = ((/* implicit */unsigned int) var_9);
}
