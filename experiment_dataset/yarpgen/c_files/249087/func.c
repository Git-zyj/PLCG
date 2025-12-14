/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249087
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
    var_20 &= ((/* implicit */unsigned long long int) var_3);
    var_21 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) var_0)) % (((unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_11))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_16))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9673786859681716134ULL)))))) : (min((((((/* implicit */_Bool) arr_4 [i_1])) ? (6565931784936240017ULL) : (10931060348552239007ULL))), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]))))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (~(min((2061752931), (-611464405))))))));
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
    {
        var_24 ^= ((/* implicit */long long int) var_12);
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (2934005228877818718ULL)));
        var_26 = ((/* implicit */int) (+((+(var_10)))));
        arr_8 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [4] [i_2])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_0 [i_2] [i_2]))))) : (((long long int) arr_3 [i_2]))));
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_0))));
    }
    for (int i_3 = 2; i_3 < 13; i_3 += 4) 
    {
        var_28 = ((int) -1);
        var_29 = ((/* implicit */int) max((min((min((arr_10 [i_3]), (var_11))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (arr_12 [i_3] [i_3]) : (-644630460)))))), (((/* implicit */long long int) ((int) 1173544032090226680ULL)))));
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) min((min((-6232197377526201535LL), (((/* implicit */long long int) var_18)))), (max((((/* implicit */long long int) var_12)), (arr_11 [i_3])))))) ? (((/* implicit */unsigned long long int) arr_10 [i_3 + 2])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28))) : (((unsigned long long int) 127ULL)))))))));
        arr_13 [i_3 - 2] [i_3 + 1] = ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10)))))));
    }
}
