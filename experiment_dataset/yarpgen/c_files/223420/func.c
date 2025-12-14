/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223420
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) (short)510))));
        arr_5 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (short)-30250)), (-792468985877206632LL)));
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_11 = ((/* implicit */signed char) ((unsigned long long int) 5103879198877316165ULL));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            arr_11 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_0 [i_1]), (arr_3 [i_1])))) > (((/* implicit */int) ((arr_8 [i_1]) && (((/* implicit */_Bool) arr_7 [i_1])))))));
            var_12 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) -2056330771)) ? (((/* implicit */unsigned long long int) -1)) : (5144365686722089291ULL))));
        }
    }
    for (signed char i_3 = 1; i_3 < 23; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 23; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 1) 
            {
                {
                    arr_20 [i_4] [i_3] [i_5 + 3] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_3] [i_4] [i_4] [i_5])) ? (min((arr_17 [i_5] [i_4] [i_3 + 1]), (arr_17 [0LL] [0LL] [i_3 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5 + 2] [i_5 + 3] [i_5])) ? (((/* implicit */int) arr_18 [i_5] [i_4] [i_3])) : (((/* implicit */int) ((short) arr_17 [i_5] [i_3] [i_3]))))))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_15 [i_3 - 1] [i_4 - 1]))) ? (((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_4 - 1])) ? (arr_15 [i_3 - 1] [i_4 - 1]) : (arr_15 [i_3 - 1] [i_4 - 1]))) : (((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_4 - 1])) ? (arr_15 [i_3 - 1] [i_4 - 1]) : (arr_15 [i_3 - 1] [i_4 - 1])))));
                    arr_21 [i_3 - 1] [i_4] [(short)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_3] [i_4])) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3] [i_5]))))), (arr_16 [i_4] [i_3 + 1])))) : (((/* implicit */int) ((short) ((unsigned char) arr_18 [i_3] [i_4] [i_5 + 1]))))));
                }
            } 
        } 
        var_14 = arr_19 [i_3 + 1] [i_3] [i_3] [i_3];
    }
    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (max((var_10), (((/* implicit */unsigned int) ((signed char) (short)14702)))))));
    var_16 = ((/* implicit */unsigned char) var_0);
}
