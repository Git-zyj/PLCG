/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244631
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
    for (int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_12 = ((_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_11 [i_2 - 1] [i_1] [i_2 - 1] [i_0 + 1])) - (25)))));
                            var_13 = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (arr_0 [(short)3]) : (((/* implicit */long long int) 1614356176U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)122)))))))));
                            var_14 &= ((/* implicit */unsigned int) (+(1797103732)));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))) + (var_0)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) var_11))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_2 [i_0])))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_11))));
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) (+(var_0)));
    var_20 = ((/* implicit */int) max((var_20), (var_8)));
}
