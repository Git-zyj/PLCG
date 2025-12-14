/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243556
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (+((-(((long long int) arr_2 [i_0] [i_0]))))));
        arr_4 [7LL] = ((/* implicit */unsigned int) var_7);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */int) (signed char)0);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_1]))) : (max((var_10), (((/* implicit */long long int) 93451665U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((var_8), (((/* implicit */unsigned short) (signed char)-1))))))) : ((+(((unsigned int) (signed char)-5)))))))));
            var_16 = ((/* implicit */int) (+(((arr_8 [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2])))))));
            arr_12 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (signed char)-1)), (0U)));
            var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((var_2) & (4201515643U)))) : (((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) arr_8 [i_1]))))))));
        }
        var_18 -= ((/* implicit */signed char) (+((+(arr_10 [i_1] [i_1])))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((arr_9 [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_1] [i_1]))))) == (((((/* implicit */_Bool) arr_10 [13ULL] [i_1])) ? (425418187336678560LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-95)))))))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) var_9);
}
