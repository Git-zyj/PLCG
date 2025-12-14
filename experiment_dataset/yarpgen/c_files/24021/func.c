/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24021
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)20123))))) ? (((var_5) + (((/* implicit */unsigned long long int) var_3)))) : (var_5)))) ? (min((((/* implicit */unsigned long long int) (~(125024420)))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >> ((((~(var_1))) - (13629776136268657272ULL))))))));
    var_19 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [4ULL] = ((/* implicit */_Bool) min((((/* implicit */short) (!(var_11)))), (((short) arr_4 [i_0] [i_1]))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) 532559174)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_16))))));
                                var_21 = ((/* implicit */_Bool) (((-(arr_0 [i_3]))) >> (((70368744177663ULL) - (70368744177644ULL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_12);
}
