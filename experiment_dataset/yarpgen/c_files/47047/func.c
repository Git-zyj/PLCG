/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47047
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1 + 3] [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) var_13)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0] [i_1]), (var_11)))))))) ? (((arr_2 [i_0 + 1] [i_1 + 4]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_1]))))) : (max((arr_2 [i_1 + 1] [i_0 + 1]), (arr_2 [i_1 + 4] [i_0 + 2])))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) >= (var_12))))) ? (min((((/* implicit */long long int) arr_1 [i_0 + 1])), (var_9))) : (((((/* implicit */_Bool) 1350231301359480391ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-23))) : (4111317729062608225LL)))));
                arr_6 [i_0] [i_0] [i_0] = var_14;
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) max((arr_3 [i_3] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_1))) ^ (((/* implicit */int) var_15)))))));
                            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) : (min((((/* implicit */unsigned long long int) var_0)), (var_10))))))));
                        }
                    } 
                } 
                arr_13 [i_1 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (arr_2 [(signed char)8] [i_1 + 3]) : (var_10))) ^ (((/* implicit */unsigned long long int) arr_8 [i_0 + 2]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)16))) < (8617080663043685359LL)))) : (((/* implicit */int) ((signed char) var_5)))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_4);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(var_10)))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_5))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-21)))))))))));
}
