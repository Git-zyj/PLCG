/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46868
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
    var_19 *= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_7))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((-(-3248687449244100956LL))), (((/* implicit */long long int) var_17)))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)26898)), (3758096384ULL)))) || (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1])) && (((/* implicit */_Bool) arr_5 [i_0 - 4] [i_0 - 2] [i_0 - 1]))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((((unsigned long long int) arr_1 [15LL])) & (((unsigned long long int) arr_8 [i_4 - 1] [i_1] [i_2] [i_3])));
                                var_22 = ((/* implicit */long long int) ((arr_1 [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -4LL))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((((long long int) ((((/* implicit */_Bool) arr_11 [i_5])) ? (arr_10 [i_0] [i_1] [18ULL] [i_3] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2])))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) max(((short)11080), (var_17)))) ? (((/* implicit */int) (short)-26887)) : (((/* implicit */int) var_5)))))));
                                var_24 |= arr_6 [i_1];
                            }
                        }
                    } 
                } 
                arr_18 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_7 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))), (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_16)), ((short)-26900))))) ^ (((((/* implicit */_Bool) (short)-26899)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_7 [i_0 - 4] [i_0] [i_0])))))));
                arr_19 [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_7 [i_1] [i_1] [i_0])))) <= (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_15))) & (6705853050166770018LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((long long int) 4095LL))))));
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (min((arr_17 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]), (arr_17 [i_0] [i_0 - 3] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 4]))) : ((-(arr_3 [i_0 - 1] [i_0 - 1] [i_1]))))))));
            }
        } 
    } 
    var_26 = var_17;
}
