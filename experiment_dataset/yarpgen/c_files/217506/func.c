/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217506
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))));
    var_12 = ((/* implicit */unsigned short) 4042375181U);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) arr_5 [i_0]);
                var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(321607939U)))), (((((/* implicit */_Bool) arr_4 [3LL] [i_0] [(signed char)8])) ? (((18446744073709551613ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12)))))));
                arr_7 [i_0] [10ULL] [i_1] &= ((((/* implicit */_Bool) 6642016328012595978LL)) ? (((3593893995U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))))) : (((/* implicit */unsigned int) -2127688159)));
                var_15 = ((long long int) 7257126899847278384LL);
                arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [11] [i_1]))) : (3ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519))) / (4294967291U))) : (((/* implicit */unsigned int) ((arr_5 [i_0]) / (((/* implicit */int) (signed char)-41)))))));
            }
        } 
    } 
}
