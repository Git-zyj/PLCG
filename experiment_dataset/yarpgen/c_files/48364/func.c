/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48364
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (((+(((((/* implicit */int) var_2)) | (-178538259))))) ^ (((/* implicit */int) (unsigned short)14423))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((-647242237), ((((((-(((/* implicit */int) arr_1 [2ULL] [i_0])))) + (2147483647))) << (((((((/* implicit */int) ((signed char) var_16))) + (44))) - (15)))))));
        var_17 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0 - 3])))))));
        arr_4 [4LL] = ((/* implicit */int) 1070152850373000660ULL);
        arr_5 [i_0] [i_0 - 3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) var_2)))) : (((/* implicit */int) var_14)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_10 [i_1] [(signed char)17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) (signed char)-109))))))));
        arr_11 [i_1] [(_Bool)1] = ((/* implicit */long long int) (((-(((/* implicit */int) var_9)))) <= (min((((/* implicit */int) arr_8 [i_1])), (((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)117))))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    {
                        arr_18 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_2]))) % (max((((/* implicit */unsigned long long int) var_14)), (18446744073709551614ULL)))));
                        var_18 += ((/* implicit */unsigned short) arr_17 [7ULL] [7ULL] [i_3] [i_4]);
                    }
                } 
            } 
        } 
        arr_19 [i_1] [i_1] = arr_16 [10] [i_1] [i_1];
    }
    var_19 = ((/* implicit */long long int) var_2);
    var_20 = ((/* implicit */_Bool) ((unsigned long long int) var_15));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_5 = 2; i_5 < 23; i_5 += 2) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_5 + 1])) ? (((/* implicit */int) arr_20 [i_5 + 1])) : (((/* implicit */int) arr_20 [i_5 + 1])))))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_5 - 2])) ? (((((/* implicit */_Bool) arr_20 [i_5 - 2])) ? (2603834388U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_7)))))))))));
        /* LoopSeq 2 */
        for (signed char i_6 = 1; i_6 < 23; i_6 += 1) 
        {
            arr_24 [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_5 + 1] [i_6])) <= (((((/* implicit */int) (unsigned short)2473)) & (((/* implicit */int) arr_22 [i_6]))))));
            arr_25 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5 - 2]))) * (18446603336221196288ULL)));
            var_23 = (~(((/* implicit */int) var_8)));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_24 = ((/* implicit */signed char) ((var_12) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_27 [i_7])))))));
            arr_28 [i_5 - 1] [i_7] = ((/* implicit */unsigned int) var_4);
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 3) 
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_29 [i_5 - 2]))));
            arr_31 [i_5] [(short)11] [i_5 - 2] = ((/* implicit */signed char) (unsigned short)38921);
            arr_32 [(unsigned short)16] [i_8 + 1] = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_5 + 1])) & (((/* implicit */int) (signed char)28))));
            var_26 -= ((/* implicit */short) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_2))));
        }
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 21; i_12 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((arr_29 [i_5 - 1]) + (9223372036854775807LL))) << (((649255509U) - (649255509U))))))));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (short)-15037))));
                            arr_41 [i_12] [(signed char)23] [(signed char)8] = ((/* implicit */short) (+(((/* implicit */int) arr_36 [i_11] [(unsigned char)5] [i_11] [i_12 + 3]))));
                            var_29 = ((/* implicit */unsigned char) ((((-647242237) + (2147483647))) << (((((/* implicit */int) arr_40 [i_5 - 1] [i_5 - 1] [i_12 - 3])) - (235)))));
                        }
                    } 
                } 
                var_30 ^= ((/* implicit */signed char) arr_40 [i_5 + 1] [i_5 + 1] [i_5 + 1]);
            }
            arr_42 [23] [23] [i_9] = ((/* implicit */unsigned short) ((unsigned char) arr_23 [i_5 - 2] [i_9]));
            /* LoopSeq 2 */
            for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                arr_45 [i_5] [i_9] = ((/* implicit */long long int) ((((-647242260) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
            }
            for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                var_32 -= var_2;
                /* LoopSeq 3 */
                for (unsigned int i_15 = 2; i_15 < 20; i_15 += 1) 
                {
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) arr_35 [(unsigned short)18] [i_9] [21U] [i_15]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 1; i_16 < 22; i_16 += 4) 
                    {
                        var_34 = ((/* implicit */int) (+(arr_39 [i_9] [i_14] [i_9] [i_16])));
                        var_35 -= ((/* implicit */_Bool) ((signed char) arr_35 [19ULL] [i_9] [i_9] [i_16]));
                        arr_53 [i_5 + 1] [i_5 + 1] [i_14] [i_15] [i_15 - 1] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))) == (arr_29 [i_5 - 1])));
                        arr_54 [(unsigned char)16] [i_15] [i_14] [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -647242240)) <= (17376591223336550962ULL)));
                    }
                    for (signed char i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        var_36 += ((/* implicit */_Bool) 4527738400388320946ULL);
                        arr_58 [i_5 + 1] [i_15] [i_14] [i_15 + 1] [i_15 + 1] = var_8;
                    }
                }
                for (unsigned char i_18 = 0; i_18 < 24; i_18 += 3) 
                {
                    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_56 [i_5] [i_9] [i_5 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20052))) : (17376591223336550956ULL)));
                    arr_62 [i_5] [i_5] [i_5 - 2] [i_5] [i_5] [16] = ((/* implicit */unsigned int) (!(arr_50 [i_9])));
                    arr_63 [i_5 + 1] [i_9] [i_14] [i_14] [18U] [(unsigned short)7] = ((/* implicit */long long int) (+((+(816650814U)))));
                    var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_16))) ? ((-(var_3))) : (((/* implicit */unsigned long long int) 2620531261U))));
                }
                for (unsigned short i_19 = 1; i_19 < 23; i_19 += 3) 
                {
                    arr_68 [16] [i_5] [i_14] [i_19] [i_5] [(unsigned short)16] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_19 + 1] [i_19 + 1] [i_19] [i_19 - 1]))) >= (((2620531252U) ^ (((/* implicit */unsigned int) 748571915))))));
                    var_39 *= ((/* implicit */short) (!(((/* implicit */_Bool) 2568073300U))));
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_5 + 1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_5 - 1] [i_19] [i_19 - 1] [i_19 + 1]))) : (2463463319U)));
                }
                arr_69 [i_5 - 1] [i_5 - 1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (-1)));
            }
            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) arr_50 [i_9]))));
        }
        for (signed char i_20 = 0; i_20 < 24; i_20 += 3) 
        {
            var_42 = var_8;
            var_43 = ((/* implicit */unsigned long long int) var_15);
        }
    }
    var_44 = ((/* implicit */unsigned short) var_5);
}
