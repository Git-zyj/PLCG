/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41026
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
    var_14 |= ((/* implicit */unsigned char) -2681870785741130230LL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_1 [i_0 - 4]))))) ? (((/* implicit */long long int) (-(var_1)))) : (min((((/* implicit */long long int) min(((unsigned short)23116), (((/* implicit */unsigned short) arr_1 [9]))))), ((-(2681870785741130229LL)))))));
                var_15 = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) -8120864609259246398LL))))));
                var_16 |= ((/* implicit */long long int) (((((+(((/* implicit */int) (short)-32748)))) == ((-(((/* implicit */int) var_10)))))) ? ((((!(((/* implicit */_Bool) -577027596415217079LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)150)) || (((/* implicit */_Bool) (short)-32749))))) : (((/* implicit */int) max((arr_2 [i_1] [i_1 - 1]), (var_12)))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) >= (296301989)))) <= (((((/* implicit */_Bool) (short)32)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_0 - 3] [i_1 - 1])))))))));
                arr_5 [i_1] [(signed char)15] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (short)-32717)), (577027596415217082LL))) + ((-(-577027596415217079LL)))));
            }
        } 
    } 
}
