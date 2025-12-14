/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232829
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
    var_20 = ((/* implicit */int) ((((var_8) + (9223372036854775807LL))) >> (((var_8) + (4296343106371100897LL)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) ((long long int) (((!(((/* implicit */_Bool) arr_2 [i_1] [i_0])))) || (((/* implicit */_Bool) var_7)))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2801186835636413533ULL) % (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (max((-6935913927665676579LL), (((/* implicit */long long int) arr_4 [i_1]))))));
                var_22 = ((/* implicit */long long int) (unsigned char)106);
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_14);
    var_24 += ((min((((/* implicit */unsigned long long int) ((unsigned int) 6935913927665676578LL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) + (var_2))))) >= (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) < (18446744073709551615ULL)))), (min((1858909788), (-1858909778)))))));
}
