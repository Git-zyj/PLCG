/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1958
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
    var_11 *= ((/* implicit */unsigned int) min((((-1LL) & (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)7))))))), (((-2978721409066676927LL) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) min((((/* implicit */long long int) (~(max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))), ((-(((((/* implicit */_Bool) 2978721409066676927LL)) ? (arr_0 [i_0] [5LL]) : (((/* implicit */long long int) arr_1 [i_0] [i_0])))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((arr_3 [i_0]) - (min((((/* implicit */long long int) (signed char)-71)), (5584148516309499853LL)))));
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) 257554973)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))) : (1097364144128ULL))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        arr_9 [i_3] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_8 [16LL])) ? ((~(arr_6 [i_3]))) : (((/* implicit */unsigned long long int) -7463712227685182055LL)))));
        var_15 *= ((/* implicit */unsigned char) arr_7 [6U]);
        arr_10 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -6218026679769009627LL))))), (((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_7 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))) ? ((-(((arr_7 [i_3]) + (((/* implicit */unsigned long long int) -1)))))) : (arr_7 [i_3])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_4 = 4; i_4 < 21; i_4 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1003951868)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-2978721409066676927LL)));
            var_17 = ((/* implicit */int) arr_12 [i_4] [i_3] [i_3]);
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                var_18 = ((/* implicit */long long int) arr_8 [i_4 - 4]);
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2040)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    {
                        var_20 = ((/* implicit */long long int) (-(arr_18 [i_3] [i_3] [i_3] [i_7])));
                        arr_21 [i_3] [i_4] [i_6] [i_7] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_18 [i_3] [i_3] [i_6] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6] [i_4] [i_3]))))));
                    }
                } 
            } 
        }
        for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            arr_26 [i_3] [i_3] = ((/* implicit */int) min((arr_13 [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_8] [i_8] [i_8] [i_3])) ? (((/* implicit */long long int) 2147483647)) : (-2978721409066676927LL)))) ? (((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_8])) : (((/* implicit */int) min(((unsigned short)30010), (arr_23 [i_3] [i_3] [i_8])))))))));
            arr_27 [i_3] [i_3] = ((/* implicit */int) arr_8 [i_8]);
            var_21 = ((/* implicit */unsigned short) ((long long int) min((arr_15 [i_8] [i_3] [i_3] [i_3]), (((/* implicit */int) min((arr_19 [i_3] [i_3] [i_3] [i_8]), (arr_8 [i_3])))))));
            arr_28 [i_3] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_8])) ? (((/* implicit */int) (unsigned char)64)) : ((+(((/* implicit */int) (unsigned short)32767)))))));
            var_22 = ((/* implicit */unsigned char) arr_14 [i_3] [i_3]);
        }
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) 257554973))));
    }
    /* LoopSeq 1 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_24 = ((/* implicit */long long int) arr_7 [22]);
        var_25 = ((/* implicit */unsigned char) arr_17 [i_9] [i_9] [i_9]);
        /* LoopNest 3 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) 3099597889U);
                        var_27 = ((/* implicit */signed char) arr_13 [i_10]);
                        var_28 |= ((/* implicit */int) min((((/* implicit */long long int) (unsigned char)71)), (9007199187632128LL)));
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(0U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2005103200U)) ? (1729382256910270464LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_10] [i_11] [i_12])) ? (((/* implicit */int) (unsigned char)255)) : (arr_25 [i_11]))))))) : (((int) arr_31 [i_10 - 1])))))));
                        arr_38 [i_9] [i_10] [i_10 - 1] [i_10] [i_11] [i_12] = (-(min((((/* implicit */long long int) (+(1550860735)))), (min((((/* implicit */long long int) (unsigned short)53353)), (-7955531638172994566LL))))));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned short) var_4);
}
