/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216660
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
    var_19 = ((/* implicit */int) ((long long int) var_7));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((((((/* implicit */int) (signed char)101)) < (-1757675898))) ? (min((((/* implicit */long long int) ((unsigned short) 1757675897))), ((+(arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) min((899647983U), (var_14)))) >= (((long long int) arr_4 [i_0] [i_1 - 2] [i_1]))))))))));
                arr_5 [i_1] [i_1 + 2] [i_1 - 2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)8690)) : (1757675897))), (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                var_21 = ((((((/* implicit */_Bool) max((arr_3 [(unsigned short)5] [i_1] [i_1]), (((/* implicit */int) var_18))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4520165381845009512LL)))))) : (((var_10) * (4294967295U))))) * ((-(arr_4 [i_0] [i_1] [9]))));
                arr_6 [i_0] [i_1 + 3] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))) & (min((((/* implicit */long long int) var_18)), (max((-1110132281252842339LL), (((/* implicit */long long int) 912776095))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))));
}
