/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202983
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
    var_15 = ((/* implicit */unsigned int) (!(((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6))))) != (((/* implicit */int) min(((_Bool)1), (var_7))))))));
    var_16 *= ((/* implicit */short) min((((/* implicit */unsigned int) max((((/* implicit */signed char) var_7)), (var_10)))), (var_2)));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_17 = var_11;
        var_18 = ((/* implicit */long long int) ((int) (unsigned char)45));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0]))))) ? (arr_1 [i_0] [i_0]) : ((-(((/* implicit */int) arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (var_6))))));
        arr_5 [i_0] = var_6;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) arr_6 [(unsigned short)9] [i_1]);
        var_20 = ((/* implicit */unsigned long long int) (unsigned short)0);
    }
    for (int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
    {
        arr_14 [(unsigned char)7] [i_2] = max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) arr_11 [i_2])))), (((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) : (6988622043903402796ULL)))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            arr_17 [i_2] [(short)1] [i_2] = ((/* implicit */unsigned char) ((var_11) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775790LL)) ? (arr_1 [i_2] [i_3]) : (((/* implicit */int) var_8))))))))));
            arr_18 [i_2] [i_2] = ((/* implicit */int) arr_6 [i_2] [i_3]);
        }
        var_21 = ((/* implicit */int) ((-3067168625171828277LL) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [(unsigned char)8] [i_2])))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_22 = ((/* implicit */int) var_0);
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_20 [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_11)))) ? (((((/* implicit */_Bool) arr_19 [(_Bool)1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_20 [i_4])))) : (((arr_20 [i_4]) ? (((/* implicit */int) arr_20 [(short)3])) : (((/* implicit */int) arr_19 [i_4]))))));
        var_24 = ((/* implicit */long long int) arr_20 [i_4]);
        var_25 = ((/* implicit */signed char) ((int) ((arr_20 [1LL]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) : (var_6))))));
    }
}
