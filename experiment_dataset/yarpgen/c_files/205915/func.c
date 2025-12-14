/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205915
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) ((unsigned long long int) 6ULL))));
                var_17 |= ((unsigned char) ((int) var_10));
                var_18 -= ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) var_3)));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    var_19 ^= ((/* implicit */unsigned long long int) ((signed char) ((unsigned char) (unsigned char)0)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) ((unsigned short) var_11)))))));
                                var_21 = ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) ((unsigned long long int) var_12))));
                                var_22 = ((int) ((long long int) var_3));
                                var_23 -= ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) (_Bool)1)));
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */int) ((_Bool) ((signed char) var_5)));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_5 = 4; i_5 < 12; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 4) /* same iter space */
        {
            arr_19 [i_6 - 1] = ((/* implicit */_Bool) ((int) ((unsigned short) arr_18 [i_5] [i_6 + 2] [i_5 - 4])));
            var_25 = ((/* implicit */int) ((unsigned short) ((unsigned long long int) ((unsigned int) (short)-1))));
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) ((unsigned long long int) var_4));
            var_27 = ((/* implicit */int) ((unsigned short) var_6));
        }
        var_28 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) var_9)));
        var_29 ^= ((/* implicit */int) ((unsigned long long int) ((_Bool) arr_21 [i_5 + 4] [i_5])));
        var_30 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) 10394964250068576378ULL)));
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((short) ((unsigned short) var_10))))));
    }
    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        var_32 |= ((/* implicit */short) ((int) ((unsigned short) 6072314982507438706ULL)));
        var_33 = ((/* implicit */unsigned char) ((int) ((_Bool) var_3)));
        var_34 *= ((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) (unsigned char)0)));
        var_35 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) var_4)));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                {
                    arr_30 [i_8] [i_10] [i_10] = ((/* implicit */unsigned char) ((_Bool) ((unsigned long long int) arr_25 [i_9] [i_10])));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            {
                                var_36 -= ((/* implicit */_Bool) ((unsigned int) ((signed char) arr_24 [i_8] [i_9])));
                                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((short) ((unsigned long long int) ((unsigned short) var_7)))))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */int) ((unsigned char) ((unsigned char) var_5)));
                    /* LoopSeq 3 */
                    for (int i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 1; i_14 < 14; i_14 += 4) 
                        {
                            var_39 &= ((/* implicit */unsigned long long int) ((unsigned int) ((short) var_8)));
                            var_40 = ((/* implicit */int) ((unsigned int) ((short) arr_38 [i_14 - 1] [i_14 + 2] [i_14 + 1] [i_14 + 1] [(unsigned char)15])));
                            var_41 = ((/* implicit */_Bool) ((int) ((unsigned short) var_15)));
                            var_42 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) arr_29 [i_14 + 1] [i_14 + 3] [i_14 + 3] [i_14])));
                        }
                        for (int i_15 = 2; i_15 < 15; i_15 += 1) 
                        {
                            var_43 &= ((/* implicit */unsigned long long int) ((short) ((unsigned char) 18446744073709551600ULL)));
                            var_44 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) arr_38 [i_8] [i_9] [i_10] [i_13] [i_15 - 2])));
                            var_45 |= ((/* implicit */unsigned short) ((int) ((short) (-2147483647 - 1))));
                        }
                        for (short i_16 = 0; i_16 < 18; i_16 += 1) 
                        {
                            var_46 = ((/* implicit */int) ((unsigned long long int) ((signed char) arr_38 [i_8] [i_9] [i_10] [i_13] [i_13])));
                            arr_45 [i_8] [i_8] [i_10] [i_10] [i_10] &= ((/* implicit */_Bool) ((long long int) ((_Bool) 0ULL)));
                            arr_46 [i_8] [i_8] [i_10] [i_10] [i_8] [i_16] = ((/* implicit */unsigned char) ((unsigned int) (short)(-32767 - 1)));
                            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) ((unsigned short) ((int) 281337537757184ULL))))));
                        }
                        var_48 = ((/* implicit */short) ((unsigned char) ((unsigned short) var_12)));
                    }
                    for (short i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
                    {
                        var_49 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) arr_33 [i_8])));
                        var_50 = ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) ((unsigned int) var_12))));
                        var_51 += ((unsigned long long int) ((unsigned short) var_6));
                        var_52 = ((/* implicit */int) ((_Bool) ((short) var_8)));
                    }
                    for (short i_18 = 0; i_18 < 18; i_18 += 1) /* same iter space */
                    {
                        var_53 = ((/* implicit */unsigned short) ((int) ((unsigned short) var_5)));
                        var_54 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) 303249528)));
                        var_55 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned char) arr_23 [i_18])));
                        arr_52 [i_18] [i_10] [i_10] [i_8] = ((short) ((signed char) arr_51 [i_18] [i_18] [i_10]));
                        var_56 = ((/* implicit */short) min((var_56), (((/* implicit */short) ((_Bool) ((int) 18446744073709551608ULL))))));
                    }
                    arr_53 [i_10] [i_8] [i_10] [i_10] = ((/* implicit */_Bool) ((unsigned short) ((unsigned char) arr_50 [i_10] [i_10] [i_10] [i_9] [i_8])));
                }
            } 
        } 
    }
    for (signed char i_19 = 2; i_19 < 10; i_19 += 3) 
    {
        var_57 = ((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_50 [i_19] [i_19 - 2] [i_19 + 1] [15] [i_19])));
        /* LoopNest 2 */
        for (unsigned char i_20 = 3; i_20 < 10; i_20 += 3) 
        {
            for (short i_21 = 0; i_21 < 12; i_21 += 2) 
            {
                {
                    var_58 = ((_Bool) ((short) var_1));
                    var_59 = ((unsigned char) ((_Bool) ((unsigned short) var_3)));
                    var_60 |= ((/* implicit */int) ((_Bool) ((short) -1942509330)));
                }
            } 
        } 
        var_61 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) (unsigned char)237)));
    }
    for (unsigned long long int i_22 = 1; i_22 < 10; i_22 += 4) 
    {
        arr_66 [i_22] = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) ((unsigned char) arr_55 [i_22] [i_22 + 1]))));
        var_62 = ((/* implicit */unsigned long long int) ((int) 9310012612509533543ULL));
        /* LoopSeq 1 */
        for (unsigned long long int i_23 = 0; i_23 < 11; i_23 += 2) 
        {
            var_63 = ((/* implicit */unsigned int) max((var_63), (((/* implicit */unsigned int) ((int) ((unsigned long long int) arr_40 [i_22] [i_22 - 1] [i_22 - 1] [i_22 + 1] [i_23]))))));
            /* LoopSeq 1 */
            for (int i_24 = 1; i_24 < 9; i_24 += 3) 
            {
                var_64 = ((/* implicit */unsigned char) ((int) ((short) 8191)));
                var_65 = ((/* implicit */int) ((unsigned short) 4503565267632128ULL));
            }
        }
        var_66 = ((/* implicit */unsigned int) ((long long int) ((unsigned int) -1626380399)));
    }
    var_67 = ((/* implicit */unsigned short) var_15);
}
