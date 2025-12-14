/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211037
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2116535052U)) ? (3897980573U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22643)))));
    var_16 = ((((/* implicit */_Bool) 2178432243U)) ? (((((/* implicit */_Bool) ((unsigned long long int) (short)18122))) ? (((/* implicit */int) ((2116535052U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26529)))))) : (((/* implicit */int) var_2)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-18122)), ((unsigned short)5)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)-19257)))) ? (((/* implicit */int) ((unsigned short) var_13))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1)))))));
            /* LoopSeq 2 */
            for (short i_2 = 3; i_2 < 12; i_2 += 2) /* same iter space */
            {
                arr_11 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) || (((((/* implicit */_Bool) -1497598587)) || ((_Bool)1)))));
                arr_12 [i_0] [i_0] = ((/* implicit */int) var_8);
            }
            /* vectorizable */
            for (short i_3 = 3; i_3 < 12; i_3 += 2) /* same iter space */
            {
                arr_17 [i_0] [(unsigned short)12] = ((var_13) % (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))));
                arr_18 [i_0] [i_0] [i_3] = ((/* implicit */short) (((_Bool)1) ? (var_7) : (((((/* implicit */int) (unsigned short)38211)) | (((/* implicit */int) (short)-32762))))));
            }
            arr_19 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((max((2116535068U), (((/* implicit */unsigned int) (short)29717)))), (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) (short)-18117)) : (((/* implicit */int) arr_10 [i_1 - 2] [i_0] [i_1 - 2])))))));
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_1)), (min((4060768226U), (((/* implicit */unsigned int) arr_4 [i_0] [i_1])))))))));
            var_18 ^= ((/* implicit */unsigned short) var_1);
        }
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) (unsigned short)448)))) : (((/* implicit */int) var_9))));
    }
    for (short i_4 = 1; i_4 < 20; i_4 += 3) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1501929323)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) var_2)) : ((+((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))))));
        var_21 ^= ((/* implicit */signed char) min((var_10), (((/* implicit */unsigned long long int) (short)-29416))));
        var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)-2984)) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (unsigned short)30919))))));
        arr_23 [i_4] = ((/* implicit */signed char) var_4);
    }
}
