/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234278
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
    var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (var_9)))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((385231916) / (((/* implicit */int) var_5))))) % (-4375093378023436917LL))))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 7; i_2 += 2) 
            {
                {
                    var_14 *= ((/* implicit */signed char) min((var_6), (((/* implicit */long long int) min((max((arr_4 [i_0]), ((short)-17761))), (min((((/* implicit */short) var_0)), (arr_4 [i_2 - 2]))))))));
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    var_15 = min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])), (((((/* implicit */long long int) (+(((/* implicit */int) (short)15411))))) * (max((((/* implicit */long long int) arr_2 [i_1])), (var_8))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) 1667163847);
    var_17 = ((/* implicit */_Bool) ((((_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15418))) : (((((/* implicit */unsigned long long int) 3690409972U)) + (((((/* implicit */_Bool) (short)-15421)) ? (12590175524139454018ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15420)))))))));
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */short) var_4)), ((short)15394)))) ? (((/* implicit */int) ((_Bool) 16046175122867816739ULL))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) >> (((((/* implicit */int) var_12)) - (1080)))));
}
