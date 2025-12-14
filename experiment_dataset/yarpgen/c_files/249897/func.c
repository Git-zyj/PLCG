/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249897
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */long long int) 1171921217)) - (arr_2 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1171921219)) >= (0ULL)))))));
            var_13 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]);
            var_14 = ((/* implicit */long long int) 3461052044628231331ULL);
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-68)) ? (5852374131786584198ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27)))))) ? (((/* implicit */int) var_6)) : (arr_1 [i_0] [i_1])));
        }
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) min((min((((arr_6 [i_0] [i_0]) + (((/* implicit */int) (signed char)-55)))), (arr_1 [i_0] [i_2]))), (arr_6 [i_0] [i_2])));
            arr_11 [i_2] [i_0] = arr_5 [i_2];
        }
    }
    for (long long int i_3 = 3; i_3 < 8; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                arr_20 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) 43806609)), (-463613099256638994LL))))) - (((439336843) - (((/* implicit */int) (signed char)-52))))));
                arr_21 [5ULL] [5ULL] [2U] [i_3 - 3] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)44))));
            }
            arr_22 [i_3 + 4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (max((6641630291482775396LL), (((/* implicit */long long int) arr_0 [i_3 + 4])))) : (((((arr_2 [i_3 + 3]) + (9223372036854775807LL))) << (((((arr_2 [i_3 + 3]) + (1190782564829547619LL))) - (49LL)))))));
            var_16 = ((/* implicit */int) arr_19 [i_3] [i_4] [i_4] [i_4]);
        }
        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (1872891770) : (arr_9 [(unsigned char)0] [(unsigned char)0])))) ? (((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (((/* implicit */int) arr_19 [i_3] [(short)0] [i_3] [i_3])) : (((/* implicit */int) var_9)))) : (min((-1949468091), (((/* implicit */int) arr_14 [i_3]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 4])) != (arr_9 [i_3 - 2] [(_Bool)0]))))) : (max((127U), (((/* implicit */unsigned int) arr_19 [i_3 + 1] [i_3] [i_3] [i_3 + 4]))))));
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) arr_2 [i_3])) + (3888518230412362606ULL))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 7244965974584094120ULL)))) > (((unsigned long long int) (signed char)-74)))))));
            var_19 = ((/* implicit */int) ((long long int) (signed char)92));
        }
    }
    for (unsigned long long int i_7 = 4; i_7 < 22; i_7 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            arr_34 [i_8] [0ULL] [i_8] = ((/* implicit */unsigned char) ((short) min((arr_33 [16] [i_7 - 2] [i_8]), (arr_33 [i_7] [i_7 - 2] [i_8]))));
            arr_35 [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) -1010227096);
        }
        for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            var_20 = ((/* implicit */short) ((min((((((/* implicit */_Bool) arr_37 [i_9])) ? (arr_27 [12LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9] [i_7] [i_7]))))), (((/* implicit */unsigned long long int) arr_29 [i_7])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9] [i_9])))));
            /* LoopSeq 2 */
            for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                var_21 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_32 [i_9] [i_7 - 3] [i_7 - 4])) / (arr_31 [i_7] [i_7 - 3] [i_9]))));
                arr_40 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)29787)), (((arr_29 [i_10]) << (((((-8267816767065850023LL) + (8267816767065850050LL))) - (27LL)))))))) ^ (((((/* implicit */_Bool) arr_32 [i_9] [i_7] [i_7 - 2])) ? (((/* implicit */unsigned long long int) min((6254162181705378102LL), (((/* implicit */long long int) arr_39 [i_7] [i_7 - 1] [i_9] [i_10]))))) : (((((/* implicit */unsigned long long int) 9)) / (arr_27 [i_10])))))));
                var_22 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) | (((unsigned long long int) 9317973892484047213ULL)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7)))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_23 |= ((/* implicit */int) arr_39 [i_7] [i_7] [4LL] [i_11]);
                var_24 = (i_9 % 2 == 0) ? ((((((+(arr_31 [i_7 - 4] [i_7 - 4] [i_9]))) + (2147483647))) >> (((arr_41 [14ULL] [i_7 + 1] [i_7 - 4] [i_11]) - (581627944))))) : ((((((((+(arr_31 [i_7 - 4] [i_7 - 4] [i_9]))) - (2147483647))) + (2147483647))) >> (((arr_41 [14ULL] [i_7 + 1] [i_7 - 4] [i_11]) - (581627944)))));
                var_25 = ((/* implicit */int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1510271265U)) ? (arr_36 [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) <= (max((((/* implicit */int) (signed char)-92)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) (short)7))))))));
                arr_43 [i_7] [i_9] [i_7] [i_9] = ((/* implicit */unsigned short) ((4132887481779342412LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            }
            arr_44 [i_9] = ((/* implicit */short) 352883275U);
        }
        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            arr_47 [i_7] [i_12] |= ((/* implicit */unsigned char) (+(min((((arr_46 [i_12] [i_12] [21ULL]) / (((/* implicit */long long int) arr_45 [(unsigned char)9] [(unsigned char)9])))), (arr_46 [i_7 - 1] [i_12] [i_12])))));
            arr_48 [i_12] [i_12] = ((/* implicit */unsigned long long int) var_4);
            arr_49 [i_12] [i_7] = ((/* implicit */unsigned long long int) ((_Bool) ((arr_45 [i_7 - 1] [i_7 - 2]) / (((/* implicit */int) (short)8668)))));
        }
        arr_50 [i_7] = (+((-(((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_7] [21LL])) || (((/* implicit */_Bool) var_11))))))));
        var_26 = ((/* implicit */int) ((2757220079946709692ULL) & (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7] [i_7]))) ^ (2456545218U)))), (arr_30 [i_7] [i_7])))));
        var_27 = ((/* implicit */short) (+(-3648062452387222834LL)));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-65), ((signed char)-99))))) | (2782836960U)));
    }
    var_29 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) 8660651049580895575ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (1650459317302785217LL))) < (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)35748)) * (((/* implicit */int) (unsigned short)35750)))))))), (min((((/* implicit */long long int) 1982982748)), (432345564227567616LL)))));
    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (4244878467U))) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 4244878467U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) ^ (((/* implicit */unsigned long long int) (~(var_10))))))));
}
