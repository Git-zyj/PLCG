/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28487
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
    var_18 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [20LL]))))), (((((/* implicit */_Bool) arr_0 [10ULL])) ? (arr_0 [14U]) : (((/* implicit */unsigned long long int) var_1))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (signed char)119))));
            arr_5 [i_0] [i_1] = ((unsigned int) ((arr_0 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
            var_21 = ((/* implicit */_Bool) max((var_21), (((((/* implicit */long long int) max((((((/* implicit */_Bool) 11908652719267654813ULL)) ? (var_12) : (((/* implicit */int) (signed char)-119)))), (((/* implicit */int) max(((signed char)-4), (((/* implicit */signed char) (_Bool)1)))))))) >= (((((/* implicit */long long int) arr_4 [(_Bool)1])) & (((((/* implicit */_Bool) -4633556275373489083LL)) ? (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1])) : (var_6)))))))));
        }
        for (unsigned int i_2 = 3; i_2 < 22; i_2 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */int) var_3);
            var_23 |= ((signed char) arr_4 [(unsigned char)0]);
        }
        for (unsigned int i_3 = 3; i_3 < 22; i_3 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) var_10);
            var_25 = ((/* implicit */unsigned int) max(((~(arr_9 [i_3 - 1] [i_3]))), (((/* implicit */unsigned long long int) ((int) (+(755059849U)))))));
            arr_13 [(short)11] [i_3] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_7 [15U] [i_3] [i_0])), (max((((/* implicit */unsigned long long int) arr_12 [(_Bool)1])), (max((6538091354441896792ULL), (((/* implicit */unsigned long long int) var_6))))))));
            arr_14 [i_0] = ((/* implicit */unsigned int) max((max((arr_7 [i_0] [16ULL] [i_3 + 1]), (arr_7 [i_0] [i_3 - 3] [i_3 + 1]))), (arr_7 [i_0] [i_3] [i_3 - 1])));
        }
    }
    var_26 = ((/* implicit */int) var_11);
}
