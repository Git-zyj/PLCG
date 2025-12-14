/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232828
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
    var_14 ^= var_13;
    var_15 -= (!(((/* implicit */_Bool) (short)-7369)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 4] [i_1] [i_2])) ? (var_0) : (arr_7 [i_1 + 2] [i_1] [i_1 + 2])))) || (((/* implicit */_Bool) (unsigned char)175))));
                        var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(1720472450962042056LL)))) ? (((((/* implicit */_Bool) var_9)) ? (arr_8 [i_0] [i_0] [i_1]) : (var_12))) : (((/* implicit */unsigned long long int) ((long long int) var_9))))), (((/* implicit */unsigned long long int) var_13))));
                        var_18 ^= (unsigned char)197;
                    }
                    var_19 = ((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_0] [i_2] [i_1 + 3] [i_1 + 2]);
                }
            } 
        } 
    } 
}
