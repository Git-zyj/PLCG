/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222391
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) ^ (((/* implicit */int) (short)24791))))) ? (((/* implicit */long long int) max((((unsigned int) 6479537098527796949LL)), (2253215849U)))) : (9110369364027535700LL)));
    var_13 = ((/* implicit */unsigned char) ((var_10) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) var_8)))))))))));
    var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (var_1)))) || (((/* implicit */_Bool) var_2)))))));
    var_15 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) <= (var_1)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1))))) & (var_1)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_16 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (min((-5099804355324027735LL), (((/* implicit */long long int) (short)24791)))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))));
        var_17 += ((/* implicit */short) ((unsigned int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_9) : (arr_1 [i_0])))));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])))) ? (((long long int) arr_1 [i_0])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_7)))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned int) -6283835181136611632LL))))) <= (var_10)));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(5099804355324027735LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)24770)) || (((/* implicit */_Bool) 0LL)))))))) : (max((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (var_10))), (min((var_10), (var_5)))))));
    }
}
