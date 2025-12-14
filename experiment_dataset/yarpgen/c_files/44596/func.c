/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44596
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
    var_14 = ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) (unsigned short)20004)), (var_4)))))) ? (var_12) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_5)) ? (1019443346) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (~((~(var_4)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)45517))));
                            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_13), (1797184185376364263LL))))));
                            arr_11 [(signed char)3] [(signed char)3] [i_1] = ((/* implicit */unsigned char) var_9);
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_9)), (var_13)))))) ? (min((((/* implicit */int) var_7)), (((var_1) ? (arr_4 [(unsigned char)2]) : (((/* implicit */int) arr_3 [i_1 - 2])))))) : (((/* implicit */int) arr_3 [(signed char)14]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 *= ((/* implicit */signed char) max(((~(9223372036854775807LL))), (-9223372036854775787LL)));
    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
}
