/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43262
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
    var_12 = ((/* implicit */unsigned short) (signed char)(-127 - 1));
    var_13 = ((/* implicit */long long int) ((signed char) (signed char)-16));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_0 [4LL]))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((-465382145) / (((/* implicit */int) arr_0 [(signed char)10])))))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -465382138)) ? (((/* implicit */int) (signed char)-1)) : (var_7))))));
        var_17 -= ((/* implicit */int) ((var_9) ? (((((/* implicit */_Bool) arr_3 [(_Bool)1] [(_Bool)1])) ? (arr_2 [6] [6]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47159)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    {
                        arr_16 [(_Bool)1] [i_2] [i_1] [i_4] [i_4] = ((/* implicit */_Bool) var_0);
                        arr_17 [i_1] = ((/* implicit */_Bool) arr_15 [i_1] [i_2]);
                        arr_18 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)51)))) + (2147483647))) << (((((((/* implicit */_Bool) arr_15 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (max((((/* implicit */int) arr_1 [i_1])), (var_7))))) - (1)))));
                        arr_19 [(signed char)15] [i_2 - 1] [i_3] [i_4] [i_1] = ((_Bool) ((((/* implicit */int) (signed char)24)) * (((/* implicit */int) (unsigned short)53024))));
                    }
                } 
            } 
        } 
        var_18 += ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-2))));
        arr_20 [i_1] = (-(((((/* implicit */int) (signed char)-73)) / (((/* implicit */int) (signed char)115)))));
    }
}
