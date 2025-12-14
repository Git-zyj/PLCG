/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231887
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
    var_16 = ((/* implicit */_Bool) ((((-2133567775745026887LL) + (9223372036854775807LL))) >> (((2133567775745026887LL) - (2133567775745026887LL)))));
    var_17 += ((/* implicit */unsigned int) ((((6762574590502968292LL) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) -6762574590502968289LL)))))) || (((/* implicit */_Bool) ((((unsigned int) 4398974795180937135LL)) >> (((((((/* implicit */int) var_15)) >> (((var_8) + (3263183556452891899LL))))) - (2542))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((max((-8961830213192510045LL), (((/* implicit */long long int) arr_1 [i_0 + 1])))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), ((+(2190841302U)))))))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [2U])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) 2190841308U)) : (((-2133567775745026888LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)126)) >> (((((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_2 [i_0 + 1])))) + (8292))))))));
    }
    for (long long int i_1 = 3; i_1 < 13; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1 - 1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2190841287U))));
        arr_6 [i_1] = ((/* implicit */short) arr_3 [i_1] [i_1]);
        arr_7 [(signed char)13] [i_1] = ((/* implicit */signed char) ((((unsigned int) (-(((/* implicit */int) var_1))))) << (((/* implicit */int) ((_Bool) (+(arr_3 [i_1 + 2] [i_1])))))));
        var_20 ^= ((/* implicit */unsigned int) (-(4787865477706267962ULL)));
        var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_1 - 2] [(short)11]), (var_6)))) ? (((/* implicit */int) ((arr_3 [i_1] [i_1]) >= (((/* implicit */unsigned int) arr_4 [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) -6762574590502968303LL)) || (((/* implicit */_Bool) arr_3 [(short)12] [(short)12])))))))) : (min((var_11), (((/* implicit */long long int) (_Bool)1))))));
    }
    for (long long int i_2 = 3; i_2 < 13; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */short) (-(var_2)));
        var_23 = (+((+(((((/* implicit */int) var_3)) * (((/* implicit */int) var_12)))))));
    }
}
