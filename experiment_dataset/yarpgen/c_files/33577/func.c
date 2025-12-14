/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33577
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) var_8);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) arr_2 [i_1]);
                arr_7 [i_0] = ((/* implicit */_Bool) var_6);
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned short) ((signed char) (~(var_2))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                            {
                                arr_15 [(unsigned short)2] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */long long int) var_4);
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) var_11))))))));
                            }
                            var_17 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (min((var_10), (((/* implicit */unsigned long long int) (-(4294967295U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [14LL] [14LL])) / (var_7))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)47)))))))));
                            var_18 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (arr_4 [i_1] [i_1] [i_3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_8))));
    var_20 += ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) var_1)), (((var_3) % (((/* implicit */unsigned long long int) 435449425U))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            {
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (((~(((/* implicit */int) var_8)))) <= (((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))))));
                arr_22 [7] [i_5] = ((/* implicit */unsigned long long int) arr_11 [i_5] [i_5] [i_6] [i_6]);
            }
        } 
    } 
}
