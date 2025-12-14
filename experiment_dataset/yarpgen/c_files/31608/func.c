/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31608
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(var_19)))))) ? (((/* implicit */unsigned long long int) var_13)) : (max((10088959546952646620ULL), (((/* implicit */unsigned long long int) -5614616853962294146LL))))));
    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */int) arr_4 [10]);
                    arr_7 [i_2] [i_1 - 1] = (-(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_2] [i_0] [i_1 - 1] [i_0])), (arr_4 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 - 1] [i_1] [i_0]))) - (arr_4 [i_0])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (10088959546952646620ULL))))));
                }
            } 
        } 
    } 
}
