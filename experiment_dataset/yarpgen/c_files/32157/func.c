/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32157
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
    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((var_15), (min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -1)))), (((/* implicit */unsigned long long int) 4)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))));
                arr_5 [i_0] = min(((+(1870560132U))), (((/* implicit */unsigned int) arr_1 [i_1] [i_1 + 1])));
                var_19 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60660))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_6 [i_2]))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_2] [i_2])))))));
        var_22 = ((/* implicit */long long int) min((arr_7 [i_2] [i_2]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2])))))));
        var_23 *= ((/* implicit */unsigned short) 0);
    }
    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_24 = ((/* implicit */int) arr_3 [i_3] [(short)0]);
        var_25 = ((/* implicit */int) arr_6 [i_3]);
        var_26 = arr_8 [i_3];
    }
    for (long long int i_4 = 3; i_4 < 21; i_4 += 3) 
    {
        var_27 = ((/* implicit */unsigned char) max((arr_12 [i_4]), ((~(arr_12 [i_4])))));
        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_11 [i_4] [i_4]), (arr_11 [i_4] [i_4]))))));
        var_29 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_12 [i_4]))))));
    }
}
