/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233214
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
    var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (-1690769836)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 += ((/* implicit */signed char) arr_0 [i_1]);
                arr_4 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_10))))));
                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 1; i_4 < 15; i_4 += 4) 
            {
                {
                    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_2 - 2])) + (((/* implicit */int) arr_5 [(unsigned short)10]))));
                    arr_14 [i_2] [i_2] [i_4 - 1] [i_2] = ((/* implicit */signed char) (unsigned char)121);
                    var_21 = ((/* implicit */short) var_13);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (signed char)118);
    var_23 = ((/* implicit */int) max((((/* implicit */long long int) var_11)), (var_12)));
}
