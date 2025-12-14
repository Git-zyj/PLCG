/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201853
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) var_9);
        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned long long int) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        var_22 = ((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_5 [i_1])))));
        var_23 = ((/* implicit */int) (-(arr_4 [(signed char)0])));
    }
    for (int i_2 = 1; i_2 < 14; i_2 += 2) /* same iter space */
    {
        var_24 -= ((/* implicit */unsigned long long int) (((+(var_3))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_10)) > (arr_4 [i_2 + 2])))))));
        var_25 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_16))))) ? (((var_11) ? (arr_7 [i_2]) : (((/* implicit */long long int) var_17)))) : ((-(arr_4 [i_2]))))))));
    }
    for (int i_3 = 1; i_3 < 14; i_3 += 2) /* same iter space */
    {
        arr_13 [i_3 - 1] |= ((/* implicit */unsigned int) ((min((arr_1 [i_3 + 2]), (arr_1 [i_3 - 1]))) ^ (((arr_1 [i_3 + 4]) ^ (arr_1 [i_3 + 3])))));
        var_26 = ((/* implicit */long long int) max((var_26), (arr_4 [4ULL])));
    }
    var_27 += ((/* implicit */unsigned long long int) (_Bool)1);
    var_28 = ((/* implicit */unsigned long long int) (-(var_1)));
}
