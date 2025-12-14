/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53895
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
    var_10 |= ((/* implicit */unsigned int) ((_Bool) ((signed char) (~(var_3)))));
    var_11 = ((/* implicit */unsigned int) ((unsigned short) ((((63ULL) % (18446744073709551592ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (4294967268U)))))));
    var_12 = ((/* implicit */signed char) var_8);
    var_13 -= ((/* implicit */_Bool) (unsigned short)62511);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))));
                var_15 += ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_1 [(short)16])), (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0])))) : (((unsigned long long int) arr_3 [i_0] [i_0 - 3] [16ULL]))))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [9U])))))) ? (6389463714214492444ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [(signed char)2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [7] [7] [i_0])))) != (arr_0 [i_1]))))) : ((-(((3357724406993638753ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
            }
        } 
    } 
}
