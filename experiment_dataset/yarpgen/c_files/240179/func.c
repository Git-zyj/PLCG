/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240179
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (2139095040) : (((/* implicit */int) (unsigned char)10))))))) ? ((+(((/* implicit */int) var_7)))) : (2147483647)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        arr_3 [(unsigned char)2] = ((/* implicit */long long int) (+(arr_1 [i_0] [i_0])));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -316022887)) ? (var_16) : (arr_1 [i_0] [5])));
        arr_5 [i_0] = (unsigned char)239;
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_18 = ((min((var_16), (((/* implicit */int) arr_0 [i_1])))) ^ ((~((~(((/* implicit */int) (unsigned char)221)))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_1])) ? (var_3) : (arr_7 [i_1]))), (((/* implicit */int) ((unsigned char) arr_7 [i_1])))));
        var_19 = ((/* implicit */int) min((((/* implicit */unsigned char) (((+(1150928576))) == (((/* implicit */int) var_7))))), (arr_0 [i_1])));
        var_20 ^= ((/* implicit */int) min((((/* implicit */long long int) var_6)), (((min((-6251481070200707422LL), (((/* implicit */long long int) 809254612)))) / (((/* implicit */long long int) ((arr_1 [i_1] [i_1]) / (arr_1 [i_1] [10]))))))));
        var_21 = (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)220)) + (((/* implicit */int) (unsigned char)73))))) ? (var_16) : (var_1))));
    }
}
