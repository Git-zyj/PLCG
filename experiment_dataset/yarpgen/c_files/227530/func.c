/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227530
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = (short)-15281;
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-((-(((/* implicit */int) arr_1 [(short)6])))))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_3 [i_2]))));
                    arr_8 [i_0] [i_1] [17U] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [(_Bool)1])) && (((/* implicit */_Bool) var_12)))))) : (5590384809205858139ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_15)))) ? (2190998513U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 - 3]))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((signed char) 109906909U));
    var_22 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        {
                            arr_20 [i_3] [i_4] [i_5] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [i_6]))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4051111145481888600LL)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_14 [i_3] [i_4] [i_6])))) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4]))) + (5969530134503845392LL))) & (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6])))));
                            var_24 = ((/* implicit */signed char) var_8);
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
}
