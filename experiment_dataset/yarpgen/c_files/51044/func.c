/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51044
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                arr_8 [i_1] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 + 1])))) - (max(((-(arr_3 [i_0 + 3] [i_1]))), (((((/* implicit */_Bool) var_4)) ? (arr_3 [i_0] [i_1 + 1]) : (arr_1 [(_Bool)1] [i_1])))))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))) ? (min(((-(((/* implicit */int) arr_2 [3ULL] [i_1])))), (((/* implicit */int) ((short) var_15))))) : (((/* implicit */int) ((short) max((var_3), (var_18))))))))));
                var_20 = ((/* implicit */unsigned short) ((int) ((unsigned int) var_17)));
                var_21 += ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (((unsigned short) var_14)))))));
                var_22 = ((/* implicit */short) arr_2 [i_1] [i_1]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    arr_17 [i_4] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned short) arr_15 [i_2] [i_4] [i_2] [i_4]))), (min((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-121)))), (var_0)))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-1)) & (((/* implicit */int) (signed char)34))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((unsigned short) (-(((((/* implicit */int) arr_13 [i_2] [10LL] [i_2])) + (((/* implicit */int) arr_13 [i_4] [24ULL] [i_2])))))))));
                    var_25 = ((/* implicit */short) ((_Bool) -241560598506810660LL));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) ((unsigned long long int) var_1))));
}
