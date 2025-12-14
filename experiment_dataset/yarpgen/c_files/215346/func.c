/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215346
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 0ULL))) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((var_4) - (433917615))) : (((((/* implicit */_Bool) (signed char)120)) ? (arr_0 [4]) : (var_7)))))))))));
                    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (1228829298) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)61301)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_0]))))))) : (((((/* implicit */_Bool) -433917616)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (signed char)57)))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_2])) : (arr_0 [i_2 + 2])))) == (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 + 1] [(signed char)4] [i_0])))))) : (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_0])), (var_5)))))));
                }
            } 
        } 
    } 
    var_16 = ((signed char) ((((var_9) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (signed char)-80)))) + ((-(((/* implicit */int) (signed char)46))))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (signed char)25))));
    var_18 = ((/* implicit */signed char) 15244928376274870597ULL);
}
