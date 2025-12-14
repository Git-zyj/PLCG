/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213535
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
    for (int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0 - 3]);
        arr_3 [i_0] &= ((/* implicit */_Bool) var_4);
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 2]))) | (((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))) ? (((var_4) & (arr_0 [i_0]))) : (((arr_0 [i_0]) ^ (2633087545563063766ULL)))))));
        var_11 &= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) (signed char)-116)))) : (((/* implicit */int) ((1216080707216400844ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) + (2147483647))) >> ((((-(((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2])))) - (58)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_12 -= ((/* implicit */int) (-(((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_4)))));
        var_13 = ((((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) arr_6 [i_1] [i_1])))) | (arr_4 [i_1] [i_1]));
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(arr_6 [i_1] [i_1])))) ^ (18446744073709551615ULL)));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (unsigned short)17355))));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 7; i_2 += 1) 
    {
        for (unsigned int i_3 = 2; i_3 < 8; i_3 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned long long int) 489705813U)))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2 + 3] [i_3] [i_3 + 1])) ? (arr_11 [i_2 + 1] [i_3] [i_3 + 2]) : (arr_11 [i_2 + 2] [i_3] [i_3 - 1])))) == (((min((var_4), (((/* implicit */unsigned long long int) arr_9 [i_4] [1ULL] [i_2 - 1])))) & (((((/* implicit */_Bool) arr_1 [2] [3ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_2]))) : (arr_0 [i_3])))))));
                    arr_14 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) max((((((/* implicit */_Bool) arr_12 [i_2] [(unsigned short)1] [(signed char)3] [i_4])) ? (16ULL) : (((/* implicit */unsigned long long int) arr_4 [i_4] [i_2])))), (((/* implicit */unsigned long long int) ((9223372036854775788LL) % (-6848298574502894850LL)))))));
                }
                for (long long int i_5 = 4; i_5 < 6; i_5 += 1) 
                {
                    arr_18 [i_2] [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) 414979112206591708ULL);
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) 18446744073709551615ULL))));
                }
                arr_19 [i_2 + 2] [i_3] [i_2] = ((/* implicit */unsigned int) (-2147483647 - 1));
                var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54679))) | (var_6)))) && (((/* implicit */_Bool) 18446744073709551615ULL))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_7);
}
