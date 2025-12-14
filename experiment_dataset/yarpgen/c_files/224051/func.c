/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224051
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
    var_14 = ((/* implicit */unsigned char) (((~(((((/* implicit */int) (unsigned char)248)) >> (((((/* implicit */int) var_0)) - (3693))))))) * (((min((((/* implicit */int) var_7)), (var_11))) * (((/* implicit */int) ((((/* implicit */int) (signed char)13)) <= (((/* implicit */int) (signed char)-64)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) max((arr_4 [i_1] [i_2]), (arr_7 [i_0] [(_Bool)1] [i_1] [i_2])))), (max((((/* implicit */unsigned short) arr_4 [i_0] [i_2])), ((unsigned short)41965)))))), (2009145238))))));
                    arr_9 [i_1] = min((min((3840), (arr_3 [i_1]))), ((((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_0])))) ? (((/* implicit */int) arr_4 [i_0] [i_2])) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (unsigned char)135)) : (arr_8 [i_1]))))));
                }
            } 
        } 
    } 
}
