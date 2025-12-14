/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29903
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
    var_16 = ((/* implicit */unsigned long long int) var_6);
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)0))))))) % (min((((/* implicit */long long int) ((var_9) & (((/* implicit */int) var_0))))), (min((var_6), (var_6)))))));
    var_18 = ((/* implicit */int) (-(3405445670638081729ULL)));
    var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_10)) ? (min((537233837818924886ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_9))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_9 [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((unsigned long long int) var_13));
                            arr_10 [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */int) arr_8 [i_0]);
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_2 - 1])), (((511) * (((/* implicit */int) arr_0 [(_Bool)1] [i_1]))))))) ? ((~((-(1077810370))))) : ((((_Bool)0) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 4] [i_2 + 2] [i_2 - 4])) : (((/* implicit */int) arr_7 [i_2 + 2] [i_2] [i_2 - 2] [i_2 - 3]))))));
                            var_21 = ((/* implicit */short) arr_4 [i_0] [i_0] [(signed char)9]);
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) arr_6 [i_0] [(_Bool)1] [10ULL] [i_0] [(short)16]);
            }
        } 
    } 
}
