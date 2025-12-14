/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248671
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)24749))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)10]))) < (arr_0 [i_0] [i_0]))))))));
                var_10 += ((/* implicit */signed char) ((short) (-(((/* implicit */int) arr_2 [i_0])))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_4))) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)177)) == (((/* implicit */int) var_7)))))))) | (((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_12 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [i_2] [i_2]))))), (arr_8 [i_2] [i_2])));
        var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_7 [i_2] [i_2])), (((int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_7 [i_2] [10U])))))));
        arr_9 [i_2] &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)20775)) << (((((/* implicit */int) var_2)) - (44))))))));
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        var_14 = ((/* implicit */short) min((((/* implicit */long long int) 2118364537)), (9223372036854775807LL)));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 3) 
        {
            arr_15 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)39)) + (((/* implicit */int) arr_14 [i_4 - 3] [i_4 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_0))))) : (((((((/* implicit */long long int) ((/* implicit */int) var_7))) - (-3630087456968924693LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184)))))));
            var_15 |= ((/* implicit */unsigned int) arr_8 [i_3] [(signed char)5]);
            var_16 &= ((/* implicit */short) min((((/* implicit */unsigned char) var_5)), (arr_13 [i_4])));
            var_17 = ((/* implicit */unsigned short) (((~(arr_8 [i_4 - 1] [i_4 - 3]))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54596))) % (arr_8 [i_4 - 2] [i_4 - 2])))));
            var_18 = ((/* implicit */unsigned short) arr_14 [i_3] [i_3]);
        }
        for (short i_5 = 2; i_5 < 17; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    {
                        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1901440803254361676LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))), (((arr_22 [i_3] [i_3] [i_6] [i_3] [i_5] [i_3]) / (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [i_5 - 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned short)6)))))) * (((unsigned int) arr_12 [3U]))))));
                        arr_24 [i_6] [i_6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5 + 1] [i_5 + 1])) ? (arr_20 [i_5 + 1] [i_5 + 1] [i_5 - 1]) : (arr_20 [i_5 - 2] [i_5 + 1] [i_5 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29419)) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)0)), (var_0)))))))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((var_6) >= (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)25)) & (((/* implicit */int) arr_23 [i_3] [i_3] [(unsigned char)8] [i_7]))))))))));
                        arr_25 [i_6] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned char)234)) / (((/* implicit */int) (signed char)83))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */int) max((var_21), ((-(((((/* implicit */int) var_0)) - (((/* implicit */int) var_4))))))));
            var_22 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)21958)) << (((((/* implicit */int) (unsigned short)9897)) - (9885)))))) ? (((((/* implicit */int) arr_11 [i_3] [i_3])) | (1411160489))) : (arr_22 [i_5] [i_5] [i_5] [(unsigned short)12] [i_5] [(unsigned char)12]))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_3] [i_5 - 2])) ? (((/* implicit */int) arr_16 [(signed char)9] [i_5])) : (((/* implicit */int) var_8)))) > (((/* implicit */int) arr_7 [i_5 + 1] [i_5 + 1])))))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned short) max((var_8), (((/* implicit */short) (unsigned char)21))))), ((unsigned short)42593)))) >= (((((/* implicit */int) arr_14 [i_3] [i_5 - 2])) & (((/* implicit */int) arr_14 [i_3] [i_5 + 1]))))));
        }
        var_24 += ((/* implicit */unsigned short) (unsigned char)83);
        /* LoopSeq 2 */
        for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            var_25 = ((/* implicit */int) arr_18 [i_8] [i_3]);
            arr_30 [i_3] [i_8] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_29 [(short)2] [i_8] [i_8])) ? (((/* implicit */int) arr_7 [i_3] [i_8])) : (((/* implicit */int) (signed char)0)))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_3] [i_3]))) <= (((((/* implicit */_Bool) var_8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) << (((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) var_8)), (arr_11 [(unsigned char)6] [i_3]))))) - (46875)))));
        }
        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            var_27 -= ((/* implicit */short) ((max(((-(arr_20 [12ULL] [i_9] [i_9]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [9LL])) & (((/* implicit */int) (_Bool)1))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            arr_33 [(signed char)7] = ((/* implicit */unsigned short) arr_14 [i_3] [i_9]);
        }
    }
    for (short i_10 = 0; i_10 < 16; i_10 += 3) 
    {
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((0ULL), (arr_20 [(unsigned short)13] [i_10] [i_10])))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (-1430714360))), (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_5)) ? (1048320U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [12] [(unsigned short)14] [i_10] [i_10])) | (((/* implicit */int) (unsigned short)39682)))))))));
        var_29 = ((/* implicit */short) ((((/* implicit */int) var_5)) == (((((/* implicit */_Bool) var_1)) ? (((arr_32 [i_10]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))));
    }
}
