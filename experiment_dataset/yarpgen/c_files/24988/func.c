/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24988
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)32651)) ? (((/* implicit */unsigned long long int) arr_0 [(signed char)5])) : (var_8)));
        arr_5 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [(_Bool)1]) : (((/* implicit */unsigned int) var_9)))) & (arr_6 [i_1])));
        var_20 = ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32885))) : (arr_6 [i_1]));
    }
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                {
                    var_21 += ((/* implicit */unsigned long long int) max((5639925108108560505LL), (arr_13 [i_2])));
                    arr_18 [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_10 [i_3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_3] [(unsigned short)6]))) * (arr_17 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)32877), (((/* implicit */unsigned short) arr_9 [i_2] [i_2])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32630)))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)32679)) ? (18335882909433661838ULL) : (((/* implicit */unsigned long long int) var_0)))), ((~(arr_11 [i_4] [4])))))) ? ((~(((/* implicit */int) var_3)))) : (min((((((/* implicit */int) (signed char)-55)) | (((/* implicit */int) arr_14 [i_2])))), (((/* implicit */int) arr_12 [(unsigned short)0] [i_3] [i_4]))))));
                }
            } 
        } 
    } 
    var_23 ^= var_0;
    var_24 = ((/* implicit */short) var_1);
}
