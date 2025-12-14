/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24775
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
    var_12 *= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24055)) || (((/* implicit */_Bool) (unsigned short)24055))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [6U] [i_2] |= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (signed char)-69)) != (((/* implicit */int) (unsigned short)40029))))), (((arr_5 [14U]) | (((/* implicit */int) arr_1 [0ULL]))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((arr_6 [i_2] [i_2] [i_2 + 1]) + (2147483647))) << (((((/* implicit */int) var_11)) - (1))))) / (arr_6 [(unsigned char)9] [i_2] [i_2 - 1])));
                    var_13 -= ((/* implicit */unsigned long long int) ((long long int) (unsigned short)60434));
                    arr_9 [(_Bool)1] [(unsigned char)2] &= ((/* implicit */unsigned short) (-(max((((/* implicit */int) (unsigned short)443)), (arr_3 [i_2 - 1])))));
                }
            } 
        } 
    } 
}
