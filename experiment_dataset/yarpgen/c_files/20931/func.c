/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20931
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)1782))));
        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        arr_3 [i_0] |= ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)45237)), (8730313381826302458LL)));
    }
    for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        var_19 &= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)168)) && (((/* implicit */_Bool) 1334144711U)))))));
        var_20 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_1 - 1])), (var_7))))));
    }
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) arr_5 [19U]);
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (max((-340362491), (((/* implicit */int) var_2)))))))));
        var_22 = ((/* implicit */long long int) var_0);
        var_23 = ((/* implicit */_Bool) max((arr_0 [i_2]), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_17))) > (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) % (arr_8 [(short)0]))))))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_2])) >= (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((var_5) & (((/* implicit */int) var_16))))))))));
    }
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)94))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9)))))))));
    var_26 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775799LL)) ? (((/* implicit */int) (short)20209)) : (((/* implicit */int) var_15))))), (var_6)));
    var_27 |= (((-(((var_5) / (((/* implicit */int) var_7)))))) ^ (((/* implicit */int) var_8)));
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((var_5) + (((/* implicit */int) var_3)))) : (((((/* implicit */int) var_2)) + (((/* implicit */int) var_13))))))) ? (max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))) : (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_4))), (((/* implicit */unsigned long long int) max((4600131476026050121LL), (3934667869991532768LL))))))));
}
