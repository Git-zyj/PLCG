/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53844
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
    var_15 = ((/* implicit */_Bool) ((((unsigned long long int) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (unsigned short)15010)) : (((/* implicit */int) (unsigned short)38464))))) << (((/* implicit */int) var_14))));
    var_16 = ((/* implicit */signed char) var_1);
    var_17 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_18 += ((/* implicit */short) min((((/* implicit */unsigned long long int) ((var_14) ? (((/* implicit */int) ((var_2) > (arr_4 [i_0] [i_1])))) : (var_3)))), ((~(min((var_0), (((/* implicit */unsigned long long int) arr_4 [(signed char)4] [(signed char)20]))))))));
                    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)25))) : (var_9)))), (min((((/* implicit */unsigned long long int) var_5)), (arr_1 [i_0])))));
                    arr_8 [(unsigned short)19] [(unsigned short)19] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */int) ((_Bool) var_4))) ^ (((((/* implicit */int) (short)-25742)) & (arr_5 [i_0] [i_0]))))), (((/* implicit */int) (!((_Bool)0))))));
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) min((var_20), ((!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (arr_7 [i_0] [(unsigned char)4] [(unsigned char)4] [i_0]))))))))));
        arr_9 [i_0] = ((/* implicit */int) arr_4 [i_0] [i_0]);
    }
    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 1) 
    {
        var_21 = min(((+(6044365550985693865ULL))), (15158945198507610579ULL));
        var_22 = ((/* implicit */unsigned int) var_12);
        arr_14 [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_12 [(_Bool)1])) * (((/* implicit */int) var_14))));
    }
    var_23 += ((/* implicit */unsigned long long int) var_7);
}
