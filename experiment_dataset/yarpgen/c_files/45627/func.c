/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45627
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (!((!(arr_0 [i_0]))))))));
        var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) - (4242263633U)))))), (17292830322593922758ULL)));
    }
    var_16 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-18859)))));
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            {
                arr_7 [i_2] = ((/* implicit */int) arr_3 [i_2] [(unsigned short)2]);
                var_17 = ((/* implicit */_Bool) min((var_17), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (0ULL))) <= (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) | (((/* implicit */int) arr_1 [i_2]))))) ? (((1153913751115628858ULL) | (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_14);
}
