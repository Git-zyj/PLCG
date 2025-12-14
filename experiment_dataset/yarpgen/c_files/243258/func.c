/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243258
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
    var_20 = ((/* implicit */unsigned int) var_13);
    var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_7)) ? (min((var_9), (((/* implicit */unsigned int) var_16)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_6))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_17)))))));
    var_22 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [1ULL] [7ULL] = ((/* implicit */signed char) var_6);
        arr_3 [(short)11] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_23 = ((/* implicit */unsigned char) min((var_23), (var_7)));
        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) min((((/* implicit */int) var_12)), (var_2)))))))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [2ULL] [2ULL])), (min(((~(((/* implicit */int) (short)32767)))), (((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (short)32743)) : (((/* implicit */int) (short)32743))))))));
            arr_11 [i_2] = ((/* implicit */long long int) (((+(((((/* implicit */int) var_1)) << (((((((/* implicit */int) (short)-1843)) + (1861))) - (17))))))) != (((/* implicit */int) var_17))));
            var_25 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1843))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_19))))) : (min((((/* implicit */long long int) (unsigned short)23574)), (arr_0 [i_1]))))), (((/* implicit */long long int) var_8))));
        }
        /* LoopSeq 4 */
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            arr_15 [11LL] [11LL] [i_3] = ((/* implicit */short) min(((~(((/* implicit */int) var_17)))), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_19))))) && (((/* implicit */_Bool) (unsigned char)118)))))));
            var_26 = ((/* implicit */short) var_2);
            var_27 = ((/* implicit */long long int) min((min((arr_9 [(unsigned char)3] [i_3]), (arr_9 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_8 [i_3]), (arr_8 [(signed char)7])))) <= (((/* implicit */int) max((((/* implicit */unsigned short) (short)-13104)), (arr_13 [(unsigned short)16])))))))));
            var_28 = ((/* implicit */unsigned char) (-((-(arr_9 [i_3] [i_3])))));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                arr_18 [i_1] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) var_6);
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    for (unsigned char i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        {
                            arr_24 [i_1] [i_3] [i_6] [i_5] [i_3] [i_3] = ((/* implicit */short) (((~((~(arr_6 [i_6] [i_4] [i_6 + 3]))))) % (((/* implicit */long long int) ((/* implicit */int) var_17)))));
                            arr_25 [i_6] [i_6] [i_1] [i_1] [(unsigned char)15] [i_5 + 2] [5U] = ((/* implicit */unsigned int) (+(max((var_2), (((((/* implicit */int) arr_14 [i_1])) << (((((/* implicit */int) var_17)) - (58285)))))))));
                            arr_26 [i_1] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_6 + 4] [i_6 + 4] [i_6 + 3]), (max((((/* implicit */int) arr_23 [i_1] [i_4] [(_Bool)1] [(_Bool)1])), (arr_22 [i_1] [i_3] [i_3] [i_5] [i_6 + 3])))))) ? (min((((/* implicit */int) (unsigned short)0)), ((-(((/* implicit */int) (unsigned short)55755)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_3] [i_3] [i_4] [i_3]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(short)8])) ? (((/* implicit */int) arr_13 [i_1])) : (((/* implicit */int) (short)1837))))))))));
                        }
                    } 
                } 
            }
        }
        for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_1] [14LL]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1] [i_7] [14U]))))))) : (arr_9 [i_1] [i_7])));
            /* LoopNest 2 */
            for (unsigned int i_8 = 2; i_8 < 15; i_8 += 3) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_34 [i_8] [i_7] [i_7] [16U] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-1755153881) : (-1453756049)))) ? (((/* implicit */int) min(((short)-1839), ((short)32767)))) : (((/* implicit */int) (unsigned char)151)))) / (((/* implicit */int) var_6))));
                        var_30 = ((/* implicit */_Bool) (short)-32741);
                    }
                } 
            } 
            arr_35 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_32 [i_7] [i_7])))), (((/* implicit */int) var_18))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_31 = ((/* implicit */short) ((((/* implicit */int) var_7)) % (((/* implicit */int) arr_14 [15U]))));
            arr_40 [i_10] [i_10] = ((/* implicit */unsigned char) min((max((var_12), (arr_16 [i_1] [i_10] [(unsigned short)14] [i_1]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15)))))));
            var_32 += ((/* implicit */unsigned long long int) arr_13 [(signed char)6]);
            var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_1])) ? (min((((/* implicit */int) ((((/* implicit */int) arr_8 [i_10])) != (((/* implicit */int) (signed char)104))))), (arr_7 [i_10] [i_1] [12]))) : ((+(((/* implicit */int) var_8))))));
        }
        for (unsigned long long int i_11 = 3; i_11 < 16; i_11 += 1) 
        {
            arr_43 [(short)3] = ((/* implicit */unsigned short) (((~(min((((/* implicit */long long int) arr_5 [16])), (var_13))))) >> (((max((var_13), (((/* implicit */long long int) arr_19 [i_11 - 2] [i_11 + 1])))) + (2029765212LL)))));
            /* LoopSeq 3 */
            for (short i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))));
                arr_47 [i_1] [i_1] [i_11] [i_12] = ((/* implicit */int) min((((/* implicit */long long int) (signed char)106)), (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) & (((/* implicit */int) (unsigned short)55769))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_12]))) : (var_0))) : (((/* implicit */long long int) (-(((/* implicit */int) var_12)))))))));
                arr_48 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)118);
                arr_49 [i_1] [i_1] [i_12] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-8747)) : (arr_12 [i_1] [i_1] [i_12]))))))), ((~(((/* implicit */int) max((((/* implicit */unsigned short) arr_28 [i_1] [i_11])), (arr_31 [(_Bool)1] [(unsigned short)5]))))))));
            }
            for (int i_13 = 2; i_13 < 15; i_13 += 1) 
            {
                arr_53 [i_13] [i_11 - 1] [i_13 + 1] = ((/* implicit */int) max((((/* implicit */long long int) min((arr_32 [i_13] [i_13]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_17)))))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_7 [(short)7] [i_11 - 3] [i_11])) ? (var_13) : (((/* implicit */long long int) arr_52 [(unsigned short)2]))))))));
                var_35 = ((/* implicit */unsigned int) arr_21 [i_13 + 1] [i_13 - 1] [i_13 + 2]);
            }
            for (unsigned char i_14 = 0; i_14 < 17; i_14 += 1) 
            {
                var_36 = ((/* implicit */short) (unsigned short)47591);
                arr_58 [i_11] [(signed char)13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_9)) | (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_11] [i_14]))) ^ (9463733970276292769ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))))));
            }
        }
        arr_59 [i_1] = ((/* implicit */unsigned char) var_10);
        arr_60 [i_1] = ((/* implicit */unsigned short) (unsigned char)180);
    }
}
