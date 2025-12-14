/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240606
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
    var_15 = ((/* implicit */signed char) (+(var_0)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) (+(((((-2099692032690453881LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)99)) - (75)))))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-19))) > (35184363700224LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -35184363700224LL)))))) : (35184363700224LL)))) ? ((+(((/* implicit */int) (unsigned short)13391)))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)(-32767 - 1))), (arr_7 [i_0] [i_1] [i_2])))) ? (((/* implicit */int) (unsigned short)41194)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2]))))))))))));
                    var_17 |= ((/* implicit */long long int) 1630750155U);
                }
            } 
        } 
    } 
}
