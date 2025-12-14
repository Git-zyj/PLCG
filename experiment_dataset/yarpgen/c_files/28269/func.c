/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28269
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
    var_20 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_6))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_0] [i_0] [i_1]), (((/* implicit */unsigned char) var_10))))) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1])) : (((/* implicit */int) arr_2 [i_2]))))), (((((/* implicit */_Bool) -3367877196872656154LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (9223372036854775791LL)))));
                        var_22 ^= ((/* implicit */long long int) (_Bool)1);
                        var_23 -= ((/* implicit */unsigned long long int) var_6);
                        var_24 = ((/* implicit */signed char) arr_4 [i_3] [i_3] [i_3]);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_3 [i_0])) >> (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))))));
        var_26 = ((/* implicit */_Bool) var_2);
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0 + 1] [(unsigned char)6] [i_0]))) & (arr_12 [i_0 + 1] [i_0 - 1] [1] [i_0] [i_0]))) & (((/* implicit */long long int) var_3)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_28 = ((/* implicit */long long int) arr_3 [i_4]);
        var_29 = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_4 [i_4] [i_4] [i_4])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4] [i_4] [i_4]))) != (var_13))))));
    }
    var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) min((((var_11) > (((/* implicit */int) var_0)))), ((_Bool)1))))));
}
