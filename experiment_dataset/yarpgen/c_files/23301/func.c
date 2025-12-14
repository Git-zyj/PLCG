/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23301
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
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)117)), (((((/* implicit */_Bool) 1099444518912ULL)) ? (10763271417062688796ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120)))))));
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_5)), (((1099444518910ULL) << (((/* implicit */int) var_5))))));
    var_21 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_18))))) ? (min((((/* implicit */unsigned long long int) 2147483639)), (var_17))) : (max((var_14), (((/* implicit */unsigned long long int) -1)))))), ((+(max((var_10), (var_16)))))));
    var_22 = ((/* implicit */int) min((((((/* implicit */_Bool) (-(var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((+(var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) var_15)))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -2147483640)))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned char) var_14)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-33)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
        var_24 = ((/* implicit */int) min((((/* implicit */unsigned char) ((max((var_14), (var_16))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) <= (var_2)))))))), ((unsigned char)165)));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 7; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((int) var_16));
        arr_6 [i_1] = ((16320ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
    }
}
