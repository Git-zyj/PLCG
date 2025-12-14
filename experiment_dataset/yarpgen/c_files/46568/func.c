/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46568
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
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) (+(arr_3 [i_0 + 3] [i_0] [i_0 + 2])));
                var_12 = ((/* implicit */_Bool) ((unsigned long long int) max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1]))));
                /* LoopNest 3 */
                for (long long int i_2 = 4; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_12 [(_Bool)1] [i_3 - 1] = ((/* implicit */_Bool) min((min(((((_Bool)0) ? (((/* implicit */int) (unsigned short)13)) : (((/* implicit */int) var_3)))), (((/* implicit */int) (signed char)113)))), (((/* implicit */int) max((min((((/* implicit */signed char) var_10)), ((signed char)113))), (((/* implicit */signed char) (_Bool)1)))))));
                                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [(_Bool)1])), ((-((((_Bool)0) ? (arr_9 [i_0 + 3] [i_2]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))))))));
                                arr_13 [i_4 - 1] [i_3 - 2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_4 - 2] [i_4 - 1] [i_4]))) - (min((-4418433845629123564LL), (((/* implicit */long long int) arr_1 [i_0]))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_7 [i_3 - 1] [i_3] [i_3 - 2] [i_3 + 1])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_4 [i_0] [i_2] [i_4 - 1])) : (4294967289U)))))) : (((((/* implicit */_Bool) 955523205)) ? (arr_5 [i_3 + 1] [i_2 + 1] [i_1]) : (arr_5 [i_3 - 1] [i_2 + 2] [i_2])))));
                                arr_14 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 2] [i_0 - 1] = ((/* implicit */int) (~(((arr_9 [i_0 + 2] [i_1]) << (((/* implicit */int) (_Bool)0))))));
                                arr_15 [i_0] [i_4] = ((/* implicit */int) var_7);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((var_6), (var_6)));
}
