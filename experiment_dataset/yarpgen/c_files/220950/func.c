/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220950
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)18215), ((unsigned short)47321)))) || (((/* implicit */_Bool) max((var_7), (var_8))))));
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned short)47335)), (((unsigned long long int) var_11))));
    var_17 = ((/* implicit */_Bool) var_11);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)18214)) : (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)18215)) : (((/* implicit */int) (signed char)76))))))) ? (min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-645))) / (1562046006483814485ULL)));
                                arr_11 [i_2] [i_1] [i_2] [i_4 + 1] [i_2] = arr_10 [i_4] [i_4] [i_3 - 1] [i_2] [i_1] [i_0];
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-645)) && (((/* implicit */_Bool) arr_2 [i_2 + 1] [i_1])))))) >= (((((/* implicit */_Bool) (unsigned short)60397)) ? (0LL) : (((/* implicit */long long int) arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1])))))))));
                    arr_12 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) var_13);
                    arr_13 [3] [i_2] = ((/* implicit */int) ((((((((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [5])) != (((/* implicit */int) arr_0 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)47321)) >= (((/* implicit */int) (unsigned short)47322)))))) : (arr_2 [i_0] [i_0]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47386)))));
                    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((unsigned int) (_Bool)0)) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1764775502U)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_1] [i_0] [i_1] [i_0])) : (arr_4 [i_2])))) ? (((11708920993526461403ULL) >> (((((/* implicit */int) var_9)) - (7297))))) : (var_2)))));
                }
            } 
        } 
    } 
}
