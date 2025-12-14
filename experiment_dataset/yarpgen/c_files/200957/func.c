/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200957
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
    var_10 -= ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [(signed char)10] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_4 [i_0])), (max(((signed char)(-127 - 1)), ((signed char)127)))))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)33))))));
                    var_11 = ((/* implicit */long long int) max((max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 1]))), (max((arr_0 [i_0 - 3]), (((/* implicit */short) arr_6 [i_0 - 1] [(unsigned short)6] [i_0 - 1] [i_0]))))));
                    var_12 = ((/* implicit */unsigned char) ((arr_4 [i_0]) && (arr_4 [9ULL])));
                    arr_9 [i_0] [i_2] = ((/* implicit */unsigned short) max((min((arr_7 [5LL] [5LL] [(unsigned char)0] [i_2]), (((/* implicit */long long int) arr_5 [i_0 - 1] [i_0 + 1])))), (((max((arr_7 [i_2] [2LL] [2LL] [2LL]), (((/* implicit */long long int) arr_4 [8U])))) + (arr_3 [i_1] [(_Bool)1])))));
                }
            } 
        } 
    } 
    var_13 |= ((/* implicit */_Bool) var_7);
}
