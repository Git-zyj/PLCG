/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236056
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
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)36)))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4611686018427387904LL)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) arr_0 [i_0 - 2]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), ((-(((((/* implicit */_Bool) arr_3 [(unsigned char)12])) ? (-1LL) : (arr_2 [i_1])))))));
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (9LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))) > (((/* implicit */long long int) ((/* implicit */int) var_0)))));
        arr_6 [i_1] [i_1] = arr_2 [i_1];
    }
    var_22 = ((/* implicit */unsigned char) max(((-(max((var_6), (-15LL))))), (((((/* implicit */_Bool) ((long long int) 7037468846257273880LL))) ? (((((/* implicit */_Bool) (unsigned char)227)) ? (34LL) : (-4735605838726957274LL))) : (var_6)))));
    /* LoopSeq 2 */
    for (unsigned char i_2 = 2; i_2 < 17; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = 10LL;
        var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))) : (max(((~(-6866621769991501623LL))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) & (7639024124883781315LL)))))));
        arr_10 [i_2 + 1] = ((/* implicit */unsigned char) -16LL);
    }
    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) min((var_24), (arr_7 [i_3])));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((long long int) -1LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)29))))) : (((/* implicit */int) (unsigned char)76)))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((9LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))) == (arr_1 [i_3 + 1] [i_3]))))));
        arr_14 [i_3 + 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)234))))) ? (var_15) : (max((8845211051722887116LL), (-2025495290700600178LL)))))) ? (((max((11LL), (var_4))) / ((-(-1018829740080015462LL))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)41)))))));
    }
}
