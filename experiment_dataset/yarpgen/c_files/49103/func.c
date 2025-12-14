/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49103
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)249)))))))) - (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))))), (max((18446744073709551586ULL), (18446744073709551615ULL)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) min((arr_0 [i_2]), (((/* implicit */signed char) (_Bool)1))))) != ((-(((/* implicit */int) var_13))))))), (((signed char) (short)32767))));
                    var_19 = ((/* implicit */int) (-(((long long int) var_0))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((8301315587324329003ULL) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_10), ((unsigned char)255)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_8);
}
