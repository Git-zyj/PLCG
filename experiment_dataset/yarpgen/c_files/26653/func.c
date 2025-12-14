/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26653
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
    var_15 &= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 2522632796661412885ULL)) ? (var_0) : (-1779916418266917725LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [(signed char)16] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned char)88)) + (((/* implicit */int) var_6))))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 17794966582280878489ULL)))))))), (min((var_9), (((/* implicit */long long int) (unsigned short)50627)))))))));
                    var_17 = min((((/* implicit */unsigned long long int) (signed char)7)), (arr_7 [i_0] [i_1] [i_2]));
                    var_18 = ((min((var_5), (((arr_5 [i_0] [i_1] [i_2]) >> (((arr_3 [i_0] [(unsigned short)12] [i_2]) - (2554347626849994053ULL))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))));
                }
            } 
        } 
    } 
}
