/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/373
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((int) var_11))))) > (((((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned long long int) var_10))))) ? (var_0) : (var_8)))));
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)170))))) : (7424933217801162204LL)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((unsigned short) ((((arr_1 [i_0]) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) arr_2 [i_0])))) == (((/* implicit */int) arr_2 [10U])))));
        var_15 = (unsigned char)12;
        var_16 = ((/* implicit */signed char) var_3);
        var_17 = ((/* implicit */short) 2147483647);
        var_18 = ((/* implicit */unsigned long long int) (unsigned short)9849);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_19 = ((/* implicit */long long int) arr_4 [i_1] [i_1]);
        var_20 = ((/* implicit */unsigned char) arr_3 [i_1]);
        var_21 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (7401663097268033591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150))))));
        var_22 = ((/* implicit */int) arr_3 [i_1]);
    }
    var_23 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((int) var_4))))) ? (7401663097268033591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7))))));
    var_24 = ((/* implicit */signed char) var_0);
}
