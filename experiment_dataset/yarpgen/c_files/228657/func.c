/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228657
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) (short)-21917)))) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)10))))))) ? ((~((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))))) : ((~((+(((/* implicit */int) var_12)))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((min((arr_0 [i_2 - 1]), (arr_0 [i_2 + 3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_2 - 1])) < (((/* implicit */int) arr_4 [12] [i_1 - 2] [i_2 - 3])))))) : (((unsigned int) (short)21917))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((int) var_2)) * (((/* implicit */int) ((((/* implicit */int) (short)-32757)) > (((/* implicit */int) (unsigned char)246))))))))));
                        var_17 = ((/* implicit */unsigned int) var_7);
                        arr_8 [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? (var_0) : (((/* implicit */int) var_10))))));
                        var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_3 - 1]))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_4 - 1] [i_2 - 2])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_7 [i_4] [i_2 - 3] [i_2 + 2] [i_1 - 2] [i_0] [i_0]))));
                        arr_12 [i_0] [i_2] = ((/* implicit */unsigned char) (-((-(2147483647)))));
                        arr_13 [i_2] [8U] = ((/* implicit */unsigned int) var_2);
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) 8388600);
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) 268435424U))));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 13; i_6 += 2) 
                    {
                        arr_19 [i_0] [i_0] [1U] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / ((-2147483647 - 1))));
                        var_23 = ((/* implicit */unsigned short) (~((~(arr_2 [i_0] [5ULL])))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8388598)) ? (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_18 [i_0] [i_1] [6] [(unsigned char)1] [(unsigned short)9] [(unsigned char)2]))));
                        arr_20 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) var_7);
                    }
                    var_25 = ((/* implicit */unsigned char) ((min((((/* implicit */int) (unsigned short)8361)), (-1))) | (arr_1 [i_1] [i_0])));
                    arr_21 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_2))))));
                }
            } 
        } 
    } 
    var_26 |= ((/* implicit */int) (((((~(var_3))) & (((((/* implicit */_Bool) (unsigned short)57174)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)5)))))) == (((/* implicit */int) (signed char)3))));
    var_27 = ((/* implicit */long long int) var_7);
    var_28 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) (short)-21918)))) * (((/* implicit */int) (_Bool)1))));
}
