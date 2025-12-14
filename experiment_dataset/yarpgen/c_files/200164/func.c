/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200164
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((arr_2 [i_1]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 3] [i_0])) : (((/* implicit */int) arr_0 [i_1 + 1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) / (11018976199547197222ULL))) : (((/* implicit */unsigned long long int) min((arr_3 [i_1 - 3]), (((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 0U)) ? (-8972293951293085267LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))))));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (min((min((arr_3 [i_0]), (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) (short)-7463)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1])))))))))))));
                arr_5 [i_0] = ((/* implicit */_Bool) (+(-6306955757602412263LL)));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0])), (arr_0 [i_1])))) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [(unsigned short)15]))))))) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned char)228)) : (2097150))) : (((arr_4 [i_0 + 3] [i_0] [i_0]) ? (min((((/* implicit */int) arr_0 [i_0])), (-2017570238))) : (((/* implicit */int) (unsigned char)171))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_8)))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)165)))))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)165)) ? (var_11) : (12036558351091781066ULL))))))))));
}
