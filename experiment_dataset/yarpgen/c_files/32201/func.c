/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32201
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_3))) ? (((((/* implicit */_Bool) ((-4577665466785784650LL) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((long long int) var_8))) : (var_1))) : (((/* implicit */unsigned long long int) var_6))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (-1915772587) : (((/* implicit */int) var_8))))), (var_9)))) ? ((-(((/* implicit */int) ((signed char) 18446744073709551611ULL))))) : (((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)208))) ? (min((var_12), (((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned short) var_5)))))));
    var_15 = min((((/* implicit */long long int) max((min((var_5), (((/* implicit */unsigned short) var_10)))), (((unsigned short) var_5))))), (9223372036854775780LL));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [(short)22] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (var_1) : (((/* implicit */unsigned long long int) 4577665466785784645LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)119))) / (9223372036854775749LL))))))) ? (((long long int) ((4577665466785784650LL) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [4] [i_0 + 1] [i_1])))))) : (max((4577665466785784652LL), (-9223372036854775775LL)))));
                arr_5 [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) < (min((((/* implicit */long long int) ((((((/* implicit */int) arr_3 [i_0] [12ULL] [i_0 + 2])) + (2147483647))) << (((((/* implicit */int) var_11)) - (54885)))))), (((((/* implicit */_Bool) var_10)) ? (4629028392682193652LL) : (arr_1 [i_0])))))))) : (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) < (min((((/* implicit */long long int) ((((((((/* implicit */int) arr_3 [i_0] [12ULL] [i_0 + 2])) - (2147483647))) + (2147483647))) << (((((/* implicit */int) var_11)) - (54885)))))), (((((/* implicit */_Bool) var_10)) ? (4629028392682193652LL) : (arr_1 [i_0]))))))));
                arr_6 [i_0] [15] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_0 [i_0] [i_1 - 3])) : (((var_0) & (((/* implicit */int) (unsigned char)99)))))), (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)127))))))));
            }
        } 
    } 
}
