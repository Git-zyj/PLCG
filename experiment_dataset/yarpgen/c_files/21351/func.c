/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21351
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
    var_19 = ((/* implicit */long long int) var_16);
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (((~(max((2439219146U), (((/* implicit */unsigned int) var_17)))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)62640), ((unsigned short)14226)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (!(var_8))))))))))));
    var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
    var_22 |= ((/* implicit */unsigned int) (-(var_7)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) max((arr_1 [i_0]), (arr_1 [i_0 - 1])))))));
        var_24 = ((/* implicit */signed char) ((unsigned int) arr_1 [i_0]));
        arr_3 [i_0] = ((/* implicit */_Bool) (-((-(((unsigned int) arr_2 [i_0] [i_0]))))));
        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_1])), (arr_1 [i_1])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [11LL] [11LL]))))) : (((((/* implicit */_Bool) arr_5 [2ULL])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [16U]))))))))));
        var_26 += max((((/* implicit */unsigned long long int) max((arr_0 [i_1]), (((signed char) arr_5 [12]))))), (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) arr_5 [i_1]))))) ? (arr_2 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) arr_4 [i_1] [i_1]))))))));
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_27 += arr_4 [i_2] [i_2];
        var_28 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_2 [i_2] [i_2])))))))));
    }
}
