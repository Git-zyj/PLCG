/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241259
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
    var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((short) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) 8736498941508323357LL)) ? (-8736498941508323358LL) : (var_12)))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_7), (((/* implicit */signed char) ((arr_7 [i_0 + 1]) || (((/* implicit */_Bool) var_9)))))));
                                var_16 = (!(((/* implicit */_Bool) ((unsigned int) min((arr_10 [i_0] [7U] [(unsigned short)3] [i_0] [i_0 - 3] [i_0]), (var_7))))));
                                var_17 = ((/* implicit */long long int) min((var_17), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0])) ? (925849600) : (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0]))), (((/* implicit */long long int) ((((((/* implicit */_Bool) -888093942)) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((9009678833915187525LL) == (((/* implicit */long long int) ((/* implicit */int) (short)26455))))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_11)) : (arr_6 [i_0] [(_Bool)1] [i_0 - 2] [i_0]))))))))));
                                var_18 = arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4];
                                var_19 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [7] [i_0]);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */_Bool) arr_2 [i_1]);
                arr_14 [i_1] = (unsigned short)18638;
                var_21 += ((/* implicit */int) var_4);
            }
        } 
    } 
}
