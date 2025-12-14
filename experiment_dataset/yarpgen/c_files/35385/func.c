/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35385
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
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((arr_3 [i_0]), (((((13180958896797705473ULL) ^ (4ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_0 [i_0] [i_1])), (arr_2 [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) arr_4 [i_4] [i_3] [i_1]);
                                var_18 = min((8223574646323142005ULL), (((/* implicit */unsigned long long int) 0)));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) min((526463055103322619LL), (((/* implicit */long long int) (short)(-32767 - 1)))));
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) (unsigned char)51);
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                {
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) -1441599593014258973LL);
                    /* LoopSeq 4 */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((min((((/* implicit */unsigned long long int) 5454380744950922839LL)), (arr_1 [i_7]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 5265785176911846142ULL)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)76))));
                            arr_22 [i_8] [i_8] [i_0] [i_8] [i_0] = ((/* implicit */long long int) var_15);
                            arr_23 [i_8] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) 8223574646323142005ULL);
                        }
                    }
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        arr_26 [i_9] [i_9] [i_0] [i_0] [i_5] [i_9] = ((((/* implicit */_Bool) -6695133969158246437LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) 2176708611U)) ? (((/* implicit */unsigned long long int) 2147418112U)) : (arr_16 [i_6] [i_0 + 1]))));
                        var_23 = arr_7 [i_0 - 1] [i_0 - 1] [i_9] [i_0] [i_0] [i_0 + 1];
                    }
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_11 = 3; i_11 < 19; i_11 += 3) /* same iter space */
                        {
                            var_24 = arr_1 [i_0 + 1];
                            var_25 = ((/* implicit */unsigned long long int) arr_7 [i_11] [i_11] [i_6] [i_11 - 1] [i_6] [i_11 - 1]);
                        }
                        for (signed char i_12 = 3; i_12 < 19; i_12 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) 4611686018427387904LL)) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) >> (((arr_34 [i_6] [i_6] [i_6] [i_10] [i_12] [i_12] [i_0 - 1]) - (2997400800002226858ULL)))))) ? (10223169427386409611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1])))))));
                            var_27 = ((/* implicit */long long int) ((unsigned char) (unsigned short)65535));
                        }
                        var_28 = ((/* implicit */unsigned char) ((14208067841836577152ULL) & (8223574646323142025ULL)));
                        arr_36 [i_6] [i_6] [i_0 - 1] [i_5] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) arr_28 [i_10] [i_6] [i_5] [i_0]);
                        var_29 = ((/* implicit */signed char) (unsigned char)3);
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        var_30 = ((/* implicit */long long int) max((11999165667969240509ULL), (((/* implicit */unsigned long long int) (~(2251799780130816LL))))));
                        var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8026682024048060174ULL))));
                        var_32 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_14 [i_0] [i_5] [i_0 - 1])) ? (((/* implicit */int) arr_27 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_27 [i_0] [i_0 - 1])))) * (((/* implicit */int) arr_14 [i_0] [i_5] [i_0 - 1]))));
                        arr_41 [i_0 - 1] [i_5] [i_13] = ((((/* implicit */_Bool) (signed char)43)) ? ((~(((/* implicit */int) (short)17887)))) : (((/* implicit */int) (unsigned short)47515)));
                        var_33 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)5268)), (10223169427386409610ULL)));
                    }
                }
            } 
        } 
        arr_42 [i_0 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)45386))));
    }
    for (int i_14 = 0; i_14 < 24; i_14 += 3) 
    {
        var_34 = ((/* implicit */unsigned char) ((-1441599593014258973LL) + (2940527723971856546LL)));
        var_35 = ((/* implicit */unsigned short) (+(var_10)));
        arr_47 [i_14] [i_14] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_46 [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_14]))) : (var_11))));
    }
    for (signed char i_15 = 2; i_15 < 17; i_15 += 3) /* same iter space */
    {
        var_36 = ((/* implicit */signed char) max((2811565119902778933LL), (((/* implicit */long long int) (unsigned short)0))));
        var_37 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((unsigned short)36230), (arr_50 [i_15 + 1]))))));
        var_38 = ((/* implicit */unsigned int) (+(arr_51 [i_15])));
    }
    for (signed char i_16 = 2; i_16 < 17; i_16 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_17 = 0; i_17 < 19; i_17 += 3) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 3) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_20 = 0; i_20 < 19; i_20 += 4) 
                        {
                            arr_64 [i_17] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1441599593014258973LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-41))) : (9223372036854775795LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7680))) : (arr_54 [i_16 + 1]))));
                            arr_65 [i_17] [i_17] [i_17] [i_19] [i_17] = ((/* implicit */unsigned short) var_6);
                            var_39 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 1441599593014258968LL)), (13180958896797705490ULL)));
                            arr_66 [i_16] [i_17] [i_18] [i_19] [i_17] = ((/* implicit */unsigned char) arr_4 [i_16] [i_18] [i_16]);
                        }
                        var_40 = ((/* implicit */unsigned char) ((2251799780130816LL) > (-2251799780130817LL)));
                        var_41 = ((/* implicit */unsigned char) arr_31 [i_19] [i_18] [i_16]);
                        var_42 = ((/* implicit */unsigned short) arr_19 [i_16] [i_17] [i_18] [i_19]);
                    }
                } 
            } 
        } 
        var_43 = ((/* implicit */unsigned int) ((unsigned long long int) min(((_Bool)0), (((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7680))))))));
    }
    var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)30030)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)72))) : (1441599593014258973LL)));
}
