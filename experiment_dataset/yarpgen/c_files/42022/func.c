/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42022
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
    var_14 *= ((1920492673351735141ULL) - (min((18446744073709551615ULL), ((-(12161581710858480317ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 1) /* same iter space */
                {
                    var_15 = ((max((((((/* implicit */_Bool) 6285162362851071299ULL)) ? (6285162362851071299ULL) : (18446744073709551614ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) 6989718254648577468ULL))))))) ^ (min((arr_1 [i_0]), ((-(arr_4 [i_0] [i_1] [i_2]))))));
                    arr_6 [i_0] [i_1] = ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 - 2] [i_2 - 4])) ? (arr_3 [i_0]) : (15ULL)));
                    arr_7 [i_0] [i_1] [i_2] = min((max((max((0ULL), (14328401013676202408ULL))), ((~(6285162362851071299ULL))))), (var_0));
                }
                for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 1) /* same iter space */
                {
                    var_16 = ((unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_3 - 4]))));
                    arr_11 [19ULL] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 6285162362851071299ULL)) ? (var_5) : (arr_10 [i_3 - 2]))), (arr_4 [i_3 - 3] [17ULL] [i_3 - 4])))) ? (min(((~(821225195515414025ULL))), ((+(var_13))))) : (((((/* implicit */_Bool) (~(959587471395107203ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) 12456182443937439308ULL)))))) : (max((var_5), (3310566123900544727ULL))))));
                    var_17 = (~(min(((~(var_8))), ((~(12456182443937439331ULL))))));
                    arr_12 [i_0] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551593ULL)) ? (min((arr_9 [i_0] [i_1] [i_1] [i_3 - 4]), (arr_9 [i_0] [i_0] [i_0] [i_0]))) : (max((arr_3 [i_0]), (var_1)))))) ? (var_4) : (((((/* implicit */_Bool) min((var_6), (arr_2 [16ULL])))) ? ((~(arr_4 [i_0] [i_1] [i_3 - 3]))) : (((unsigned long long int) var_0)))));
                }
                arr_13 [i_0] = arr_4 [i_0] [i_0] [i_0];
                var_18 = ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (min((var_5), (arr_3 [i_0]))) : (max((arr_3 [i_0]), (arr_3 [i_0]))));
                arr_14 [i_0] [i_1] = 18446744073709551615ULL;
            }
        } 
    } 
}
