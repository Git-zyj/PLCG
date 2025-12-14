/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23025
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
    var_20 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_19)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))) : (((var_18) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_21 *= ((/* implicit */short) arr_3 [i_0] [i_1]);
            var_22 *= ((/* implicit */unsigned char) var_0);
        }
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 17; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_7 [i_0] [i_3])))), (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_2 + 1]))) : (var_18)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_12 [i_3] [i_2] [i_0] [i_3] [i_2]) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) : (arr_5 [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_0] [i_0])), (var_8)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_3] [i_4] [i_4])) <= (var_10)))) : (((/* implicit */int) var_1)))))));
                        var_24 ^= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-18582)) ? ((+(((/* implicit */int) (short)18581)))) : (((/* implicit */int) (_Bool)1))))) : (180068484U)));
                    }
                } 
            } 
        } 
    }
}
