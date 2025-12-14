/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203696
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
    var_13 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_4)) : (((var_5) ? (var_6) : (((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((unsigned long long int) var_1)))))));
                            var_14 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_2) : (var_2)))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)21429)))) : (((long long int) var_4)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (short i_6 = 1; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((var_5) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (var_8)))) ? (((long long int) max((var_8), (var_7)))) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))));
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_6))));
                                var_17 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) var_11)), (var_8))), (max((((/* implicit */long long int) var_0)), (var_7)))));
                                arr_20 [i_5] [(unsigned short)6] [i_4] [i_1] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                                arr_21 [i_5] [(unsigned char)19] [(unsigned short)13] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) min((var_6), (((/* implicit */int) var_5))))) : (min((var_3), (((/* implicit */long long int) var_9))))))) ? ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (var_9))))) : (min((((/* implicit */long long int) var_5)), (var_7))))) : (((/* implicit */long long int) max(((+(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
