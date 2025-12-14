/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234707
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
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [0U] [12] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)70)))) ? (((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) (unsigned char)70))));
                    arr_9 [i_0] [i_2] |= ((/* implicit */_Bool) ((unsigned int) (unsigned short)1558));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((arr_3 [i_0] [i_0]), ((-(9223372036854775807LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        for (long long int i_4 = 1; i_4 < 15; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_18 [i_3] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_3] [i_3] [i_4] [i_4])) % (((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_4] [i_4]))))));
                    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((unsigned char) arr_15 [16U] [16U])))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (-9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9)))));
    var_12 = var_0;
}
