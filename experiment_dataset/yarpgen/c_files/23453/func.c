/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23453
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
    var_10 |= ((/* implicit */signed char) 3632623622200358415ULL);
    var_11 = ((/* implicit */unsigned int) min(((((_Bool)1) ? (3632623622200358415ULL) : (14814120451509193200ULL))), (14814120451509193233ULL)));
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (var_9)))) ? (0ULL) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 14814120451509193207ULL)) ? (4294967294U) : (1085879942U))) << (((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_1)) + (32755))))) - (65528)))))) : (6049051510038076994ULL)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_4 [i_0] [i_1] [i_0]) < (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (short)0)) : (9)))))))));
                var_13 = ((arr_2 [i_1 - 2] [(unsigned char)9]) || (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (var_5)))), (((((/* implicit */_Bool) 6418554262253403377LL)) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))));
            }
        } 
    } 
    var_15 -= (~((((_Bool)1) ? (536868864U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
}
