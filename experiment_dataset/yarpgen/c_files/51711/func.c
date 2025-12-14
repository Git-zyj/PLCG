/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51711
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (min((4294967286U), (10U)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((9829512240095322677ULL), (((/* implicit */unsigned long long int) var_11)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) var_1)))))))) ? (((((/* implicit */_Bool) min((var_0), (((/* implicit */int) (signed char)113))))) ? (((/* implicit */long long int) ((arr_0 [i_2]) << (((((/* implicit */int) var_8)) - (64881)))))) : (max((arr_14 [i_0]), (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27585))) : (arr_10 [i_0] [i_1] [i_0] [i_3] [i_4]))))));
                                arr_17 [i_0] [i_0] [i_1] [i_2] [10] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] [i_4]), (9829512240095322696ULL)))) ? (((/* implicit */long long int) min((min((((/* implicit */unsigned int) (unsigned short)37951)), (arr_4 [i_2] [i_4]))), (((/* implicit */unsigned int) var_0))))) : (max((((/* implicit */long long int) ((int) 2236920152U))), (((5623104505121660898LL) << (((4294967286U) - (4294967286U)))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) 10U);
                }
            } 
        } 
    }
    var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) max((var_7), (((/* implicit */unsigned int) (unsigned char)44)))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)37951)) || (((/* implicit */_Bool) 2161544529U))))), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    var_17 = ((/* implicit */int) var_14);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1717167317)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)929))) : (2161544529U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))))));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9169097160546759493LL)))))));
}
