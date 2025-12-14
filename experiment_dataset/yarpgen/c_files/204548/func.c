/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204548
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) arr_1 [i_0]);
        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) arr_0 [i_2] [i_0]);
                    arr_8 [i_1] = ((/* implicit */signed char) arr_0 [i_0] [i_2]);
                    var_19 = ((/* implicit */unsigned long long int) (-(2589061914U)));
                    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) (((_Bool)0) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) arr_6 [i_1]))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 9; i_3 += 4) /* same iter space */
    {
        var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)2530))) / (arr_0 [i_3 - 1] [i_3]));
        var_22 = ((/* implicit */_Bool) ((((((((/* implicit */int) (short)-2538)) ^ (((/* implicit */int) arr_4 [i_3] [i_3])))) + (2147483647))) << (((((((/* implicit */int) var_5)) + (22536))) - (25)))));
        /* LoopSeq 4 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_23 *= ((/* implicit */unsigned char) var_7);
            var_24 = ((/* implicit */unsigned int) (signed char)105);
            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-2530)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2544))) : (7957007893131691471ULL))) << (((/* implicit */int) ((arr_0 [i_4] [i_4]) < (var_2))))));
            var_26 = ((/* implicit */short) ((signed char) 4494803534348288ULL));
        }
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            var_27 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(-1LL)))) * (arr_3 [i_3 + 2])));
            var_28 = ((((/* implicit */_Bool) -1184162176)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3 - 1] [i_3 + 2] [i_3]))));
            var_29 = (((!(((/* implicit */_Bool) arr_3 [i_5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1184162174)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)6242)) || (((/* implicit */_Bool) -1184162158))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_3] [i_6] [i_6])) && (((/* implicit */_Bool) arr_14 [i_3 + 2] [i_6] [i_6]))));
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1184162175)) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_3] [i_6] [i_3])))))));
            arr_20 [i_3] = ((/* implicit */unsigned long long int) (-(arr_13 [i_3] [i_6] [4LL])));
        }
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            var_32 = ((/* implicit */_Bool) ((1LL) + (arr_13 [i_3] [i_3] [i_7])));
            var_33 = ((int) (unsigned short)19613);
        }
    }
    for (int i_8 = 1; i_8 < 9; i_8 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */short) (~(((arr_0 [i_8 + 2] [i_8 + 1]) & (arr_0 [i_8 - 1] [i_8 + 1])))));
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_6 [i_8]))))))) ? (((/* implicit */long long int) ((unsigned int) arr_15 [i_8 + 1] [i_9]))) : (min((((/* implicit */long long int) ((_Bool) (_Bool)0))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (-2LL) : (((/* implicit */long long int) ((/* implicit */int) (short)2032)))))))));
            var_36 = ((/* implicit */_Bool) (+(1535750313U)));
        }
        /* LoopSeq 3 */
        for (short i_10 = 1; i_10 < 8; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_11 = 1; i_11 < 9; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (int i_13 = 1; i_13 < 8; i_13 += 1) 
                    {
                        {
                            arr_40 [i_12] [i_8] [i_13] [i_12] [i_13] = (+(((((((/* implicit */int) ((signed char) arr_7 [i_8] [i_12] [i_13]))) + (2147483647))) >> (((/* implicit */int) var_3)))));
                            var_37 = ((/* implicit */short) (-(min(((~(1456883666U))), (((/* implicit */unsigned int) arr_39 [i_13] [i_12] [i_11] [i_10] [i_8]))))));
                            var_38 = ((/* implicit */int) arr_1 [i_12]);
                            var_39 = ((/* implicit */unsigned int) ((((((/* implicit */int) max((var_5), ((short)2803)))) << (((((/* implicit */int) (unsigned char)181)) - (171))))) ^ (((/* implicit */int) (signed char)-32))));
                        }
                    } 
                } 
            } 
            var_40 = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) > ((~(1184162178))))) || (((arr_5 [i_8]) >= (((/* implicit */int) (short)-31870))))));
            var_41 = ((/* implicit */short) arr_9 [i_8 - 1]);
            var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((3141016153U) > (((/* implicit */unsigned int) -10)))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)2540)) : (arr_29 [0ULL])))) ? (arr_19 [i_8] [i_8 + 2] [i_10]) : (((/* implicit */unsigned int) (~(arr_15 [i_8] [i_10])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_8] [(short)6] [i_8] [i_10] [i_10] [i_10]))))))));
        }
        for (long long int i_14 = 1; i_14 < 10; i_14 += 1) 
        {
            var_43 = ((min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) / (arr_0 [i_8] [i_14]))), (((/* implicit */unsigned int) min(((unsigned char)242), (arr_18 [i_14])))))) >= (min((min((arr_24 [i_8]), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1184162148))))))));
            arr_44 [i_8] [2] |= ((/* implicit */long long int) min((-1184162190), (min((((((/* implicit */_Bool) arr_15 [i_8] [i_14])) ? (((/* implicit */int) arr_6 [(_Bool)1])) : (((/* implicit */int) (short)-2532)))), (((/* implicit */int) ((((/* implicit */_Bool) 11490073057855687222ULL)) && (((/* implicit */_Bool) (unsigned short)63759)))))))));
            var_44 = ((/* implicit */_Bool) (short)-2033);
            var_45 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) && ((_Bool)1))))) <= (arr_12 [(unsigned char)8])));
        }
        for (unsigned char i_15 = 1; i_15 < 8; i_15 += 1) 
        {
            arr_47 [i_8] [i_8] [i_15] = (i_8 % 2 == zero) ? (((/* implicit */int) ((min((arr_26 [i_8]), (((/* implicit */unsigned long long int) (short)32759)))) << (((((/* implicit */int) arr_32 [i_8 + 2] [i_8] [i_15 + 2])) - (12169)))))) : (((/* implicit */int) ((min((arr_26 [i_8]), (((/* implicit */unsigned long long int) (short)32759)))) << (((((((/* implicit */int) arr_32 [i_8 + 2] [i_8] [i_15 + 2])) - (12169))) - (19013))))));
            var_46 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_28 [i_8] [i_15 - 1] [i_8])) | (((((/* implicit */int) arr_38 [i_15] [i_15] [i_15] [i_8] [i_8])) + (((/* implicit */int) arr_38 [i_8] [i_8] [i_15] [i_15] [i_15])))))), ((-(((/* implicit */int) ((1965618353U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49023))))))))));
        }
    }
    var_47 = ((/* implicit */signed char) var_0);
    var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (var_1)));
}
