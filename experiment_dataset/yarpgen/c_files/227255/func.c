/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227255
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
    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))));
    var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((var_19), (((/* implicit */unsigned char) var_11)))))));
    var_22 = ((/* implicit */short) var_13);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_5 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)20)))))));
                            var_25 = ((/* implicit */unsigned char) var_0);
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_13 [i_3] [10LL] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2]))));
                            arr_14 [i_0] [i_2] [i_1] &= ((/* implicit */signed char) var_1);
                            arr_15 [i_2] = ((/* implicit */signed char) arr_13 [i_2] [3LL] [i_2] [i_2 + 2] [i_2] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        for (int i_5 = 1; i_5 < 17; i_5 += 2) 
        {
            {
                var_27 += ((/* implicit */signed char) arr_18 [i_5 - 1]);
                arr_22 [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                var_28 = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) arr_20 [10LL] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_20 [i_4] [i_4] [i_4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_4])) && (((/* implicit */_Bool) arr_20 [i_5 - 1] [i_4] [i_4]))))))), (((/* implicit */long long int) arr_21 [i_4]))));
                var_29 += ((/* implicit */unsigned short) (+(max((arr_17 [i_5 + 1] [i_5 + 2]), (arr_17 [i_5 + 2] [i_5 - 1])))));
            }
        } 
    } 
}
