/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241863
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) var_14);
                            arr_11 [i_3] [i_2] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_3] [i_0 + 1] [i_3]))) : (var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_0 - 2] [(unsigned short)8] [i_3])) : (((/* implicit */int) arr_3 [13ULL]))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_2] [i_3]))) : (var_2))))));
                            var_16 = ((/* implicit */unsigned short) var_6);
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */unsigned long long int) (+((+(arr_1 [i_0 - 2])))));
                var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_1]), (arr_2 [(unsigned short)16])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (arr_1 [i_0 - 2])))), (var_1)));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned int) max((min((((/* implicit */unsigned int) var_5)), (var_14))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)222)))))))))));
    var_19 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_6)))))))));
}
