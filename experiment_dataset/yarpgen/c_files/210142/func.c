/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210142
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
    var_13 = ((/* implicit */_Bool) (+(((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) (signed char)10))))));
    var_14 = ((/* implicit */unsigned long long int) 4294967290U);
    var_15 = ((/* implicit */short) (~(((min((var_4), (((/* implicit */unsigned long long int) (signed char)29)))) >> (((((/* implicit */int) (short)32755)) - (32731)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 24; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_5)) > (((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_2)))) ? (arr_2 [i_0 - 3]) : (((/* implicit */unsigned long long int) -2043628759))))));
                    arr_12 [i_2 - 2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) min(((signed char)-120), (((/* implicit */signed char) (_Bool)0))))), (arr_7 [i_2] [i_1] [i_0])))) ? (((/* implicit */long long int) (-(arr_6 [i_0] [i_1 + 1])))) : (var_5)));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */short) ((long long int) var_0));
}
