/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213376
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
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_13)))))))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (var_10)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 |= ((/* implicit */_Bool) var_0);
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_18 &= ((/* implicit */unsigned long long int) ((short) (~(15632193993350710766ULL))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((var_10) + (((((/* implicit */_Bool) arr_6 [(unsigned short)6] [i_2])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_3] [i_0] [i_2] [i_3]))))) : ((~(var_10)))))));
                            arr_11 [i_0] [i_3] [i_0] [i_1 - 1] [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_2 + 2] [i_3 - 1] [i_3])) && (((/* implicit */_Bool) arr_3 [i_1 - 1])))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned char) var_9);
                var_19 = ((/* implicit */short) var_4);
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) var_6)) + (arr_2 [i_0])))))) || (((/* implicit */_Bool) ((((((/* implicit */int) var_13)) + (((/* implicit */int) arr_1 [(unsigned short)13] [i_1 - 1])))) + (((/* implicit */int) (unsigned char)146)))))));
            }
        } 
    } 
}
