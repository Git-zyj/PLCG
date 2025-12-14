/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218096
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (long long int i_3 = 2; i_3 < 12; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        {
                            var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_3 + 4] [i_3] [(short)15] [i_3 + 4] [i_3 - 1])) ? (((/* implicit */int) arr_7 [i_3 + 4] [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) var_3))));
                            arr_10 [i_0] [i_1] = ((/* implicit */short) (~(2328568336U)));
                        }
                    } 
                } 
            } 
            arr_11 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (_Bool)0))));
            var_12 = ((/* implicit */unsigned short) (~(3650690165U)));
            arr_12 [i_0] [i_1] = var_0;
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
        }
        var_13 += ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 644277122U)) && (((/* implicit */_Bool) arr_2 [i_0]))))))));
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) ((((long long int) (unsigned short)65535)) / (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-36)) ? (2265139144U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
    }
    var_14 = ((/* implicit */int) min((((((/* implicit */_Bool) var_0)) ? (644277123U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7)))))));
    var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_2)), (var_8)))) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-14188)))))));
}
