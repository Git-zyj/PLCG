/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213070
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
    var_19 = ((/* implicit */short) var_6);
    var_20 ^= ((/* implicit */unsigned short) var_18);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [(unsigned short)1] [i_2] [(_Bool)1] = min(((+(((((/* implicit */int) var_10)) * (((/* implicit */int) arr_4 [7LL] [i_1] [7LL])))))), (((/* implicit */int) (unsigned short)13449)));
                    var_21 &= ((/* implicit */unsigned short) min((max((((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))), (((((/* implicit */int) var_3)) * (((/* implicit */int) arr_0 [(unsigned short)4])))))), (((/* implicit */int) (short)-30797))));
                }
            } 
        } 
        arr_9 [4] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) * (((/* implicit */int) (signed char)-19))));
        var_22 = ((/* implicit */_Bool) min((((/* implicit */int) var_16)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0 + 1] [8] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            arr_12 [i_3] = ((/* implicit */unsigned int) ((arr_7 [i_3]) / (max((((((/* implicit */int) arr_6 [i_0] [i_3] [4LL])) * (((/* implicit */int) arr_0 [i_3])))), (((/* implicit */int) arr_3 [i_0] [i_3 + 1] [i_3]))))));
            var_23 = ((/* implicit */int) (signed char)(-127 - 1));
            arr_13 [i_3] = ((/* implicit */unsigned int) arr_7 [i_3]);
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) min((arr_10 [10LL] [0LL]), (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_16)), ((unsigned short)9780)))))))))));
        }
        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0] [(signed char)3] [(unsigned char)4]))));
    }
    var_26 = ((/* implicit */long long int) var_3);
}
