/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211267
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [2ULL] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)183)) ? ((~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) -4025878890742094762LL)) : (arr_3 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)244)) | (((/* implicit */int) (unsigned char)244)))))));
                    arr_8 [(unsigned short)9] [(unsigned char)20] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((830034356878759907ULL) | (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1])))));
                    var_19 ^= ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((15417916353408714912ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221))))))) + (var_16)));
                    arr_9 [i_0] [i_0] [i_2 + 4] [i_1] = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26468))) : (arr_3 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 + 4] [i_1] [i_1] [i_1])))))) : (max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_2 + 2])), (arr_5 [i_0] [i_1] [i_2] [i_2 + 4]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) var_8);
    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_7))))))));
    var_22 = ((/* implicit */unsigned short) ((max((13372906325133503121ULL), (((/* implicit */unsigned long long int) (unsigned char)12)))) - (((((var_9) / (var_9))) ^ (((/* implicit */unsigned long long int) var_1))))));
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        var_23 = ((/* implicit */long long int) arr_0 [i_3] [9ULL]);
        arr_12 [i_3] [i_3] = ((/* implicit */long long int) ((((var_14) / (min((arr_3 [i_3]), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3] [i_3] [i_3])))))) + (max((((/* implicit */unsigned long long int) arr_10 [i_3] [i_3])), (((((/* implicit */_Bool) 1039469220777822079ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3]))) : (var_17)))))));
    }
    for (long long int i_4 = 3; i_4 < 22; i_4 += 4) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned long long int) (((~(((unsigned long long int) (unsigned char)249)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_4])))));
        var_24 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) arr_0 [i_4] [i_4 - 3])) : (((/* implicit */int) (unsigned char)242))))), (min((((/* implicit */unsigned long long int) arr_0 [i_4 + 1] [i_4])), (((((/* implicit */_Bool) arr_2 [i_4] [i_4])) ? (var_12) : (((/* implicit */unsigned long long int) arr_1 [(unsigned short)4] [21ULL]))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            arr_19 [i_4] [(unsigned char)16] [i_5] &= ((/* implicit */unsigned short) (-(arr_13 [i_5])));
            arr_20 [i_4] [i_5] = ((/* implicit */unsigned char) arr_1 [i_4] [9ULL]);
            /* LoopSeq 1 */
            for (long long int i_6 = 1; i_6 < 19; i_6 += 4) 
            {
                var_25 *= ((/* implicit */unsigned char) (~(arr_16 [i_4 + 1])));
                var_26 = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6 - 1] [i_4 - 3]))) : (arr_23 [18ULL] [i_4] [i_4 + 1]));
            }
            arr_24 [i_4] = ((/* implicit */unsigned long long int) arr_1 [i_5] [i_5]);
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            arr_28 [i_4] = ((var_7) & (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_4]))));
            var_27 &= ((/* implicit */unsigned char) (unsigned short)61863);
        }
        for (unsigned short i_8 = 3; i_8 < 21; i_8 += 4) 
        {
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_11))));
            arr_31 [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) arr_5 [(unsigned char)18] [i_4] [i_8] [i_8]));
            var_29 = ((/* implicit */unsigned char) arr_27 [i_4]);
            var_30 = ((/* implicit */long long int) min((max((min((((/* implicit */unsigned long long int) (unsigned short)45085)), (arr_17 [i_4] [i_8]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)23))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_4])))))));
        }
        for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 3) 
        {
            arr_35 [i_9] [i_9] [i_4] = ((/* implicit */long long int) arr_26 [i_4] [i_9] [i_4]);
            arr_36 [i_4] [i_9] [i_9] = ((/* implicit */unsigned short) (~((((~(var_7))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_33 [6LL] [i_4 - 3] [6LL])))), (((((/* implicit */int) min(((unsigned char)233), ((unsigned char)60)))) | (((/* implicit */int) (unsigned short)32764)))))))));
        }
    }
}
