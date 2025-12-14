/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28009
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-7)))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((1774189001) != (1774189001)))), ((unsigned char)237)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)123)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (-16777216LL) : (-8130563395878119194LL)))) ? (((((/* implicit */_Bool) (short)-7787)) ? (-16777216LL) : (2296835809958952960LL))) : (((/* implicit */long long int) 1688468693))))));
                    arr_10 [i_1] = ((/* implicit */unsigned short) arr_1 [i_0]);
                    arr_11 [i_1] [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (4879753821982070575ULL)))), (((-2296835809958952960LL) - (((/* implicit */long long int) arr_0 [i_1 + 1]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) max((((/* implicit */int) max(((!(((/* implicit */_Bool) 1138512667343681415LL)))), (((_Bool) -1658446944))))), (((((1500895159) - (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */int) (signed char)-15)) - (((/* implicit */int) (signed char)17))))))));
    var_19 = ((/* implicit */long long int) var_12);
}
