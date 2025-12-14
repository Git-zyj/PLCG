/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215734
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) var_16);
                var_19 = ((/* implicit */unsigned int) ((min((arr_2 [i_0]), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) == (var_8)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_17);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2] [i_2])) ^ (((/* implicit */int) arr_6 [i_2] [i_2]))));
        arr_10 [i_2] = ((/* implicit */short) (~(((/* implicit */int) ((var_16) || (((/* implicit */_Bool) var_11)))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (3051261073U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) (signed char)-68)))))));
    }
    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)67))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned short) arr_5 [i_3] [i_3]);
                var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)1687))));
            }
        } 
    } 
}
