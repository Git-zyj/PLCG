/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249089
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
    var_11 &= var_0;
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_12 = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) (unsigned short)51221)) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) ((5779353592989158981LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))))))));
        var_14 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)43564)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_4 [i_1] [i_1])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1291860301)) ? (((/* implicit */int) (signed char)120)) : (arr_3 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_8))))) : (arr_0 [i_1])))));
    }
    for (short i_2 = 1; i_2 < 22; i_2 += 3) 
    {
        var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (arr_6 [i_2] [i_2]) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_2] [i_2 + 1])) : (arr_6 [(unsigned char)13] [(_Bool)1])))) ? (((/* implicit */int) arr_8 [i_2] [(unsigned short)13])) : (((/* implicit */int) (_Bool)1))))));
        var_16 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) arr_7 [i_2])))) || ((!(((/* implicit */_Bool) var_7)))))) && (((/* implicit */_Bool) arr_7 [(signed char)0]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_17 = ((/* implicit */int) ((signed char) var_7));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_1))) ? (max((((/* implicit */unsigned long long int) arr_11 [(unsigned short)8] [(unsigned short)8])), (max((((/* implicit */unsigned long long int) var_2)), (var_6))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)120)), (max((((/* implicit */int) (unsigned char)117)), (var_5))))))));
        var_19 &= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) var_8))));
    }
    var_20 += var_3;
}
