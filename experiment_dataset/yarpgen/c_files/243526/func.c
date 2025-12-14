/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243526
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
    var_19 -= ((/* implicit */short) (_Bool)1);
    var_20 *= ((/* implicit */short) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_13))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) arr_3 [i_0]);
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (min((0), (((/* implicit */int) (_Bool)1)))) : (arr_3 [i_0]))), ((-(((/* implicit */int) (unsigned short)65535))))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 1))));
        var_23 |= ((/* implicit */short) max((min((((/* implicit */long long int) (signed char)114)), (2147483647LL))), (((((long long int) 140737488355327LL)) >> (((3359977848U) - (3359977845U)))))));
    }
    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 3; i_4 < 22; i_4 += 4) 
        {
            var_24 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) | (-2065575949)));
            arr_12 [i_3] [i_3] [i_4 - 2] = ((/* implicit */int) ((short) (-(arr_9 [i_4 + 1] [2U]))));
            arr_13 [i_3] [i_4] [i_4 - 3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) ((unsigned char) (_Bool)1))))) << (((((long long int) (~(arr_11 [i_3])))) - (231906279LL)))));
            var_25 -= ((/* implicit */long long int) min((((arr_9 [i_3] [i_4 + 1]) / (arr_9 [i_3] [i_3]))), (((arr_9 [i_3] [i_4 - 2]) - (arr_9 [i_3] [i_4 - 1])))));
        }
        arr_14 [(signed char)7] [i_3] = ((/* implicit */unsigned short) ((((var_18) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_3] [i_3]))) >= (3359977848U)))))) >= (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    }
}
