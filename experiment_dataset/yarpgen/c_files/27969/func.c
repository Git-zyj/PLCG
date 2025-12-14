/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27969
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (signed char)-29)))))) ? (((arr_3 [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) ((unsigned char) ((unsigned short) var_5))))));
                var_18 = ((/* implicit */signed char) (((-(((var_6) / (arr_0 [i_1 - 2]))))) <= (((((/* implicit */_Bool) ((unsigned char) arr_3 [i_1 + 3] [i_0] [i_0]))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_1 - 2])) : (arr_0 [(_Bool)1])))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)28)) >> (((((/* implicit */int) (signed char)112)) - (87)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)179))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) var_6)) : (var_16))))) >> (((min((((/* implicit */int) var_17)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-118)) : (var_6))))) + (126)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        arr_9 [i_2] &= ((/* implicit */signed char) ((short) arr_1 [i_2] [i_2]));
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            arr_14 [i_2] = ((/* implicit */long long int) arr_8 [i_2] [i_2]);
            arr_15 [i_2] [i_3] |= ((/* implicit */short) ((((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3] [i_2])) ? (((/* implicit */int) (short)-32766)) : (arr_0 [i_2]))))));
            var_19 = ((/* implicit */signed char) arr_11 [3LL]);
            arr_16 [i_2] = ((/* implicit */long long int) ((signed char) (signed char)72));
        }
        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (short)-28785)) : (((/* implicit */int) arr_19 [i_2] [i_4]))))))));
            var_21 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_4] [(unsigned char)1])))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
        {
            arr_27 [i_5] [i_6 + 1] = arr_25 [i_6];
            var_22 += ((/* implicit */long long int) ((((/* implicit */int) (signed char)-29)) == (((/* implicit */int) (unsigned char)255))));
            arr_28 [i_5] [i_6 + 2] = ((/* implicit */long long int) ((short) ((int) 1570799667)));
            arr_29 [i_5] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_6 + 2] [i_6 - 1] [i_6 - 1]))));
        }
        arr_30 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5]))));
        var_23 |= ((/* implicit */short) (signed char)-26);
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28803))) : (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23431)))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_32 [i_7] [i_7]), (arr_32 [i_7] [i_7])))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)0))));
        var_26 = 134217696;
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            var_27 = ((/* implicit */long long int) ((arr_0 [i_8]) / (((/* implicit */int) (unsigned char)101))));
            arr_37 [i_7] [i_8] = ((/* implicit */long long int) ((int) ((long long int) var_6)));
            var_28 -= ((/* implicit */_Bool) (~(arr_0 [i_7])));
        }
        for (long long int i_9 = 2; i_9 < 17; i_9 += 2) 
        {
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) (unsigned short)27143))), (((unsigned short) var_0)))))));
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_9])) ? (((((((/* implicit */_Bool) arr_38 [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_1 [i_7] [i_7])) : (-1101420334))) % (((/* implicit */int) min((arr_35 [i_9 + 1]), (((/* implicit */unsigned short) (_Bool)1))))))) : ((+(((/* implicit */int) arr_3 [i_9 - 1] [i_7] [i_7]))))));
            arr_40 [i_9] [i_9] [i_9] = (!(((/* implicit */_Bool) ((unsigned long long int) arr_31 [i_9 + 2]))));
        }
        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            var_31 &= ((/* implicit */unsigned char) min((((((/* implicit */int) ((short) arr_42 [i_7] [i_7]))) + (((/* implicit */int) arr_31 [i_10])))), (((int) min((((/* implicit */int) var_14)), (var_6))))));
            arr_45 [(_Bool)1] [i_10] [i_10] = (+(((((/* implicit */int) min(((signed char)-72), (((/* implicit */signed char) (_Bool)1))))) / (((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) arr_32 [i_7] [i_10])) : (((/* implicit */int) (signed char)114)))))));
            /* LoopSeq 2 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                arr_48 [i_7] [i_7] = ((/* implicit */unsigned long long int) (_Bool)1);
                arr_49 [i_7] [i_10] [9ULL] = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned char)149))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_11 - 1] [i_10]))) / (var_13))))));
                arr_50 [(short)18] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (min((((/* implicit */unsigned long long int) (signed char)-97)), (var_13))) : (((/* implicit */unsigned long long int) arr_44 [(_Bool)1] [i_10])))), (((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) (unsigned char)234))))))));
            }
            for (short i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                arr_53 [3ULL] [i_10] [i_12] = ((/* implicit */unsigned char) (((!(arr_51 [i_7] [(unsigned char)14]))) ? (((arr_51 [i_12] [i_12]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_7] [i_12]))) : (arr_44 [i_12] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_44 [i_7] [i_12]))))));
                arr_54 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (var_16)))), (((((/* implicit */_Bool) -8446974428150048102LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) : (arr_36 [(signed char)2]))))) << (((/* implicit */int) arr_51 [i_7] [i_10]))));
                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [i_7]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7])) ? (arr_36 [i_10]) : (((/* implicit */long long int) arr_34 [i_10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [8U] [i_10]))) : (((((/* implicit */_Bool) arr_36 [i_12])) ? (arr_44 [i_12] [i_10]) : (((/* implicit */unsigned int) var_6)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_43 [i_12] [i_10])), (arr_35 [i_7])))) ? ((((_Bool)1) ? (arr_44 [i_7] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(unsigned char)16]))))) : (((/* implicit */unsigned int) (+((-2147483647 - 1))))))))))));
            }
        }
    }
}
