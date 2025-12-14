/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38750
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
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [i_0 + 2] [(signed char)5] = ((/* implicit */unsigned short) min(((signed char)-55), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)77)))));
                    arr_8 [i_0 - 1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) (-2147483647 - 1))))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) * (((/* implicit */int) (short)0))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)77)) > (((/* implicit */int) arr_0 [2ULL]))))) : (min((arr_6 [3LL]), (arr_4 [i_1])))))));
                    arr_9 [i_2] [i_1] [(short)9] = ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
    } 
    var_19 = var_12;
    var_20 = ((/* implicit */signed char) var_18);
    var_21 = ((/* implicit */long long int) var_1);
}
