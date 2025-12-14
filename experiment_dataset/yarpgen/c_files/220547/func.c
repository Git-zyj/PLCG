/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220547
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
    var_13 = var_7;
    var_14 = ((/* implicit */long long int) var_4);
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (+(((/* implicit */int) var_7)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(8846305387993408269LL)))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (8846305387993408262LL) : (8846305387993408269LL)))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-8846305387993408287LL) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255)))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (signed char)-1);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_7 [(signed char)14] = ((((/* implicit */_Bool) 8655300056666852864LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : (-8655300056666852865LL));
        var_17 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-115)) & (((/* implicit */int) (unsigned short)57521)))))));
    }
}
