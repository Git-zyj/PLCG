/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35423
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
    var_17 = (+(6ULL));
    var_18 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                var_19 = ((((/* implicit */_Bool) max((arr_5 [i_0] [i_1 - 2]), (((/* implicit */unsigned short) (signed char)-8))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_1 + 2]))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (var_2))));
                arr_6 [i_0] [i_1] [i_0] = (!(((/* implicit */_Bool) 15944317695781719682ULL)));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_1)), (var_11)));
                var_20 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 13LL)) ? (((((/* implicit */int) var_11)) + (((/* implicit */int) var_16)))) : (((((/* implicit */int) var_10)) + (var_3)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 24; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            {
                var_21 = ((/* implicit */short) var_1);
                arr_13 [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) ? (max((((/* implicit */unsigned long long int) (unsigned char)243)), (18446744073709551611ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197)))));
                var_22 -= ((/* implicit */signed char) var_3);
            }
        } 
    } 
}
