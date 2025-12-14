/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211979
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
    var_19 += (short)-3900;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~((~(((3225239953U) >> (((/* implicit */int) (_Bool)1))))))));
        var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */int) (short)3894)) : (((/* implicit */int) arr_0 [i_0 - 3]))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [(_Bool)1] [(_Bool)1] [(short)0] &= ((/* implicit */unsigned char) ((((((16180525964525168074ULL) | (((/* implicit */unsigned long long int) 3479305180U)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_1] [i_1])), (var_2))))))) ? ((~(((((/* implicit */unsigned long long int) 3437934320U)) ^ (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3914)))));
            arr_9 [i_1] [i_2] [11U] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)33217))));
            var_21 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)7896))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_14) : (arr_3 [i_1])))))));
        }
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_4 = 2; i_4 < 11; i_4 += 3) /* same iter space */
            {
                arr_14 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) (unsigned short)65534))), (arr_13 [i_4 - 1] [(unsigned short)12] [i_1 + 1]))))));
                arr_15 [i_1] [i_3] [8U] &= ((/* implicit */unsigned long long int) min((((/* implicit */short) ((signed char) (unsigned short)65528))), (var_16)));
                arr_16 [i_1] [(unsigned short)11] [i_4] = ((/* implicit */unsigned long long int) var_4);
                arr_17 [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)42445))))) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) ((_Bool) 16180525964525168074ULL)))))) ? ((+(((((/* implicit */_Bool) (unsigned short)32312)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32766))) : (15045484534137270386ULL))))) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (signed char)83)))))))));
            }
            for (int i_5 = 2; i_5 < 11; i_5 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_11 [i_1] [(signed char)8] [i_5])) % (((/* implicit */int) (short)32767)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15045484534137270375ULL)) ? (((/* implicit */int) (_Bool)1)) : (2102693447))))))) : (((/* implicit */int) (!(arr_12 [i_5 - 2] [i_5 - 1] [i_5 + 1])))))))));
                arr_20 [i_1] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3319496910U) != (arr_3 [i_1]))))) : ((~(arr_3 [i_1])))));
                arr_21 [i_1] [i_1] [i_5] [i_5] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_19 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) arr_19 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_26 [i_1 - 1] [i_1 - 1] [i_1 - 1] [0ULL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_18 [i_3] [i_3] [i_5])) : (((/* implicit */int) (_Bool)1))))) / (4294967287U)));
                    arr_27 [i_6] [i_5] [(unsigned short)12] [i_5] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_1] [3ULL] [i_5] [i_5] [i_6])) << (((((/* implicit */int) (signed char)-35)) + (55)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_5] [i_1]) && (((/* implicit */_Bool) (unsigned short)65534)))))) : (((unsigned long long int) arr_18 [i_1] [i_1] [i_5]))));
                    arr_28 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        arr_32 [i_7] [2] [i_5] [2] [i_1] &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_5 + 1] [i_1 - 1] [i_1 - 1]))));
                        arr_33 [i_7] [i_5] [i_5] [i_5] [(_Bool)1] [11U] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1 - 1])) | (((/* implicit */int) (unsigned char)121))));
                    }
                }
            }
            arr_34 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_22 [i_1] [i_1] [i_3] [0ULL])))) ? (((/* implicit */int) (signed char)101)) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((short) ((unsigned short) (unsigned short)65535)))) : (((/* implicit */int) ((short) arr_29 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3]))));
        }
        for (short i_8 = 1; i_8 < 12; i_8 += 3) 
        {
            var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((574222477U), (((/* implicit */unsigned int) arr_30 [i_8 + 1] [i_8] [i_1 + 1] [i_1 + 1]))))) ? ((~(((/* implicit */int) (unsigned char)255)))) : ((~(((/* implicit */int) arr_1 [i_8 - 1] [i_8 - 1]))))));
            arr_38 [i_8] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) (~(((/* implicit */int) ((_Bool) (_Bool)1))))));
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) 18446744073709551615ULL))));
        }
        arr_39 [i_1] [i_1] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]))) : (var_5))));
        arr_40 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    var_27 &= ((/* implicit */short) (+(var_11)));
}
