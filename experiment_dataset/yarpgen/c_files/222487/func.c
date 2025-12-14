/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222487
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
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
    var_18 = var_7;
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_0 - 2] [i_1] [i_1] [i_1] = ((arr_7 [11LL] [i_0 - 2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18796))));
                    arr_9 [i_0] [i_0] [i_0 - 3] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) min((var_4), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_1] [i_0])))))))), (8566224314618817821LL)));
                    var_19 = ((/* implicit */_Bool) var_12);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((unsigned long long int) 7449425964915706161ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) : (((var_10) ? (arr_7 [i_0] [8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */short) ((((/* implicit */int) (signed char)-86)) != (((/* implicit */int) var_12))));
        var_21 &= ((/* implicit */int) arr_11 [(short)18]);
        var_22 += ((((((/* implicit */_Bool) 3736272737354424348ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13))) & (((/* implicit */unsigned int) ((/* implicit */int) ((arr_11 [(signed char)14]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201))))))));
        var_23 |= ((/* implicit */_Bool) (~(arr_11 [22U])));
        arr_13 [i_3] = ((/* implicit */unsigned int) (-(arr_10 [i_3])));
    }
}
