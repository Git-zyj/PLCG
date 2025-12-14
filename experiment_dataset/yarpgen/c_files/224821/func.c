/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224821
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_20 = ((/* implicit */long long int) var_9);
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */int) (+(((arr_0 [i_0 + 1]) ^ (arr_0 [i_0])))));
        arr_5 [i_0 - 1] = ((/* implicit */short) min((((((((/* implicit */long long int) ((/* implicit */int) var_3))) + (arr_0 [i_0]))) & (max((((/* implicit */long long int) var_6)), (4900485609323438609LL))))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) > (arr_0 [i_0 + 1])))))))));
    }
    for (short i_1 = 1; i_1 < 15; i_1 += 1) /* same iter space */
    {
        arr_8 [(short)0] = ((/* implicit */int) var_2);
        arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_1] [(short)5])) : (((/* implicit */int) var_17))))))) ? (((/* implicit */int) var_9)) : (31)));
    }
    for (short i_2 = 1; i_2 < 15; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [(short)14] = ((/* implicit */unsigned char) (~(max((((8841893881435477880LL) << (((((/* implicit */int) var_12)) - (21972))))), (((/* implicit */long long int) ((-779067891) - (((/* implicit */int) var_17)))))))));
        arr_13 [i_2 - 1] [i_2] = ((/* implicit */short) ((max((max((4900485609323438603LL), (((/* implicit */long long int) (short)7168)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1]))))))) ^ (((((/* implicit */_Bool) max((arr_3 [9]), (((/* implicit */short) arr_7 [i_2] [i_2]))))) ? (-4900485609323438586LL) : (((/* implicit */long long int) ((arr_6 [i_2]) & (((/* implicit */int) (short)-9556)))))))));
    }
    for (short i_3 = 1; i_3 < 15; i_3 += 1) /* same iter space */
    {
        arr_17 [(unsigned char)4] = ((/* implicit */long long int) arr_6 [i_3 + 1]);
        arr_18 [(short)14] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_10 [(short)8] [i_3])), (var_18))) - (((/* implicit */long long int) ((int) -1)))));
    }
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        arr_21 [i_4] = ((/* implicit */short) ((int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_19 [i_4] [i_4]))))), (arr_19 [i_4] [i_4]))));
        arr_22 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_4] [i_4])) - (((/* implicit */int) arr_20 [i_4] [i_4]))));
        arr_23 [i_4] [i_4] = ((/* implicit */long long int) arr_19 [(short)7] [i_4]);
    }
}
