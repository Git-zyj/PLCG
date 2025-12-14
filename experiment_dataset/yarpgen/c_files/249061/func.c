/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249061
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_17))))) * (arr_2 [i_0]))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1380668151)), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) -1380668164)), (max((arr_1 [i_1]), (((/* implicit */unsigned int) (signed char)-52))))))) : (max((var_0), (((/* implicit */long long int) arr_1 [i_1 + 2]))))));
                var_21 = ((/* implicit */int) arr_1 [i_0]);
                var_22 += ((/* implicit */long long int) var_4);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) ((_Bool) max((7553065016746207471ULL), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2])))))) != ((~((+(((/* implicit */int) arr_4 [i_2] [13])))))))))));
                var_24 = ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) (+(((/* implicit */int) var_13))))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((-(min((((/* implicit */unsigned long long int) var_9)), (var_2))))) : (((/* implicit */unsigned long long int) -347782816508183498LL)))))));
    var_26 = ((/* implicit */unsigned int) var_6);
    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) min((max((1344389535922135911LL), (var_11))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? ((-(-1380668151))) : (((var_12) ? (((/* implicit */int) var_5)) : (var_7)))))))))));
}
