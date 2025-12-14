/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213713
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
    var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)84)), (var_7)))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_15) == (((/* implicit */unsigned long long int) var_7))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) arr_2 [i_0])))));
        var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)103)) ? (-1136586549239043779LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0])))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])) : (((((/* implicit */_Bool) 4294967278U)) ? (var_13) : (arr_9 [i_0] [i_0])))));
                arr_10 [i_1] [5] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1136586549239043805LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [(unsigned short)4] [12U]))) : (arr_4 [i_0] [i_0] [15])))) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 1] [i_2 - 1])))));
                var_24 = ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) : (var_12));
                arr_11 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 1] [i_1 + 1]))) >= (arr_4 [i_1 - 1] [(short)12] [i_2])));
                var_25 = ((/* implicit */unsigned int) var_17);
            }
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_8 [i_1] [16U]))) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) && (((/* implicit */_Bool) (unsigned char)103))))))));
        }
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
        {
            arr_14 [(unsigned char)16] [(signed char)7] = ((/* implicit */unsigned short) arr_4 [7U] [7U] [i_3]);
            var_27 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0])) | (((/* implicit */int) var_8))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (((-(((/* implicit */int) arr_0 [(short)16] [i_0])))) < (((/* implicit */int) arr_2 [i_3]))))));
            var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3])) ? (((((var_8) ? (var_9) : (((/* implicit */unsigned int) -1192598819)))) ^ (((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (arr_4 [7LL] [5U] [(short)7]))))) : (max((((unsigned int) arr_2 [3U])), (((/* implicit */unsigned int) arr_6 [12ULL] [i_3]))))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
        {
            var_29 = ((arr_8 [i_4] [i_4]) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))));
            arr_17 [(unsigned char)7] [(unsigned char)7] = ((/* implicit */unsigned char) (~(arr_13 [i_0])));
        }
        var_30 = ((/* implicit */_Bool) ((((/* implicit */int) max((max((((/* implicit */unsigned char) arr_16 [i_0] [i_0])), ((unsigned char)103))), (((/* implicit */unsigned char) ((2048848412U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))))))))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) >= (4294967295U))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_21 [(unsigned char)15] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_5 [(unsigned char)10] [10U] [(unsigned char)10])) || (((/* implicit */_Bool) arr_7 [i_5] [i_5]))))))), (((unsigned int) arr_9 [i_5] [i_5]))));
        var_31 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0U)) / (1067857697182234934ULL)))) ? (min((arr_9 [i_5] [6LL]), (((arr_20 [i_5] [i_5]) ? (var_1) : (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_16 [11U] [(short)9])))))))));
        arr_22 [i_5] = ((/* implicit */unsigned short) ((unsigned char) arr_2 [i_5]));
    }
    var_32 = ((/* implicit */long long int) var_2);
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209))) : (var_0))) >> (((var_7) - (1640868134967684725LL)))))) ? (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_2)))), (max((((/* implicit */int) var_17)), (161363186)))))) : (var_1)));
}
