/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42964
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
    var_20 = ((/* implicit */unsigned int) ((short) var_12));
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((2423145398U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)12915))))))));
    var_22 &= max((((long long int) ((((/* implicit */_Bool) 2409283279U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12918))) : (2151594986U)))), (((/* implicit */long long int) 2576532234U)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-12901)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_24 = (-(2305843009213693952LL));
                            var_25 += ((/* implicit */long long int) (-(((unsigned int) (short)32756))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) 238794798U)), (2305843009213693952LL)))) ? (max((arr_2 [12]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                {
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            {
                                arr_22 [i_8] [i_5] [i_6] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 1871821894U)) % (arr_10 [i_7]))))));
                                var_28 += ((/* implicit */short) max((((/* implicit */long long int) (-(var_9)))), (max((max((-4956267187377990516LL), (((/* implicit */long long int) (short)-12904)))), (((/* implicit */long long int) var_0))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
