/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224082
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
    for (int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max((var_7), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))))))))));
                    arr_9 [8] [i_1] [i_2] [i_0] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_16)), (((unsigned char) ((((/* implicit */long long int) arr_2 [i_1])) ^ (arr_7 [i_0] [i_0] [i_2]))))));
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)2821);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2790)) ? (((/* implicit */int) (unsigned short)2758)) : (((/* implicit */int) (unsigned short)2821))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((8191U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205))))) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46))))))) : (arr_11 [i_3] [11U])));
        arr_13 [(unsigned char)7] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)62772))));
        arr_14 [i_3] &= ((/* implicit */unsigned long long int) 4294959105U);
    }
}
