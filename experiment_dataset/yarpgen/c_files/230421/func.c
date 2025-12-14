/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230421
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
    var_16 -= ((/* implicit */unsigned int) var_12);
    var_17 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_2 [i_1])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (arr_6 [i_0] [i_1] [6U] [i_3]))))) >= (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3])) > (((/* implicit */int) var_11))))))))));
                            arr_9 [i_0] [i_0] [i_0] [(unsigned char)4] [i_3] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_13)))))));
                            arr_10 [i_0] [i_1] [i_2] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_1] [i_3]), (((/* implicit */int) var_10))));
                        }
                    } 
                } 
                var_19 = var_12;
                arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_13))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_1] [i_1] [i_1] [i_1]) == (var_12))))) ^ (var_4)))));
            }
        } 
    } 
}
