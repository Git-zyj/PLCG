/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30239
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) ((var_6) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (-77252364) : (arr_1 [2LL])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
    }
    var_21 -= ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)91)))))));
                    var_23 -= ((/* implicit */short) ((-2147483638) / (((/* implicit */int) (signed char)(-127 - 1)))));
                    arr_14 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_11 [i_1 + 3])) || (((/* implicit */_Bool) arr_11 [i_1 + 2]))))));
                    arr_15 [20LL] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) var_15);
                }
            } 
        } 
    } 
}
