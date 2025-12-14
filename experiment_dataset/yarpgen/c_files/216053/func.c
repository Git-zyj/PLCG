/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216053
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
    var_14 = ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) || (((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_3))))))) > (((/* implicit */int) var_7)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_15 += ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2])) >= ((+(((/* implicit */int) (unsigned short)61467))))));
        var_16 = ((/* implicit */unsigned short) ((576460752303423488ULL) + (3ULL)));
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)61467)) ? (((/* implicit */int) (unsigned short)12050)) : (((/* implicit */int) (unsigned char)242))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0 + 1])));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) arr_6 [i_1]);
        var_19 = ((/* implicit */short) ((arr_7 [i_1] [i_1 - 1]) ? (((0U) / (((/* implicit */unsigned int) 263537242)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        var_20 = (~(((/* implicit */int) var_10)));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+(3391137349U))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            var_22 = ((/* implicit */short) arr_10 [i_3]);
            var_23 = ((/* implicit */short) var_2);
            var_24 -= ((/* implicit */short) arr_8 [i_2 + 1] [14]);
            /* LoopSeq 1 */
            for (long long int i_4 = 2; i_4 < 20; i_4 += 1) 
            {
                var_25 -= ((/* implicit */signed char) ((((unsigned int) (unsigned short)4068)) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), ((_Bool)0)))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 3) 
                {
                    arr_16 [i_2] = ((/* implicit */long long int) arr_13 [i_5] [i_4] [i_2 + 2]);
                    var_26 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                }
                for (unsigned char i_6 = 1; i_6 < 21; i_6 += 4) 
                {
                    var_27 = ((/* implicit */short) min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_20 [i_2] [i_3] [i_4] [i_3])), (var_13)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_4)) & (((/* implicit */int) arr_8 [i_2] [i_2])))))))));
                    var_28 = ((/* implicit */short) (+(((/* implicit */int) var_7))));
                    var_29 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11204))) > (min((((/* implicit */unsigned int) arr_18 [i_2] [i_3] [i_4 + 3] [i_4 + 3])), (arr_10 [i_4]))))) ? (((18446744073709551601ULL) - (((/* implicit */unsigned long long int) 6963204704717986631LL)))) : (((/* implicit */unsigned long long int) ((var_5) ? (((((/* implicit */_Bool) 231995342145961124LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4 + 2])) || (((/* implicit */_Bool) -610505031))))))))));
                    var_30 = ((/* implicit */unsigned short) ((max((((/* implicit */int) arr_15 [i_2] [i_2] [i_2 + 3] [i_4 - 1])), (56023156))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 2] [i_2]))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (var_1))))))));
                }
                for (long long int i_7 = 2; i_7 < 21; i_7 += 4) 
                {
                    arr_23 [18LL] [18LL] [18LL] [i_3] [18LL] = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) ((23U) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), ((~(var_9)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_31 = ((((/* implicit */unsigned long long int) 1479128487)) - (((unsigned long long int) var_1)));
                        var_32 = ((/* implicit */long long int) ((unsigned long long int) ((var_2) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 1; i_9 < 19; i_9 += 1) 
                    {
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40416))) : (((((/* implicit */_Bool) arr_26 [i_9] [i_3] [i_4] [i_7] [(short)16])) ? (((/* implicit */unsigned int) var_3)) : (arr_19 [i_2] [i_2] [i_4] [i_3] [i_4])))));
                        arr_28 [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_9 + 1] [i_4 + 3] [i_4 - 1] [i_4]))));
                    }
                }
                arr_29 [i_2] [i_2] [i_2 + 1] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) ((arr_22 [i_2 + 1]) + (arr_22 [i_2 - 1]))));
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (~(arr_22 [i_4]))))) ^ (((/* implicit */int) var_5))));
            }
        }
    }
}
