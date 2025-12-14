/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211766
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = (signed char)53;
                arr_6 [i_0] [1LL] = (_Bool)1;
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    arr_10 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                    var_15 = ((/* implicit */int) arr_2 [i_0]);
                }
                /* LoopNest 3 */
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_3] [i_4] [(unsigned short)0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                                arr_19 [6U] [(unsigned short)1] [i_0] [i_1] [6U] = ((/* implicit */short) arr_0 [i_0] [i_0]);
                                arr_20 [i_0] [0LL] [i_4] [i_0] = arr_3 [i_5] [i_0] [18];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_7))) && (((/* implicit */_Bool) var_8))))) >> (((int) 7U)))))));
    /* LoopSeq 3 */
    for (int i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) (unsigned short)7550);
                        arr_32 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((short)27204), (((short) arr_13 [i_6] [i_6] [i_8] [8LL])))))));
                        var_18 += ((/* implicit */unsigned short) (~(((/* implicit */int) arr_27 [17U] [i_6] [i_6] [i_6]))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) max(((signed char)-79), (((/* implicit */signed char) arr_3 [i_6] [i_6] [(signed char)4]))));
        arr_33 [i_6] [(signed char)17] = ((/* implicit */unsigned int) arr_3 [(short)18] [i_6] [i_6]);
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            arr_39 [i_10] [i_11] [i_11] = ((/* implicit */int) (short)-12757);
            arr_40 [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) var_13);
        }
        var_20 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)12757))) == (arr_2 [i_10])));
        var_21 ^= ((/* implicit */short) ((arr_21 [i_10]) << (((((/* implicit */int) arr_15 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) - (7357)))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2017649406U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (((arr_34 [14LL]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_23 = ((((/* implicit */int) ((((/* implicit */int) (short)12756)) == ((+(((/* implicit */int) (short)-12758))))))) == (((/* implicit */int) (_Bool)1)));
        var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned short) arr_28 [i_12] [i_12] [13U])), (var_6)));
        var_25 += ((/* implicit */int) arr_24 [(signed char)4] [i_12] [i_12]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 3) 
        {
            var_26 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (short)12729)))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_12])) && (((/* implicit */_Bool) arr_44 [i_12])))))));
            arr_48 [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)12757)) ? (((/* implicit */int) (short)12770)) : (((/* implicit */int) arr_11 [i_12] [i_12] [i_13] [i_12])))) | (((((/* implicit */_Bool) arr_7 [i_13] [i_13])) ? (((/* implicit */int) arr_15 [i_12] [i_12] [i_12] [i_12] [i_13] [i_13])) : (var_7)))));
        }
        /* vectorizable */
        for (short i_14 = 0; i_14 < 15; i_14 += 1) 
        {
            var_27 = ((((/* implicit */unsigned int) ((int) arr_12 [i_12] [i_12] [i_14] [i_14]))) | (((((/* implicit */_Bool) var_5)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19853))))));
            /* LoopSeq 1 */
            for (long long int i_15 = 1; i_15 < 14; i_15 += 2) 
            {
                var_28 = ((/* implicit */long long int) ((unsigned int) 7168455422773147586LL));
                arr_53 [i_12] [i_12] = (i_12 % 2 == zero) ? (((/* implicit */_Bool) ((2147483647) | (((((arr_37 [i_12] [i_12] [(short)3]) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_12] [i_12] [i_15])) - (182)))))))) : (((/* implicit */_Bool) ((2147483647) | (((((((arr_37 [i_12] [i_12] [(short)3]) - (2147483647))) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_12] [i_12] [i_15])) - (182))))))));
                arr_54 [i_12] [i_14] [i_15 - 1] [i_15] = ((/* implicit */unsigned int) arr_4 [i_12]);
            }
        }
        /* vectorizable */
        for (unsigned short i_16 = 1; i_16 < 14; i_16 += 4) 
        {
            var_29 ^= ((/* implicit */short) arr_11 [i_12] [i_12] [i_16] [(unsigned short)17]);
            var_30 = arr_16 [i_12] [(short)17] [i_16] [i_12] [i_12] [i_12];
        }
        /* vectorizable */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_60 [i_12] [(short)7] [i_12] = ((/* implicit */_Bool) ((((arr_31 [2U] [i_17] [i_17] [i_17]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57154))))) * (((/* implicit */unsigned int) ((((/* implicit */int) (short)12758)) >> (((((/* implicit */int) arr_24 [i_12] [i_12] [0])) + (118))))))));
            /* LoopSeq 1 */
            for (unsigned int i_18 = 0; i_18 < 15; i_18 += 1) 
            {
                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) arr_38 [10U] [i_17] [i_18]))));
                arr_63 [i_18] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-12781))));
                var_32 = ((/* implicit */_Bool) arr_56 [i_12] [i_12]);
                var_33 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_26 [i_18])) ? (((/* implicit */int) arr_62 [i_12] [i_18] [i_18] [i_18])) : (((/* implicit */int) var_8))))));
                /* LoopSeq 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (var_4)));
                    arr_68 [i_12] [i_12] = ((/* implicit */unsigned char) (short)-26949);
                }
                for (unsigned short i_20 = 1; i_20 < 14; i_20 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 1; i_21 < 12; i_21 += 2) 
                    {
                        var_35 = ((/* implicit */short) -881992861770336011LL);
                        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (signed char)56))));
                        arr_73 [(unsigned char)2] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) arr_38 [i_12] [i_12] [i_12]);
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) 134217728))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_76 [i_20] [i_17] [8U] [i_12] [i_12] [i_20] [i_20] = var_13;
                        var_38 = ((/* implicit */unsigned int) 881992861770336038LL);
                    }
                    for (unsigned short i_23 = 0; i_23 < 15; i_23 += 2) 
                    {
                        arr_79 [i_12] [10LL] [i_18] [1U] [i_12] = ((/* implicit */_Bool) (short)-12771);
                        var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) arr_9 [i_23] [20LL] [18LL] [i_23]))));
                        arr_80 [i_12] [i_17] [i_18] [i_17] [i_12] [i_12] = ((/* implicit */_Bool) arr_71 [i_12] [i_20] [(unsigned short)8] [i_17] [i_17] [i_12]);
                    }
                    for (long long int i_24 = 0; i_24 < 15; i_24 += 3) 
                    {
                        var_40 = var_11;
                        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_12] [i_17] [i_17] [i_18] [(_Bool)1] [6LL])) ? (((/* implicit */long long int) arr_34 [i_17])) : (-3407987197655737701LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_59 [i_12] [i_24])) + (arr_75 [(_Bool)0] [i_20 + 1] [7LL] [i_18] [i_17] [(unsigned short)10])))) : (((((/* implicit */_Bool) arr_51 [(short)14] [i_17] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_12] [i_12] [i_18] [i_24]))) : (260152478U)))));
                    }
                    for (int i_25 = 3; i_25 < 14; i_25 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) 556781710))));
                        var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (signed char)6))));
                        var_44 = ((/* implicit */signed char) ((((/* implicit */int) (short)12755)) % (((/* implicit */int) (signed char)-23))));
                    }
                    arr_87 [i_17] [i_17] [i_12] [i_18] [i_17] [11U] = ((/* implicit */_Bool) ((((arr_81 [(signed char)10] [i_17] [(_Bool)1] [(signed char)10] [i_17] [i_17] [i_12]) / (arr_45 [i_20] [i_12] [i_12]))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_64 [i_12] [i_20])))))));
                    var_45 = ((/* implicit */signed char) min((var_45), (var_2)));
                }
            }
            var_46 += ((/* implicit */long long int) ((((/* implicit */long long int) ((var_4) % (((/* implicit */unsigned int) var_12))))) > (var_5)));
        }
    }
}
