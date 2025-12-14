/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53071
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))) && (((/* implicit */_Bool) arr_0 [i_1 - 1]))));
                arr_5 [i_1] = ((/* implicit */short) min((((var_1) * (((/* implicit */unsigned long long int) 4181402184U)))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 113565122U)))))))));
                var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_3 [(unsigned short)2] [(unsigned char)8] [6ULL])), (var_9))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 113565127U)) ? (((/* implicit */int) arr_1 [i_0] [i_1 - 1])) : (0)))))))) > (var_9)));
            }
        } 
    } 
    var_14 = ((/* implicit */int) max((var_14), (min((((/* implicit */int) var_8)), ((-(((((/* implicit */int) (signed char)124)) * (((/* implicit */int) (short)-8588))))))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((19) ^ (-20)))) ? (2263383834024089265LL) : (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) (unsigned char)58)))) <= (((/* implicit */int) var_7))))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) (unsigned short)16669))));
}
