/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241488
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 1LL)), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) - (arr_1 [i_1]))) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (-4329377927164860719LL))))))));
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */signed char) (+(max((((/* implicit */long long int) ((((/* implicit */int) (short)-4668)) >= (-6)))), (max((((/* implicit */long long int) arr_0 [i_0])), (-5927403549256141161LL)))))));
                arr_8 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((_Bool)0) ? (5927403549256141167LL) : (arr_5 [i_1 - 2] [i_1])))), (((unsigned long long int) arr_5 [i_1 - 2] [i_1 + 1]))));
                arr_9 [i_0] |= max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_3 [i_0])))) && (((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) (short)4667))))))), (max((((((/* implicit */_Bool) -7667998227834485626LL)) ? (-3646211609015484340LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-29))))), (((/* implicit */long long int) ((unsigned int) 918832342U))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(12612135191805148037ULL)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (var_12)))) ? (((((/* implicit */_Bool) var_8)) ? (max((var_15), (((/* implicit */long long int) (short)-11992)))) : (max((8126234725721748510LL), (((/* implicit */long long int) var_13)))))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)249)) && (((/* implicit */_Bool) var_9))))))))));
}
