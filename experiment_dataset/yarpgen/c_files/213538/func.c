/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213538
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
    var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= ((+(4915397556330875276ULL))));
    var_19 -= ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -370842646209872130LL)) ? (((/* implicit */long long int) 262080U)) : (2049053322821751568LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (max((((((/* implicit */_Bool) var_3)) ? (8306961041524563920ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) var_1)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+((-(arr_3 [i_0 - 1]))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [4U])) ? (((((/* implicit */_Bool) ((arr_2 [i_0 + 2]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((unsigned long long int) arr_2 [i_0])) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [(short)4])))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142))))))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_22 = max((min((arr_10 [i_3 + 1] [i_3] [i_3 - 1] [i_3]), (arr_10 [i_3 - 1] [i_3 - 1] [i_3] [i_3]))), (((/* implicit */unsigned short) ((_Bool) arr_10 [i_3 - 1] [i_3] [i_3 - 1] [i_3 + 1]))));
                        arr_12 [i_0 - 1] [i_1] [i_2] [i_0] [i_0 + 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_1 + 1] [i_2] [i_3 + 1])) ? (((/* implicit */int) arr_7 [i_3 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 2])) : (((/* implicit */int) arr_5 [i_3 - 1] [i_1 + 1] [i_1])))))));
                        var_23 = ((/* implicit */signed char) arr_2 [i_1]);
                        arr_13 [i_0 + 2] [i_0 + 2] [i_1 - 1] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_3 - 1])) : (((/* implicit */int) arr_9 [i_0 - 1]))))) && (((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_4 = 1; i_4 < 15; i_4 += 3) 
        {
            arr_16 [i_4] [i_0 - 2] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1])) ? (max((((/* implicit */long long int) arr_9 [i_0])), (370842646209872129LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned char)8] [(short)16] [i_4 + 2] [(short)16])))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) arr_1 [i_0] [i_0 - 1])) / (370842646209872129LL))))) : (((int) arr_7 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 + 1])));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0 - 2]))))) ? (((/* implicit */int) max((arr_2 [i_0 + 2]), (arr_2 [i_0 + 2])))) : (((((/* implicit */_Bool) -370842646209872130LL)) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 + 2]))))));
            arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)0)))) - (min((370842646209872129LL), (((/* implicit */long long int) (unsigned short)14882))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0])))))));
            arr_18 [i_4] [i_4 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65191)), (9007199254732800ULL)))) ? (min((((arr_3 [i_4 + 1]) ^ (((/* implicit */unsigned long long int) arr_14 [i_0 - 2] [i_4])))), (((/* implicit */unsigned long long int) (unsigned char)255)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0])))));
        }
    }
}
