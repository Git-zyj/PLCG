/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51334
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
    var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((3362239222U) * (((/* implicit */unsigned int) -1151876673))))))) ? (((((12252786380026952903ULL) / (((/* implicit */unsigned long long int) 2547513786U)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7978)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) : (-7121517119950607835LL)))))) : (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0 - 3] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 3])) ? (arr_1 [i_0]) : (-8686586903620695469LL))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (-1668452153) : (((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)42))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)-107);
    }
    for (signed char i_1 = 3; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) arr_0 [i_1] [i_1]);
        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) > (((unsigned int) (unsigned char)1)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), (((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) var_13)))))))) : (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)136)) == (((/* implicit */int) var_11))))), (arr_1 [i_1])))));
        arr_8 [i_1] [(signed char)7] &= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 - 3])) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)119)), ((short)-2)))) : (((((/* implicit */int) arr_0 [i_1] [i_1])) | (((/* implicit */int) var_11))))))), (min((((/* implicit */long long int) arr_6 [i_1 + 3])), (-9143907742329251875LL)))));
    }
}
