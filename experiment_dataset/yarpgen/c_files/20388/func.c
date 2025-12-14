/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20388
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
    var_13 |= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((int) 0ULL))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) var_0)))))), (((/* implicit */int) var_10))));
    var_14 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [(signed char)0] = ((/* implicit */unsigned int) (((-(arr_5 [i_0] [2U]))) < (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) var_10)), (arr_1 [i_0] [5U]))))))));
                arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17444777315246292222ULL)) && (((/* implicit */_Bool) max((2557123088788134587ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))))));
            }
        } 
    } 
    var_15 = max((((/* implicit */long long int) max((((var_6) ? (var_7) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_8))))))), (((((/* implicit */long long int) ((/* implicit */int) ((16ULL) != (2557123088788134572ULL))))) ^ (max((7100754140163432604LL), (((/* implicit */long long int) var_12)))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (((963082119U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))));
}
