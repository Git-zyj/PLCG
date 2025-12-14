/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219916
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
    var_11 = ((/* implicit */unsigned char) (signed char)-113);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_10 [15U] = ((/* implicit */short) arr_4 [i_2]);
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15804)) ? (((/* implicit */unsigned int) arr_2 [i_2])) : (4093327421U)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_2])), (4093327440U))))))));
                }
            } 
        } 
    } 
    var_13 = ((min((((((/* implicit */long long int) 3017233080U)) == (var_8))), (((((/* implicit */_Bool) 3017233097U)) && (((/* implicit */_Bool) var_7)))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 5335181456687616357LL)) ? (3017233092U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))) == (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_0)) : (var_1)))))))));
}
