/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40419
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((+((-(var_8)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_7 [i_0] [i_1 + 1] [i_2]), (arr_7 [i_2] [i_1 - 1] [i_0])))), (((arr_7 [i_0] [i_1] [i_2]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))));
                        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_0 - 1])))))));
                        var_15 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_7 [13] [i_0 - 1] [i_0 - 1]))) * (((((/* implicit */long long int) 67100672)) + (arr_9 [i_0] [i_0]))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23313)))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)16)) | (((/* implicit */int) (signed char)51))))) ? (((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1 + 1] [i_4])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 1] [i_1 + 3] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_1] [i_1] [i_1 - 1]), (arr_11 [i_4] [i_4] [i_1 - 1])))))));
                        arr_13 [i_1] [i_2] [i_1] [i_1] = var_10;
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_16 [i_1] [i_1 - 1] [(signed char)7] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)29720)) && (((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [(signed char)9] [(short)7]))) % (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1 - 1]))))))));
                        arr_17 [i_0] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (-(((arr_2 [i_1 + 2]) ? (((/* implicit */int) arr_2 [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1 + 3]))))));
                    }
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)185)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1159871399U))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((_Bool) (((((~(((/* implicit */int) var_9)))) + (2147483647))) << (((/* implicit */int) var_6)))));
    var_18 = ((/* implicit */unsigned char) (~(((((((/* implicit */int) (unsigned char)255)) >> (((/* implicit */int) (unsigned char)2)))) % (((/* implicit */int) (unsigned char)179))))));
    var_19 = ((/* implicit */unsigned short) max((2130706432U), (((/* implicit */unsigned int) (unsigned short)7936))));
}
