/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36901
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)127))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5449474993123901717LL))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_0])), ((+(((/* implicit */int) ((signed char) var_5))))))))));
        var_20 = ((/* implicit */long long int) var_6);
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 9; i_5 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (max((min((var_0), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (-(13LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_5 - 2] [i_5 - 1])) ? (((/* implicit */unsigned int) var_12)) : (var_2))))));
                                arr_15 [i_1] [i_2] [i_3 + 1] [i_4] [i_2] = ((/* implicit */unsigned char) arr_5 [i_1] [i_1]);
                                arr_16 [2ULL] [0ULL] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_5 - 1])) ? (((/* implicit */int) var_16)) : (var_12))))))), (((arr_10 [i_3 + 1] [i_3 + 1] [i_2]) ^ (arr_10 [i_3 + 1] [i_3 + 1] [i_2])))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((arr_14 [i_2] [i_3 + 1] [i_2] [i_3] [i_3 + 1] [i_3 + 1]) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_7))))))) <= (max((((/* implicit */long long int) (unsigned short)65535)), (28LL)))));
                    arr_17 [i_2] = var_10;
                    arr_18 [i_2] = ((/* implicit */long long int) var_14);
                }
            } 
        } 
        var_23 = ((((/* implicit */unsigned long long int) ((964286681158511789LL) / (((/* implicit */long long int) arr_10 [i_1] [i_1] [i_1]))))) | (9223372036854775808ULL));
    }
    var_24 = ((/* implicit */long long int) var_10);
    var_25 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) var_3)), (var_2)))))));
    var_26 = ((/* implicit */unsigned short) min((min((var_8), (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) | (((/* implicit */int) ((((/* implicit */int) (signed char)-4)) == (((/* implicit */int) (unsigned short)1))))))))));
}
