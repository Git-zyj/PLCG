/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42715
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) max((arr_3 [i_0]), (arr_3 [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned short)26553)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)23893))))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_3 [i_0]), (arr_3 [i_0]))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (var_15)))))))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [(_Bool)1] |= ((/* implicit */signed char) (unsigned short)23864);
        arr_13 [i_3] |= ((/* implicit */int) (!((!((_Bool)1)))));
    }
    var_19 = ((/* implicit */unsigned long long int) (-(var_5)));
}
