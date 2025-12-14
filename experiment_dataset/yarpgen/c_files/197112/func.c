/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197112
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */int) max((((((/* implicit */_Bool) (~(arr_2 [i_0 - 1] [i_1])))) ? (((11816462551522997739ULL) * (((/* implicit */unsigned long long int) arr_5 [22LL])))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (var_13)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_5 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 11816462551522997741ULL)) || (((/* implicit */_Bool) var_4))))) : (((((/* implicit */int) var_1)) << (((arr_6 [i_2] [i_1] [i_0]) - (3482011558411812671LL))))))))));
                    var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) -370277328)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -617594113)) ? (arr_4 [i_1]) : (((/* implicit */long long int) var_10))))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) == (((/* implicit */long long int) arr_7 [i_0 + 1] [i_1 + 2]))))))));
                }
            } 
        } 
    } 
    var_16 = 2147483647;
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
    var_18 = ((/* implicit */unsigned char) var_0);
}
