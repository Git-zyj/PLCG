/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51506
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
    var_17 = ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_5)) - (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_3))))))) ? (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) var_7))))) : (((max((((/* implicit */unsigned long long int) (_Bool)0)), (4186760870289735372ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_7 [i_0] = arr_3 [i_0] [i_0] [i_1];
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_14))));
                    var_19 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_11)), ((short)27531)))), (min((14259983203419816244ULL), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) (_Bool)0))))) : ((-(var_3))))))));
                    arr_12 [i_0] [i_0] = ((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)127)))), (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))), (arr_4 [i_2] [i_0]))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-28697))) ^ (var_3))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((long long int) var_11)))))) : ((~(((/* implicit */int) var_4))))));
    /* LoopNest 3 */
    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 4) 
    {
        for (long long int i_4 = 3; i_4 < 16; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_21 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (arr_15 [i_4 - 3] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-136))))), (((((/* implicit */_Bool) arr_15 [i_5] [i_4])) ? (arr_15 [i_4 - 2] [i_5]) : (arr_15 [i_5] [i_4])))));
                    arr_21 [i_3] [0] [i_5] [i_5] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
