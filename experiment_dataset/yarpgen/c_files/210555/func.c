/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210555
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_1 [i_2 + 1]))))));
                    arr_7 [i_0] [i_1] [7LL] = (+(((long long int) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2])));
                    arr_8 [i_1] [1ULL] [1ULL] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) 5411121379167742573ULL)) && (((/* implicit */_Bool) arr_0 [i_2 - 1])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_4);
    var_21 = ((/* implicit */_Bool) (unsigned char)152);
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 3) 
        {
            {
                var_22 = ((arr_12 [i_3] [i_3] [6LL]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [8LL]))));
                var_23 &= ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) 5411121379167742545ULL)) || (((/* implicit */_Bool) arr_14 [i_3] [i_4 - 2] [i_3]))))), ((~(((/* implicit */int) arr_14 [i_4] [i_3] [i_3]))))));
            }
        } 
    } 
}
