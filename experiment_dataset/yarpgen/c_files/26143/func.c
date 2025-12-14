/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26143
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_3] [(signed char)0] [i_4] [i_1] = ((/* implicit */signed char) (unsigned short)47464);
                                arr_15 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_3]))));
                                arr_16 [(_Bool)1] [(_Bool)1] [i_4] [(short)13] [i_4] = 879965627601987589LL;
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_5 = 1; i_5 < 14; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_26 [i_5] [13ULL] [i_5] [(signed char)11] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_5 - 1] [(signed char)4])) ? (((/* implicit */int) arr_20 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_6] [i_7]))))) ? (((arr_5 [i_1] [i_0]) & (((/* implicit */unsigned long long int) arr_25 [i_0] [(signed char)5] [i_5] [i_5 + 1] [i_6] [i_7] [i_7])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_5 + 1] [i_1]))))));
                                arr_27 [i_0] [i_1] [i_5] [i_6] [i_5] = ((/* implicit */int) var_3);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        var_10 = ((/* implicit */unsigned short) 5641770375346733053ULL);
                        arr_30 [(signed char)12] [i_1] [i_5] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_5] [i_5] [i_8])) ? (((/* implicit */int) arr_22 [i_5] [i_1] [i_5] [i_5 + 2] [i_1])) : (((/* implicit */int) arr_29 [14ULL] [i_1] [i_5] [i_5] [i_8])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47486)) ? (((/* implicit */long long int) arr_8 [4U] [i_1] [i_1] [i_5] [(_Bool)1])) : (-879965627601987585LL)))) ? (var_2) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_3))))))));
                    }
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        var_11 = ((/* implicit */signed char) (unsigned short)16128);
                        arr_35 [i_0] [i_5] [3LL] [i_9] [i_0] = ((/* implicit */long long int) ((unsigned char) ((((((/* implicit */int) (_Bool)1)) / (7))) << (((-879965627601987607LL) + (879965627601987628LL))))));
                    }
                    var_12 *= ((/* implicit */signed char) var_7);
                }
            }
        } 
    } 
    var_13 = ((/* implicit */short) 9223372036854775794LL);
    var_14 ^= ((/* implicit */int) ((((((/* implicit */_Bool) (+(var_2)))) ? (-879965627601987576LL) : (((/* implicit */long long int) var_2)))) | (((/* implicit */long long int) ((var_0) << (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_7))))))))));
}
