/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21252
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
    var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_5)), ((~(8849164481180934066ULL)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) ((unsigned char) max((arr_1 [i_0 + 4] [i_0]), (((/* implicit */long long int) -1760916498)))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 8849164481180934066ULL)) && (((/* implicit */_Bool) (signed char)-120)))));
    }
    /* vectorizable */
    for (short i_1 = 4; i_1 < 12; i_1 += 3) 
    {
        arr_6 [(unsigned char)11] = ((/* implicit */short) ((unsigned int) ((unsigned char) -1760916513)));
        var_22 = ((/* implicit */unsigned char) ((short) (unsigned char)241));
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_9 [(unsigned char)13] [i_2] = ((/* implicit */signed char) arr_0 [i_2]);
        arr_10 [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(arr_1 [(unsigned char)14] [i_2])))) ? ((+(((/* implicit */int) arr_8 [i_2] [i_2])))) : (((/* implicit */int) ((((/* implicit */unsigned int) var_17)) == (var_5))))))));
        var_23 ^= ((/* implicit */unsigned long long int) var_13);
    }
    for (long long int i_3 = 1; i_3 < 19; i_3 += 2) 
    {
        arr_14 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((arr_11 [i_3] [i_3]), (arr_11 [i_3] [i_3])))))) ? (arr_11 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) (unsigned char)0))))))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_11 [(unsigned char)8] [i_3 + 1]) > (((/* implicit */unsigned long long int) var_9)))))))) + (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1760916504)) ? (1760916497) : (((/* implicit */int) (signed char)-120))))), (max((((/* implicit */unsigned long long int) arr_13 [i_3 - 1] [i_3])), (arr_11 [2U] [2U]))))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_4 = 2; i_4 < 7; i_4 += 4) 
    {
        var_25 -= ((((arr_4 [i_4 - 1]) + (9223372036854775807LL))) >> (((-1903428321) + (1903428366))));
        var_26 &= ((/* implicit */short) ((long long int) ((arr_15 [i_4 - 2]) < (var_0))));
    }
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        arr_19 [i_5] &= ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)128)), ((-(((/* implicit */int) ((unsigned char) arr_3 [i_5])))))));
        arr_20 [i_5] = ((/* implicit */long long int) min((9597579592528617561ULL), (((/* implicit */unsigned long long int) arr_8 [i_5] [i_5]))));
    }
    var_27 = ((/* implicit */int) min((((max((var_8), (((/* implicit */unsigned long long int) var_18)))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))))), (max((max((((/* implicit */unsigned long long int) -1903428310)), (8849164481180934066ULL))), (var_14)))));
}
