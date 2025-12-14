/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44363
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_17 |= ((/* implicit */int) ((((((/* implicit */_Bool) (~(4294967295U)))) ? (max((arr_9 [i_0] [(short)13] [i_2] [i_3] [(unsigned short)13]), (((/* implicit */unsigned long long int) (unsigned short)64120)))) : ((~(arr_9 [i_0] [i_1 - 1] [i_2] [i_3 - 1] [(unsigned char)12]))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (1940938705U) : (((/* implicit */unsigned int) arr_13 [i_4] [5ULL] [(_Bool)1] [1ULL] [0U])))))));
                                arr_14 [i_0] [i_0] [i_2] [i_3 - 1] [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [(unsigned char)5] [i_3 - 1] [(unsigned short)20]);
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (signed char)48))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (unsigned short)65535);
        var_20 = arr_15 [i_5] [i_5];
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            var_21 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (unsigned short)64120))) * (((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) arr_21 [(_Bool)1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_18 [(unsigned short)6] [7LL]))))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) + (18014398509480960ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)3)), (arr_20 [i_6] [(_Bool)1])))))))));
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (short)2032))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2)) ? (-9223372036854775801LL) : (((/* implicit */long long int) ((int) (short)-29503)))))) ? ((-(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_20 [i_6] [i_6])) : (((/* implicit */int) arr_18 [i_6] [0LL])))))) : (((/* implicit */int) arr_19 [i_7]))));
        }
        /* LoopNest 2 */
        for (unsigned int i_8 = 2; i_8 < 20; i_8 += 1) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_27 [i_6] [i_8] [i_8] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [(_Bool)1] [18] [i_6])) ? (((((((/* implicit */_Bool) arr_19 [i_8])) ? (arr_25 [(short)8] [i_9 - 1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9 - 1] [i_8 - 1] [i_8] [i_6]))))) << (((-14LL) / (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6] [i_9 - 1] [i_9 - 1] [(signed char)16]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_9 - 1] [12ULL] [(unsigned short)4])) ? (((/* implicit */int) arr_18 [i_8 - 2] [i_8 - 2])) : (((((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_18 [(_Bool)1] [(unsigned char)18])) : (2138049828))))))));
                    arr_28 [i_6] [i_8] = ((/* implicit */signed char) (unsigned char)244);
                }
            } 
        } 
        arr_29 [i_6] = ((/* implicit */int) arr_24 [(signed char)22] [i_6] [i_6]);
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 2138049841)) <= (7167850447012302549ULL)));
        var_25 = ((/* implicit */long long int) arr_20 [i_6] [i_6]);
    }
    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_11 = 2; i_11 < 13; i_11 += 1) 
        {
            for (signed char i_12 = 2; i_12 < 15; i_12 += 1) 
            {
                {
                    arr_40 [i_10] [i_10] [i_10] = (signed char)-112;
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 1; i_13 < 16; i_13 += 1) 
                    {
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) arr_39 [i_13] [i_12] [i_10]))));
                        var_27 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_2 [i_12])), ((((!(((/* implicit */_Bool) (unsigned short)37032)))) ? (max((((/* implicit */unsigned long long int) arr_22 [i_10] [i_10] [12])), (arr_38 [i_10] [i_12] [i_13]))) : (((/* implicit */unsigned long long int) ((arr_7 [(_Bool)1] [i_12] [3U] [i_10]) + (((/* implicit */int) (unsigned short)16699)))))))));
                    }
                    arr_43 [i_10] [8U] [i_11 + 1] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) 2944217512670321934ULL)) ? (((((/* implicit */_Bool) (+(arr_9 [i_12] [i_10] [i_11] [i_10] [i_10])))) ? (((((/* implicit */_Bool) arr_11 [20LL] [i_11 + 1] [5] [(unsigned short)8] [13ULL] [(unsigned short)8])) ? (15502526561039229682ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31193))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_12 + 1] [i_11 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [1U])))));
                    arr_44 [i_10] = ((/* implicit */unsigned char) ((signed char) max((max((arr_38 [i_10] [i_10] [10ULL]), (((/* implicit */unsigned long long int) arr_1 [19U])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [(signed char)13] [i_10]))))))));
                }
            } 
        } 
        var_28 ^= ((((/* implicit */_Bool) (short)-29503)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (9223372036854775807LL));
    }
    for (int i_14 = 2; i_14 < 20; i_14 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) -1866890033))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_14])) ? (-1753959741) : (((/* implicit */int) (_Bool)0))));
    }
    var_31 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_3)))) ? (((((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (var_10)))) + (((var_3) + (((/* implicit */long long int) var_5)))))) : (((((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (var_5)))) + (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) var_5)) : (4194303LL)))))));
}
