/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48567
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
    var_19 = ((/* implicit */long long int) (_Bool)0);
    var_20 -= ((((/* implicit */_Bool) 892668880)) ? (10324265818446631039ULL) : (((/* implicit */unsigned long long int) -892668881)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_21 = min(((+(((/* implicit */int) (short)-3486)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-124))))));
                    var_22 = ((/* implicit */signed char) arr_8 [i_1 - 1]);
                    arr_9 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */int) min((12442117009663371606ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned short) var_14))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) 1)) : (arr_0 [i_2])))))))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [0] [i_0] [0] [0])) ? (arr_4 [i_2] [i_1 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1730780485)) == (arr_7 [i_2] [i_1] [i_1] [i_0])))))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (signed char)78)))) : (((/* implicit */int) (signed char)-79))));
                }
            } 
        } 
    } 
}
