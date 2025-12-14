/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216133
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
    var_20 = ((/* implicit */long long int) (unsigned short)65535);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) (short)-26989);
                        var_22 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_3 + 1] [i_0])) ? (-1LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65507)) : (((/* implicit */int) (unsigned char)20))))))) < (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (arr_1 [i_1] [i_2 + 1])));
                        var_24 = ((/* implicit */unsigned int) (unsigned short)65532);
                    }
                    arr_10 [i_1] [i_1] [i_1] = arr_5 [i_0] [i_2 + 1] [i_1];
                    var_25 = ((/* implicit */unsigned char) var_17);
                }
            } 
        } 
    } 
}
