/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214475
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
    var_18 = ((/* implicit */_Bool) ((int) var_6));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 6; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1 - 1] &= ((/* implicit */unsigned long long int) (+(((min((((/* implicit */int) arr_1 [i_1])), (-1460084052))) | (((/* implicit */int) var_15))))));
                var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)0))))))) && (((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) arr_1 [i_0 + 2]))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((int) (short)-10702));
                arr_6 [i_0 + 1] [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 4])) + (((/* implicit */int) arr_0 [i_0 + 4] [i_0 + 1])))))));
                arr_7 [i_1] = ((/* implicit */unsigned short) (-(min((-1490108705), (((/* implicit */int) (unsigned char)43))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_7)), (((unsigned int) min(((unsigned short)32369), ((unsigned short)45411))))));
    var_21 *= ((/* implicit */unsigned char) min((min((((((/* implicit */int) (unsigned char)252)) / (((/* implicit */int) (unsigned char)8)))), (((((/* implicit */int) var_4)) << (((((/* implicit */int) (unsigned char)87)) - (85))))))), (((/* implicit */int) (((~(4640711351127520260LL))) == (((/* implicit */long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (signed char)122))))))))));
}
