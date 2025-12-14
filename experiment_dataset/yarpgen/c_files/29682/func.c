/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29682
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) min((arr_3 [i_1]), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_13)))))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                arr_8 [i_0 + 1] [i_1] [i_2 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                var_15 += ((/* implicit */unsigned char) ((((/* implicit */int) min(((!(((/* implicit */_Bool) var_5)))), (var_2)))) << (((((arr_7 [10U] [10U] [10U]) / (((/* implicit */long long int) ((/* implicit */int) var_10))))) - (85247320852591LL)))));
            }
            for (unsigned int i_3 = 3; i_3 < 11; i_3 += 3) 
            {
                var_16 -= ((/* implicit */unsigned short) var_5);
                arr_12 [i_0] [i_0] [i_1] = max((((/* implicit */long long int) var_14)), (((max((var_5), (((/* implicit */long long int) var_6)))) + (arr_7 [(signed char)1] [(signed char)1] [i_1]))));
                var_17 ^= ((/* implicit */unsigned short) arr_2 [(_Bool)1] [(unsigned short)6]);
            }
            arr_13 [i_1] = arr_3 [i_1];
            arr_14 [i_0 + 2] [i_1] [(unsigned char)7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((min((((/* implicit */long long int) var_6)), (arr_3 [i_1]))), (6682306192988536205LL))))));
            var_18 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_0 + 2] [i_1]))))), (6682306192988536205LL)));
        }
        var_19 += ((/* implicit */unsigned int) max((min((((/* implicit */long long int) max(((unsigned char)73), (((/* implicit */unsigned char) (signed char)115))))), (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [(unsigned char)2] [i_0 + 3]))) / (var_9))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) & (((/* implicit */int) var_10)))))));
        arr_15 [i_0] = ((/* implicit */_Bool) arr_1 [i_0 + 1]);
    }
    var_20 = ((/* implicit */long long int) var_12);
    var_21 = ((/* implicit */_Bool) var_0);
    var_22 ^= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) & (((/* implicit */int) var_12))));
}
