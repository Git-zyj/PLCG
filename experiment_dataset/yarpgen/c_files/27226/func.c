/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27226
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
    var_14 = ((/* implicit */long long int) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_0))))), (var_6)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_15 = ((/* implicit */short) ((long long int) min((((/* implicit */unsigned int) (unsigned char)63)), (3727139560U))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_16 += ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [(unsigned short)3])) && (((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (3745514543260856497LL) : (((/* implicit */long long int) arr_4 [i_1])))))))), (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_4 [i_1])) : (3745514543260856497LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32755)) ? (arr_4 [i_1]) : (arr_4 [i_1]))))))));
        var_17 = ((/* implicit */unsigned short) arr_3 [i_1]);
    }
    /* LoopSeq 2 */
    for (short i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        arr_7 [i_2] = ((/* implicit */long long int) arr_6 [i_2] [i_2 - 1]);
        arr_8 [(short)12] = ((/* implicit */unsigned char) ((min((max((var_11), (var_4))), (((/* implicit */long long int) arr_5 [i_2 - 2] [i_2])))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3727139560U))))))));
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        arr_12 [i_3] [i_3] = arr_9 [i_3] [i_3];
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((unsigned short) (+(3745514543260856497LL)))))));
    }
    var_19 = ((/* implicit */signed char) ((unsigned short) var_6));
}
