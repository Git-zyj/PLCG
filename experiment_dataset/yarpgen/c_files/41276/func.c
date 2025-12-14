/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41276
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_14 = var_4;
        var_15 = ((/* implicit */long long int) min((var_15), (((long long int) (((_Bool)0) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)59528)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((long long int) arr_3 [i_0 + 1])) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))))));
        arr_8 [i_1] [i_1] &= ((/* implicit */unsigned long long int) var_2);
        arr_9 [i_1] = ((_Bool) ((long long int) arr_0 [i_1]));
        arr_10 [i_1] |= ((/* implicit */unsigned short) ((arr_1 [i_1]) % (((/* implicit */unsigned long long int) var_1))));
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            var_17 -= ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_6 [i_2] [(signed char)0])))), (((/* implicit */int) min((arr_6 [15LL] [i_2]), (arr_6 [i_2] [i_3]))))));
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_4))));
        }
        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            var_19 = min((((/* implicit */long long int) ((9007112493249178017LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59535)))))), (min((((/* implicit */long long int) arr_0 [i_4])), (arr_14 [i_4] [i_2]))));
            var_20 += ((/* implicit */short) ((long long int) var_9));
        }
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            arr_21 [i_2] [i_5] = ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_0 [(signed char)4])) ^ ((+(((/* implicit */int) var_13)))))));
            arr_22 [i_2] = max((((/* implicit */long long int) max((arr_3 [i_5]), (arr_3 [i_5])))), ((~(((((-6275643562566907219LL) + (9223372036854775807LL))) >> (((-2533330450563868508LL) + (2533330450563868527LL))))))));
            var_21 -= ((/* implicit */signed char) 15);
        }
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) == (((((/* implicit */long long int) ((/* implicit */int) (signed char)121))) & (6275643562566907233LL)))));
                var_23 = ((/* implicit */unsigned char) ((arr_16 [i_7 - 1] [(short)8] [i_7]) / (arr_16 [i_7 - 1] [i_7] [i_7])));
                arr_27 [i_7] [i_6] = ((/* implicit */signed char) ((unsigned char) arr_18 [i_7 - 1] [i_7 - 1] [i_7 - 1]));
            }
            /* vectorizable */
            for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                var_24 = ((((/* implicit */int) arr_30 [i_2] [i_2] [i_2])) != (((/* implicit */int) arr_30 [i_2] [i_6] [i_8])));
                arr_31 [i_2] [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1352569995)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))) : (18446743798831644672ULL)));
            }
            var_25 = ((/* implicit */signed char) arr_30 [i_6] [i_6] [i_2]);
            /* LoopSeq 2 */
            for (int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_16 [i_9] [i_6] [i_2]))) ^ (((/* implicit */int) ((unsigned short) arr_16 [i_2] [i_6] [12LL])))));
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((long long int) ((274877906944ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6016))))))) : ((~(arr_2 [(_Bool)1]))))))));
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((long long int) arr_0 [i_2])))));
            }
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                arr_36 [(signed char)5] [i_2] [(unsigned char)4] [i_2] = ((/* implicit */long long int) -16);
                /* LoopSeq 4 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_29 = ((/* implicit */_Bool) var_6);
                    arr_39 [i_2] [(unsigned char)4] [i_6] [(signed char)6] [5LL] [i_11] = ((/* implicit */int) max((min((-9223372036854775781LL), (((/* implicit */long long int) arr_6 [16LL] [i_11])))), (((arr_5 [i_10]) + (((/* implicit */long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) (_Bool)1)))))))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_30 = ((/* implicit */signed char) min((var_11), ((((~(2566486626429882961ULL))) << (((((/* implicit */int) (signed char)125)) - (98)))))));
                    arr_42 [i_2] [(signed char)7] [i_10] [(_Bool)1] [i_12] &= ((/* implicit */signed char) arr_3 [i_2]);
                    var_31 = ((/* implicit */signed char) max((((511LL) << (((arr_1 [i_2]) - (1786693299923940591ULL))))), (((long long int) arr_1 [i_2]))));
                    var_32 = arr_16 [i_10] [i_10] [i_10];
                    arr_43 [i_2] [i_2] [i_10] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_37 [i_10] [i_10] [i_10] [i_10]), (arr_37 [i_2] [i_2] [i_2] [5LL])))) ? (((((/* implicit */_Bool) arr_37 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_37 [i_2] [(_Bool)1] [5LL] [i_12])) : (((/* implicit */int) arr_37 [i_2] [(unsigned char)0] [i_10] [(unsigned char)0])))) : (((((/* implicit */_Bool) arr_37 [i_2] [i_2] [i_10] [i_12])) ? (((/* implicit */int) arr_37 [i_12] [i_6] [i_6] [i_2])) : (((/* implicit */int) arr_37 [i_2] [i_6] [i_10] [i_10]))))));
                }
                for (unsigned char i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) var_10))));
                    var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (max((arr_34 [i_2] [(_Bool)1] [i_10] [i_13]), (((/* implicit */long long int) arr_37 [11LL] [i_6] [(signed char)1] [i_13])))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)15))))))) && (((/* implicit */_Bool) var_5)));
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_16 [i_6] [(_Bool)1] [i_13]), (((/* implicit */long long int) (_Bool)1))))) ? (max((((/* implicit */long long int) var_13)), (-4158908683225344321LL))) : (max((855982046395636463LL), (((/* implicit */long long int) -1352570002)))))))));
                    var_36 = ((/* implicit */_Bool) min((var_36), (arr_25 [i_13])));
                }
                for (short i_14 = 1; i_14 < 12; i_14 += 3) 
                {
                    var_37 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) -22)) & (-231868923580706864LL)));
                    var_38 = ((/* implicit */_Bool) var_9);
                }
                /* LoopSeq 1 */
                for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) 
                {
                    arr_50 [i_15] [i_2] [i_10] [i_15] [(unsigned char)1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_2]))) / (min((((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_2] [i_2] [i_6] [i_10] [(unsigned char)3] [i_2]))))), (arr_32 [i_2] [i_10] [i_15])))));
                    var_39 ^= ((/* implicit */_Bool) 9124614638475211373ULL);
                    var_40 = ((/* implicit */unsigned short) arr_23 [i_10]);
                }
                arr_51 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_23 [i_2]);
            }
        }
        var_41 ^= ((/* implicit */long long int) ((signed char) (_Bool)1));
    }
    var_42 ^= ((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((short) 3502179071717932429LL)))))) : (var_12));
}
