/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192120
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_5))));
    var_12 = ((/* implicit */unsigned int) ((var_1) ? (((((/* implicit */int) var_5)) % (((/* implicit */int) (unsigned char)127)))) : ((~(((/* implicit */int) var_8))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((((/* implicit */int) (unsigned char)143)) != (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0 - 1] [i_1 + 2] [i_1 - 3] [(unsigned short)3] = ((((/* implicit */_Bool) (unsigned short)33872)) ? (((/* implicit */int) arr_6 [(signed char)12] [i_0 - 1] [i_0 - 2])) : ((~(((/* implicit */int) (unsigned char)131)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_16 [(unsigned short)11] [i_1 + 1] [(unsigned char)0] [(unsigned short)11] [(_Bool)1] [i_1 + 3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (((arr_9 [i_4 - 2] [i_3 - 2] [i_2] [i_0]) ? (18446744073709551615ULL) : (4340982854428877817ULL)))));
                                var_14 *= arr_2 [i_0 - 1];
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) (_Bool)1);
                    var_16 = ((var_5) ? (((/* implicit */int) arr_7 [i_2] [i_1 + 4] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 2] [i_2 + 2])));
                }
            } 
        } 
        var_17 = (-(((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0] [i_0 - 2])));
        arr_17 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [(_Bool)0])) : (((/* implicit */int) ((unsigned char) (unsigned char)64)))));
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_3), (var_3)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))));
}
