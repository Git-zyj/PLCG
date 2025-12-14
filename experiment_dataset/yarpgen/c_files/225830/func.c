/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225830
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_15 = arr_0 [i_0 - 1];
        var_16 |= ((/* implicit */unsigned short) var_11);
        var_17 = ((/* implicit */signed char) (~(-8940521920829643654LL)));
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                arr_6 [i_2] [i_2] [i_1] [(signed char)7] = ((/* implicit */signed char) arr_1 [i_0 - 1] [i_0]);
                arr_7 [11LL] [(signed char)22] [i_2] [i_1] = ((/* implicit */unsigned int) var_11);
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_0 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
            }
            var_19 = ((/* implicit */unsigned short) arr_0 [(unsigned char)4]);
        }
    }
    for (long long int i_3 = 1; i_3 < 24; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_1 [9U] [i_3 - 1]), ((_Bool)1)))) | ((+(((/* implicit */int) arr_1 [i_3 + 1] [i_3]))))))) ? (((((/* implicit */_Bool) arr_4 [(unsigned short)4])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (arr_2 [i_3] [i_3 - 1] [i_3 + 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(short)10] [i_3])) ? (arr_2 [i_3 + 1] [i_3] [i_3]) : (arr_9 [i_3 + 1] [(_Bool)1])))) ? (arr_0 [(short)10]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_3] [i_3 + 1] [i_3])) : (((/* implicit */int) arr_1 [i_3 + 1] [i_3])))))))));
        arr_10 [(short)4] = (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)95))))));
        var_21 = ((/* implicit */long long int) min((var_21), (arr_2 [(_Bool)1] [(signed char)8] [i_3 + 1])));
    }
    var_22 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((var_1) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (var_4) : (((/* implicit */long long int) var_3)));
    var_23 = ((/* implicit */signed char) var_14);
}
