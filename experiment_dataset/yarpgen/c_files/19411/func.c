/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19411
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1804645484U)) ? (((/* implicit */unsigned long long int) (((-(arr_1 [i_0] [14U]))) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)147))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15520958096799975737ULL)) ? (14953782179894235305ULL) : (2925785976909575879ULL)))) ? (((/* implicit */unsigned long long int) (-(2490321808U)))) : (((18446744073709551611ULL) & (((/* implicit */unsigned long long int) var_6))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (-((+(((/* implicit */int) (signed char)38))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_0]);
            arr_7 [i_0 - 1] [i_0] = ((/* implicit */short) arr_1 [i_0 - 1] [i_0 - 1]);
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            arr_10 [i_0] [i_0 - 1] [i_2] &= ((/* implicit */signed char) ((unsigned long long int) (-(arr_5 [i_0] [i_2]))));
            var_16 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5140064112936735247LL)) ? (arr_8 [i_0 - 1] [0ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39)))))));
            arr_11 [i_0] = var_12;
        }
        arr_12 [i_0] [i_0 - 1] = (((((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((var_12) ^ (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))) - (min((((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 - 1])), (0ULL))));
    }
    var_17 = ((/* implicit */signed char) min((2925785976909575874ULL), (((/* implicit */unsigned long long int) (signed char)-105))));
    var_18 = var_12;
    var_19 = ((/* implicit */unsigned long long int) var_4);
}
