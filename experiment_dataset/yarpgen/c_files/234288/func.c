/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234288
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)53532)), (((((/* implicit */_Bool) (short)6377)) ? (6113790828026511507LL) : (((/* implicit */long long int) ((/* implicit */int) (short)1022)))))))) || (((/* implicit */_Bool) var_8))));
        var_18 = ((/* implicit */unsigned char) var_6);
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) var_1))), (arr_2 [i_1] [i_1])))) && (((/* implicit */_Bool) (((~(var_3))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 5721575893973514848LL)))))))));
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)26202)) ? (((/* implicit */long long int) var_0)) : (var_12))), (((/* implicit */long long int) ((short) arr_6 [(signed char)8])))))) ? ((-(arr_2 [i_1] [i_1]))) : (((/* implicit */long long int) min((((/* implicit */int) var_11)), (var_7))))));
    }
    for (short i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (+(arr_10 [(unsigned short)1]))))))));
        arr_12 [i_2] = (((!((!(var_5))))) && (((/* implicit */_Bool) arr_8 [i_2] [i_2])));
        var_20 ^= ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [i_2])), (var_4)))) ? ((+(var_13))) : (((/* implicit */unsigned long long int) var_9)));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_10 [i_2]) - (arr_10 [i_2])))) ? (min((((/* implicit */unsigned long long int) arr_10 [i_2])), (var_14))) : (((/* implicit */unsigned long long int) (-(arr_10 [i_2]))))));
        var_22 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_2])))));
    }
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 326976080)), (((((/* implicit */unsigned long long int) var_1)) + (var_13)))));
}
