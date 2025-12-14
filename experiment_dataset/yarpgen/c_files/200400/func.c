/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200400
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
    var_19 = ((/* implicit */long long int) ((unsigned long long int) var_2));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned int) var_13)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) (unsigned char)88);
                    var_22 += ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)112)), (((((/* implicit */_Bool) var_8)) ? (var_10) : (var_3)))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) -5928317930608298882LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_7 [i_0] [i_1] [i_2] [i_0])))))) : (max((3220324438432792695LL), (((/* implicit */long long int) (signed char)16)))));
                }
            } 
        } 
    } 
}
