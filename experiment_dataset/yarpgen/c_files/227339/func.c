/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227339
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) 7904536150825970558ULL)) ? (((/* implicit */long long int) 1560526736U)) : (9223372036854775807LL)))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        {
                            var_19 = arr_9 [i_1] [i_4];
                            var_20 = ((/* implicit */unsigned char) (+(380048926U)));
                        }
                    } 
                } 
            } 
            var_21 = (~(((/* implicit */int) ((unsigned short) var_6))));
            var_22 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned short) var_14)));
        }
        for (unsigned int i_5 = 2; i_5 < 23; i_5 += 2) 
        {
            arr_18 [i_0] [i_5] [i_5] = (~((~(9223372036854775808ULL))));
            var_23 = ((/* implicit */_Bool) (signed char)35);
            var_24 = ((/* implicit */unsigned short) (signed char)10);
        }
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (short i_7 = 3; i_7 < 24; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 24; i_8 += 2) 
                {
                    {
                        arr_26 [i_0] [i_6] [i_0] = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            arr_29 [i_0] [i_0] [i_6] [i_7] [i_8] [i_8] [i_9] = ((/* implicit */unsigned long long int) arr_11 [i_6] [i_7] [i_8] [i_9]);
                            var_25 = ((/* implicit */long long int) (unsigned char)8);
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_11 = 1; i_11 < 24; i_11 += 4) 
        {
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) max((10542207922883581057ULL), (((/* implicit */unsigned long long int) 3914918370U)))))));
            arr_34 [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) max((var_10), (((/* implicit */unsigned long long int) var_12)))))) ? (var_10) : (((((/* implicit */_Bool) ((var_17) ? (((/* implicit */unsigned long long int) 380048915U)) : (var_16)))) ? (var_0) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))))))));
        }
        for (unsigned int i_12 = 3; i_12 < 23; i_12 += 2) 
        {
            arr_37 [i_10] &= ((/* implicit */long long int) max((380048907U), (((/* implicit */unsigned int) ((_Bool) 9223372036854775807LL)))));
            /* LoopSeq 2 */
            for (short i_13 = 2; i_13 < 22; i_13 += 3) 
            {
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)35)))))) / ((+(arr_17 [i_13] [i_12] [i_13]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) arr_21 [i_13])) / (var_14))) : (((/* implicit */int) (_Bool)0)))))));
                var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)65535))));
            }
            for (unsigned int i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                var_29 = (!(((/* implicit */_Bool) min((arr_13 [i_14] [i_12] [i_14] [i_14] [i_12] [i_12] [i_12]), (((((/* implicit */_Bool) arr_2 [i_14])) ? (517165729U) : (var_11)))))));
                arr_44 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), ((((!(((/* implicit */_Bool) 380048925U)))) ? (((/* implicit */unsigned long long int) ((952814693U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)74)))))) : (((((/* implicit */_Bool) arr_16 [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_10] [i_10] [i_12] [i_14]))) : (4052631299352472180ULL)))))));
                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) min((380048926U), (((/* implicit */unsigned int) (signed char)-36)))))));
                arr_45 [i_12] [i_14] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)176))));
            }
            var_31 = min(((~(arr_20 [i_12 - 3]))), (((((/* implicit */_Bool) arr_20 [i_12 + 2])) ? (((/* implicit */long long int) arr_27 [i_12] [i_12] [i_12] [14] [i_12 - 1] [i_12 + 2] [i_12 - 1])) : (arr_20 [i_12 - 1]))));
            arr_46 [i_10] [i_10] [i_12] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)74))));
        }
        var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3777801567U)) ? (((3914918370U) * (3342152603U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4096))))) >= (((/* implicit */unsigned int) (-(((/* implicit */int) ((1490264721U) < (517165729U)))))))));
    }
    var_33 = ((/* implicit */int) ((unsigned int) (+(((((/* implicit */_Bool) var_11)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
}
