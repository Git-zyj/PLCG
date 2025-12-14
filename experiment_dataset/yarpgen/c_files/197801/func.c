/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197801
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_5))));
    var_18 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */int) ((var_2) != (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = (-(min((max((arr_1 [i_2]), (((/* implicit */int) (unsigned char)212)))), (arr_8 [i_1 + 3] [i_1 + 3] [i_1 + 4]))));
                    arr_9 [i_2] [(short)1] [i_1] [i_0] = ((/* implicit */long long int) min(((+(((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (unsigned char)241))));
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((long long int) ((((/* implicit */int) var_8)) >> (((/* implicit */int) (unsigned char)15))))) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    var_20 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((unsigned int) var_5))) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) var_14)) : (var_13))))))));
                    arr_11 [i_0] = ((/* implicit */unsigned int) (short)32767);
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */_Bool) ((short) var_15));
    var_22 = var_14;
}
