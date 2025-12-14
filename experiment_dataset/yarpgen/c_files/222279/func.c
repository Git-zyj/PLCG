/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222279
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)19)) ^ (((/* implicit */int) (unsigned char)19))))) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_7))))) > (4183184981520512653LL)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) 3222598040381416326ULL);
        var_22 = ((/* implicit */int) (~(arr_0 [i_0])));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */int) ((((/* implicit */int) var_19)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
        var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (2147483632) : (arr_4 [i_1] [i_1])))) || (((/* implicit */_Bool) arr_4 [i_1] [i_1]))));
        var_25 = ((/* implicit */signed char) var_4);
        var_26 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
        var_27 = ((/* implicit */long long int) min((var_27), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : ((~(arr_2 [1ULL])))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] = ((/* implicit */short) arr_2 [i_2]);
        var_28 = ((/* implicit */int) ((((arr_0 [i_2]) > (arr_0 [i_2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4183184981520512671LL)) && (((/* implicit */_Bool) arr_3 [i_2] [i_2])))))) : (var_5)));
        var_29 = ((/* implicit */signed char) (unsigned char)76);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_3] [i_3]))));
        arr_11 [i_3] [i_3] = ((/* implicit */short) arr_2 [(signed char)20]);
        arr_12 [i_3] = ((/* implicit */int) arr_9 [i_3] [5]);
        var_31 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)-15377)))) ? (((/* implicit */int) min((arr_10 [i_3]), (arr_10 [i_3])))) : (((/* implicit */int) (signed char)-123))));
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((arr_6 [i_3] [i_3]), (arr_7 [i_3])))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_0 [(_Bool)1])) == (arr_2 [i_3])))) : (((/* implicit */int) arr_9 [i_3] [6ULL])))) >> ((((~(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(short)3])) || (var_2)))))) + (26))))))));
    }
}
