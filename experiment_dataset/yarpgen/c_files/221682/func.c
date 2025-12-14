/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221682
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) var_7);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) var_17);
                            var_19 = ((/* implicit */int) ((short) ((((/* implicit */int) arr_1 [i_2 + 1])) >= (((/* implicit */int) arr_6 [i_2 + 1] [i_1] [i_2 + 1] [i_2 + 1])))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1])))))) ? (var_5) : (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) var_8))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_1)), (((unsigned char) arr_0 [i_0]))))))))));
                var_21 |= ((/* implicit */_Bool) 2134299036832321179ULL);
                var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_1] [i_0]) : (arr_4 [i_0] [i_0])))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_13))))));
    var_24 = ((/* implicit */int) (-(((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-134373882814035822LL))) / (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) -543186257)) : (var_14)))))));
}
