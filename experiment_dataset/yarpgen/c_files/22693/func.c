/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22693
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
    for (int i_0 = 3; i_0 < 6; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                var_14 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)16286)) == (((/* implicit */int) (short)18448))))) * (((/* implicit */int) (signed char)-107))));
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (signed char)111))));
                arr_5 [i_0 + 3] [i_1 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) var_11)))));
                var_15 -= (signed char)106;
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)-125)))) >> ((((~(((/* implicit */int) (signed char)117)))) + (128)))))), (((unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (short)18447)))))));
    var_17 = ((/* implicit */short) ((long long int) (~(((((/* implicit */_Bool) var_2)) ? (var_9) : (var_9))))));
    /* LoopSeq 4 */
    for (long long int i_2 = 2; i_2 < 8; i_2 += 4) 
    {
        arr_8 [i_2] = max((((/* implicit */int) max((((/* implicit */short) (unsigned char)48)), ((short)-7590)))), (((int) var_2)));
        arr_9 [i_2 + 1] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) min(((short)18447), (arr_7 [i_2])))), (1742466393108247211LL)))));
    }
    for (signed char i_3 = 1; i_3 < 8; i_3 += 1) 
    {
        var_18 = ((((/* implicit */_Bool) (short)16287)) ? (min((arr_11 [i_3 + 2]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [i_3])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)3))))) : (0U)))));
        arr_13 [i_3 + 2] = ((((((/* implicit */_Bool) var_0)) ? ((~(arr_2 [i_3]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_3] [i_3 + 2])) | (((/* implicit */int) var_13))))))) << ((((~((~(8936830510563328LL))))) - (8936830510563328LL))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 1) 
    {
        var_19 -= ((/* implicit */short) (-(((/* implicit */int) var_11))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (long long int i_6 = 3; i_6 < 16; i_6 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))) : (arr_19 [i_4 - 4])));
                    arr_25 [i_4] [i_4] [i_6 - 1] = var_8;
                    var_21 = ((/* implicit */short) ((arr_20 [i_4 + 2] [i_4 - 1] [i_4]) != (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 19; i_7 += 4) 
                    {
                        for (short i_8 = 3; i_8 < 19; i_8 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) var_12);
                                arr_30 [i_4] [i_4] [i_6] [i_4] [i_8] [(unsigned short)12] = ((/* implicit */short) ((((/* implicit */_Bool) 512U)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (signed char)23))));
                                var_23 = ((/* implicit */int) var_5);
                                arr_31 [i_4 - 2] [i_4 - 2] [i_4] [i_4] [i_7] |= var_11;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_29 [i_4] [i_4] [i_4] [i_4] [i_4 + 2] [i_4] [i_4])))) ? (((long long int) var_12)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16287)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) var_3)))))));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            for (long long int i_10 = 1; i_10 < 16; i_10 += 1) 
            {
                {
                    var_25 = ((/* implicit */long long int) var_12);
                    var_26 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-70))));
                    arr_38 [i_4] [i_9] [i_10] [i_10] = arr_15 [i_4];
                    var_27 = ((((arr_24 [16ULL] [(short)6] [(short)6] [i_4]) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)69)) - (65))));
                }
            } 
        } 
    }
    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_12 = 3; i_12 < 8; i_12 += 4) /* same iter space */
        {
            arr_45 [i_11] [(short)8] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
            var_28 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_39 [i_12 - 3])) ? (min((((/* implicit */unsigned long long int) 1296262829U)), (6049863527136461353ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))));
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 15LL))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_32 [i_11] [i_12 + 2] [i_11]))))))) ? (((/* implicit */unsigned long long int) min((arr_17 [i_12 - 2] [i_11]), (((/* implicit */long long int) ((((/* implicit */_Bool) 13ULL)) ? (((/* implicit */int) arr_23 [i_11])) : (((/* implicit */int) var_10)))))))) : (((((/* implicit */unsigned long long int) ((arr_34 [i_12]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_11] [(signed char)6] [i_12])))))) | (((((/* implicit */_Bool) 15LL)) ? (((/* implicit */unsigned long long int) 0U)) : (0ULL)))))));
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)101))))) : (((/* implicit */int) ((-7195453576573274881LL) < (((/* implicit */long long int) 8)))))));
        }
        /* vectorizable */
        for (long long int i_13 = 3; i_13 < 8; i_13 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_11] [i_13 + 2] [i_14]))) : (arr_18 [i_14] [i_14] [i_14])));
                var_32 = ((/* implicit */unsigned long long int) var_12);
                /* LoopNest 2 */
                for (unsigned int i_15 = 2; i_15 < 8; i_15 += 3) 
                {
                    for (unsigned long long int i_16 = 1; i_16 < 10; i_16 += 4) 
                    {
                        {
                            arr_57 [i_16] [i_11] [i_13 - 2] [i_13 - 2] [i_11] [i_11] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_11] [i_16 + 1])) || (((/* implicit */_Bool) var_4)))));
                            var_33 = ((/* implicit */short) var_0);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_17 = 1; i_17 < 10; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_18 = 3; i_18 < 9; i_18 += 2) 
                {
                    for (unsigned char i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_62 [i_17] [(signed char)5] [(short)1] [i_17 + 1] [i_18 - 2] [i_18])) ? (((/* implicit */int) arr_6 [i_13 + 2] [i_17 - 1])) : (((/* implicit */int) arr_28 [i_11] [i_17] [i_13] [i_13] [i_11]))));
                            var_35 = ((/* implicit */short) (signed char)-64);
                        }
                    } 
                } 
                arr_66 [i_17] [i_11] [i_17] = ((/* implicit */signed char) var_0);
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-56)) != (((/* implicit */int) (unsigned char)0))));
            }
            arr_67 [i_11] = ((/* implicit */long long int) arr_28 [i_11] [12LL] [i_11] [i_13] [i_11]);
            var_37 &= ((/* implicit */long long int) arr_14 [(signed char)10]);
            /* LoopSeq 2 */
            for (unsigned int i_20 = 2; i_20 < 10; i_20 += 4) 
            {
                var_38 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_15 [i_20])) : (((/* implicit */int) var_10))));
                /* LoopNest 2 */
                for (unsigned int i_21 = 0; i_21 < 11; i_21 += 3) 
                {
                    for (int i_22 = 1; i_22 < 10; i_22 += 3) 
                    {
                        {
                            arr_77 [i_13 + 1] [i_20] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_20] [i_20 - 1] [i_20 - 1] [i_20 + 1] [i_11])) >= (((/* implicit */int) arr_28 [i_20 - 2] [i_20 - 2] [i_20 - 2] [i_20 - 2] [i_11]))));
                            arr_78 [i_11] = ((/* implicit */short) arr_14 [i_11]);
                            var_39 += ((/* implicit */short) ((((/* implicit */int) (short)31)) == (((/* implicit */int) arr_15 [i_20]))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
            }
            for (short i_23 = 0; i_23 < 11; i_23 += 1) 
            {
                var_41 = ((/* implicit */unsigned long long int) 1208699419U);
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 3) 
                {
                    for (unsigned char i_25 = 1; i_25 < 10; i_25 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */short) (unsigned short)17945);
                            arr_85 [i_11] [i_13] [i_23] [i_24] [i_25] [i_11] = ((/* implicit */unsigned long long int) 4394008687180677730LL);
                            var_43 = ((/* implicit */int) arr_49 [i_11] [i_13 + 1] [i_11]);
                            var_44 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)47590))))));
                        }
                    } 
                } 
                var_45 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (signed char)26)))))) : (var_9)));
                var_46 = ((/* implicit */int) var_9);
            }
            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned char)16))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) arr_80 [i_11] [i_11] [i_13 + 1])) : (((/* implicit */int) (unsigned char)186))))));
        }
        for (int i_26 = 0; i_26 < 11; i_26 += 1) 
        {
            var_48 = ((/* implicit */unsigned long long int) (short)15065);
            var_49 = ((/* implicit */signed char) 1896771203U);
            var_50 |= ((/* implicit */unsigned char) max((max((((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (signed char)4))))), ((-(((/* implicit */int) (unsigned short)17945)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (var_0))))));
            arr_89 [i_11] [i_11] [i_11] = ((/* implicit */short) max(((~(((/* implicit */int) arr_48 [i_11] [i_26])))), (((((/* implicit */int) var_2)) | (((/* implicit */int) var_11))))));
        }
        var_51 -= ((/* implicit */long long int) (~(((/* implicit */int) (short)15081))));
    }
}
