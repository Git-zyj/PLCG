/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213969
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
    var_13 = ((/* implicit */signed char) min((((/* implicit */long long int) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (min((var_11), (((/* implicit */long long int) var_12))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((15654681041969736474ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) + (((/* implicit */int) max((arr_2 [i_0 + 1] [i_0]), (((/* implicit */unsigned short) (signed char)31)))))));
        var_15 ^= ((/* implicit */signed char) min((min((((/* implicit */unsigned char) var_9)), (arr_0 [i_0 + 2]))), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26608))) != (min((((/* implicit */unsigned long long int) var_4)), (var_6))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) -1334731885616307413LL)) || (((/* implicit */_Bool) -1LL)))), (((0U) > (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
        var_17 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)43), (((/* implicit */signed char) var_12)))))) | (((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_18 = ((((((/* implicit */_Bool) arr_3 [i_1] [(_Bool)1])) || ((_Bool)1))) || (((/* implicit */_Bool) min((1U), (((/* implicit */unsigned int) (short)-25113))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_2] = ((/* implicit */_Bool) max((min((arr_0 [i_2]), (((/* implicit */unsigned char) var_12)))), (((/* implicit */unsigned char) min((var_12), ((_Bool)1))))));
            var_19 = ((((/* implicit */_Bool) max((var_0), (((/* implicit */short) arr_0 [i_2]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)42047)) & (((/* implicit */int) (short)-27263))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 1) 
        {
            var_20 *= ((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((609282015) - (609282002)))));
            arr_12 [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_2)) | (var_7)));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)46)) + (((/* implicit */int) arr_8 [i_3] [i_3 - 3] [i_3]))));
        }
        var_22 &= ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)129)) + (((((/* implicit */int) (signed char)90)) >> (((2147483647) - (2147483625))))))), (((/* implicit */int) max((min((((/* implicit */short) arr_6 [i_1] [i_1])), (var_0))), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (short)-1910))))))))));
    }
    var_23 = ((/* implicit */int) max((var_23), (var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)4095)) | (var_10)));
        var_25 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)150)) + (((/* implicit */int) arr_0 [i_4]))));
    }
}
