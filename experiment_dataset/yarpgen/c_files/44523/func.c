/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44523
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
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned short) min(((_Bool)0), (((18446744073709551615ULL) < (((/* implicit */unsigned long long int) 2306962594U))))))), ((unsigned short)1023)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 3])) < (((/* implicit */int) arr_3 [i_1 + 4] [i_1 + 4]))))) | (((/* implicit */int) ((((/* implicit */int) ((short) arr_1 [i_0]))) >= ((+(((/* implicit */int) arr_3 [i_2] [i_0])))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        arr_10 [i_0] = ((signed char) 569574292U);
                        arr_11 [i_3 + 1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 3])) ? (var_4) : ((~(((/* implicit */int) (short)-18063))))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) arr_8 [i_0])) : (var_3)))));
                    }
                    for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        arr_15 [i_4] [i_1] [i_2] [i_4] = ((((min((((/* implicit */int) arr_6 [(_Bool)0] [i_1 + 1] [i_4])), ((~(((/* implicit */int) (unsigned char)176)))))) + (2147483647))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (unsigned short)64518))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((var_1) >> (((((/* implicit */int) arr_3 [i_1] [i_1])) + (154))))))) - (1LL))));
                        arr_16 [i_0] [i_0] [i_1] [i_0] [(signed char)3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_13 [i_1 + 3] [i_1 + 2] [i_4]), (((/* implicit */unsigned short) arr_5 [i_0] [i_1 + 4] [i_4] [(signed char)8]))))) ? (min((((/* implicit */unsigned int) arr_5 [i_0] [i_1 + 2] [i_1 + 3] [i_2])), (3725393002U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((395689270U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118)))))))));
                        arr_17 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (3899278025U)));
                        arr_18 [i_0] [i_0] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) min((max((569574292U), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (arr_13 [2ULL] [i_1] [(signed char)1])))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)32753)))))));
                    }
                    arr_19 [i_0] [i_0] [(signed char)9] [i_0] = ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) (signed char)112)), (8338686145033481330ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((long long int) (short)29129)) > (((/* implicit */long long int) ((451115920) / (((/* implicit */int) arr_3 [i_0] [i_0]))))))))) : (((arr_9 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))));
                }
            } 
        } 
    } 
}
