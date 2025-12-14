/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33230
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned char) (+(22U)));
                    var_15 = ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0]))) ? (max((arr_4 [i_1 + 2] [i_1 + 1]), (arr_4 [i_1 - 1] [i_1 + 4]))) : (max((((/* implicit */long long int) arr_5 [i_1 + 3])), (min((((/* implicit */long long int) arr_5 [i_0])), (arr_7 [i_1]))))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)235), (((/* implicit */unsigned char) (signed char)123)))))) & (((((/* implicit */_Bool) 1125899906838528ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1]))) : (arr_0 [i_0] [i_0])))));
                    var_17 -= ((/* implicit */signed char) ((arr_1 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_1 [i_0] [i_1])))) >> (((max((((/* implicit */long long int) (unsigned char)43)), (arr_7 [i_0]))) - (29LL)))))) : (((unsigned long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_7)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        arr_11 [i_3] &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_4 [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (arr_4 [i_3] [i_3]) : (arr_4 [i_3] [i_3]))) : (max((arr_4 [i_3] [i_3]), (arr_4 [i_3] [i_3])))));
        var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)0)) ? (arr_0 [0U] [i_3]) : (39U))), (((/* implicit */unsigned int) ((short) ((short) arr_1 [i_3] [i_3]))))));
    }
}
