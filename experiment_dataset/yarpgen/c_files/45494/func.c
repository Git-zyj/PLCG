/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45494
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) ((((((/* implicit */int) arr_3 [i_2 + 2] [i_2 + 2] [i_2 - 1])) / (((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 3] [i_2 + 1])))) > ((+((+(((/* implicit */int) arr_4 [(unsigned short)1]))))))));
                    var_16 *= ((/* implicit */signed char) max(((~(arr_2 [i_2 - 1] [i_2 + 3]))), (((((/* implicit */_Bool) arr_2 [i_2 + 3] [i_2 + 3])) ? (arr_2 [i_2 + 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66)))))));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) (_Bool)1);
}
