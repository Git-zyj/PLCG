/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2009
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
    var_12 = ((/* implicit */short) (((_Bool)0) && ((_Bool)1)));
    var_13 = ((/* implicit */unsigned long long int) ((signed char) ((max((var_6), (((/* implicit */unsigned int) (short)-15079)))) != (((/* implicit */unsigned int) ((int) var_2))))));
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((252U) <= (3481674829U)))), (min((((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((7675538526511010200ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [0ULL] [i_1] [i_2] = ((/* implicit */signed char) 137170518016ULL);
                    arr_10 [i_1] [i_2] = ((/* implicit */_Bool) ((signed char) 18446744073709551615ULL));
                    var_15 *= ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_2)) ? (0U) : (var_6))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))))) != (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 997112980U)))) ? (((/* implicit */int) ((_Bool) 0))) : (((/* implicit */int) ((_Bool) arr_5 [i_2]))))))));
                }
            } 
        } 
    } 
}
