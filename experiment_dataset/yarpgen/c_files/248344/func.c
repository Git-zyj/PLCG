/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248344
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_0] [i_0 - 1] [i_0 - 1] &= ((/* implicit */int) min((((/* implicit */long long int) (unsigned char)244)), (2138812084848960252LL)));
                    arr_7 [i_0] [i_1 + 1] [i_0 - 1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))))), (arr_2 [3LL])));
                    var_15 &= ((/* implicit */unsigned long long int) (unsigned short)65525);
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            {
                                arr_18 [i_5] [(_Bool)1] [i_5] [i_5] [i_5] [i_5] [9] = ((/* implicit */int) ((unsigned short) (unsigned short)65535));
                                arr_19 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned short)12])) && (((/* implicit */_Bool) var_4))))) >> (((arr_3 [i_0 - 2] [i_0 - 1]) - (17898217678024932542ULL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        arr_23 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2]))) * (arr_1 [i_0 + 1])));
                        var_17 = ((/* implicit */_Bool) (~((-(432928605)))));
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_1] [i_1 + 2] [i_1 - 1] [i_1] [i_1 - 1])) + (((/* implicit */int) arr_11 [i_1] [i_1 - 1] [i_1 + 2] [9] [i_1 + 2]))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))));
                            arr_26 [i_0] [i_0] [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-31486)) == (((/* implicit */int) (!(var_3))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            arr_31 [i_8] [i_6] [i_0] [i_6] [i_0] = ((/* implicit */unsigned long long int) (+(2178415289932481553LL)));
                            var_20 = (i_6 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) arr_29 [(unsigned short)15] [i_1 + 2] [(unsigned short)15] [(unsigned short)15] [i_0 - 1] [i_0 + 1] [1])) << (((arr_15 [i_0 - 2] [i_0] [i_6] [i_0 + 1] [i_1 - 1]) - (5713925201287308402LL)))))) : (((/* implicit */signed char) ((((/* implicit */int) arr_29 [(unsigned short)15] [i_1 + 2] [(unsigned short)15] [(unsigned short)15] [i_0 - 1] [i_0 + 1] [1])) << (((((((arr_15 [i_0 - 2] [i_0] [i_6] [i_0 + 1] [i_1 - 1]) - (5713925201287308402LL))) + (796476116747907733LL))) - (24LL))))));
                        }
                    }
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-23)) - (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)10))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0 - 1])));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_23 = ((((/* implicit */_Bool) ((int) (_Bool)1))) || (((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1])));
                        /* LoopSeq 2 */
                        for (long long int i_11 = 1; i_11 < 14; i_11 += 1) 
                        {
                            arr_39 [5] [i_10] [i_11] [i_10] [i_11] = ((/* implicit */short) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79)))));
                            arr_40 [i_0] [i_10] [i_10] [(unsigned char)5] [i_11 + 2] = ((/* implicit */signed char) (short)-31505);
                            var_24 = ((/* implicit */int) ((((/* implicit */int) (signed char)-77)) == (((/* implicit */int) (signed char)-49))));
                        }
                        for (long long int i_12 = 2; i_12 < 17; i_12 += 3) 
                        {
                            var_25 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0 - 1] [(_Bool)1] [i_0 - 1] [i_10] [i_12 - 2] [i_0] [i_1 + 1]))) != (arr_30 [i_0 + 2] [i_1 + 2] [i_3] [i_3])));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 1386752163)) < (arr_36 [i_0] [i_3] [i_0 + 2]))))));
                            arr_43 [i_12] [i_10] [i_10] [i_0] = ((int) arr_16 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1 + 2]);
                        }
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-2147483647 - 1)) & (((/* implicit */int) var_9))))) ? (((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned short)3236)))) : (((/* implicit */int) ((unsigned char) var_2))))))));
                        var_28 = ((/* implicit */unsigned char) arr_33 [i_3] [i_3] [i_3] [13U]);
                    }
                    for (int i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        arr_47 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_12 [i_13] [i_3] [i_0] [i_1] [i_0]);
                        var_29 += (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)65534)) : (2112442798))));
                        arr_48 [i_3] [i_1] [7LL] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_1] [i_3] [i_0])) ? (arr_44 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 1]) : (arr_44 [i_13] [i_3] [(unsigned char)10] [(unsigned char)10])));
                    }
                    arr_49 [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((unsigned char) arr_36 [i_0 - 1] [i_3] [i_1 + 2]));
                    arr_50 [i_0] [i_1 + 1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53714)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned char)93)))))));
                }
                /* vectorizable */
                for (unsigned int i_14 = 0; i_14 < 18; i_14 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned short) (-(10ULL)));
                    var_31 = ((/* implicit */int) ((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_14])))));
                }
                for (unsigned int i_15 = 0; i_15 < 18; i_15 += 3) 
                {
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1] [i_0 - 1] [i_1 - 1])) <= (max((arr_24 [i_1] [i_0] [i_1] [i_1] [i_1] [i_1 + 2] [i_0 + 2]), (((/* implicit */int) (unsigned short)22))))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 18; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 18; i_17 += 3) 
                        {
                            {
                                var_33 ^= ((/* implicit */unsigned long long int) (~((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(unsigned char)12] [i_0]))) : (arr_30 [i_16] [i_15] [10] [i_0])))))));
                                arr_60 [i_0] [i_0] [i_15] [i_15] [i_0 + 2] [i_0] [i_0] = ((/* implicit */signed char) arr_10 [i_17] [i_17] [i_17] [(short)14] [i_17]);
                                arr_61 [i_0 + 2] [i_15] [i_0 + 2] [i_0 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_0])) ? (arr_32 [i_15]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65534)) * (((/* implicit */int) arr_52 [i_15])))))))) ? (arr_15 [i_17] [(short)17] [i_15] [i_1] [3]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_0 - 2] [i_0 - 1])))));
                            }
                        } 
                    } 
                    arr_62 [i_15] [(unsigned char)14] [i_15] = ((/* implicit */_Bool) max((((min((((/* implicit */long long int) 2036471049U)), (var_5))) << (((/* implicit */int) arr_22 [i_0] [i_0 + 1] [13] [i_0 + 2] [i_0 + 1] [i_0 + 2])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(unsigned short)14])) ? (((/* implicit */int) arr_28 [i_0 - 1] [i_0] [i_0] [i_15])) : (((/* implicit */int) var_8)))))));
                }
                for (unsigned short i_18 = 0; i_18 < 18; i_18 += 1) 
                {
                    arr_65 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 4909644698561053731LL))));
                    var_34 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_4 [i_0 - 1]))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_19 = 0; i_19 < 19; i_19 += 1) 
    {
        for (int i_20 = 0; i_20 < 19; i_20 += 1) 
        {
            {
                var_35 = arr_69 [i_19] [i_19] [i_19];
                var_36 = ((/* implicit */short) ((((((/* implicit */int) (short)31485)) >> (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) ((arr_66 [i_19] [i_19]) > (((((/* implicit */_Bool) arr_66 [i_19] [i_20])) ? (arr_67 [i_20]) : (((/* implicit */unsigned int) -1388192677)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_21 = 1; i_21 < 22; i_21 += 2) 
    {
        for (short i_22 = 3; i_22 < 22; i_22 += 1) 
        {
            {
                var_37 = ((/* implicit */int) ((unsigned char) (-(arr_74 [i_21 + 1] [i_22 - 3]))));
                arr_75 [i_21] [i_22 - 3] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_70 [i_21 + 2])) ? (((/* implicit */int) arr_71 [i_21 - 1] [i_21])) : (((/* implicit */int) arr_71 [i_21] [i_21])))));
                /* LoopSeq 1 */
                for (unsigned int i_23 = 0; i_23 < 25; i_23 += 3) 
                {
                    var_38 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((10ULL), (((/* implicit */unsigned long long int) (unsigned short)25844))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2981)) ? (-3541462490250684637LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max(((short)-1303), (((/* implicit */short) arr_71 [i_21] [(short)6]))))))))));
                    var_39 *= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16792))))))))));
                    arr_80 [i_21] [i_22 + 3] [i_22 + 3] [i_22] = ((/* implicit */unsigned short) min((((int) ((((/* implicit */_Bool) (short)-2997)) ? (((/* implicit */int) (short)17855)) : (((/* implicit */int) (unsigned short)65527))))), (((/* implicit */int) ((unsigned char) ((var_5) % (var_5)))))));
                    arr_81 [i_21 + 2] [i_21] [i_21] [i_21] = ((/* implicit */int) min((min((4ULL), (655354205295886771ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)244)) ^ (((/* implicit */int) (_Bool)1)))))));
                }
                var_40 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_76 [i_21] [i_21 + 3] [i_21 + 3] [i_22])), (((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) arr_76 [i_21] [i_22 - 1] [i_21 - 1] [i_21])))))));
            }
        } 
    } 
    var_41 &= ((/* implicit */unsigned short) (_Bool)0);
    /* LoopNest 2 */
    for (unsigned char i_24 = 0; i_24 < 12; i_24 += 3) 
    {
        for (long long int i_25 = 0; i_25 < 12; i_25 += 1) 
        {
            {
                arr_87 [i_24] [i_25] [i_25] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)92)))))) - (((((3554079674383990846ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_24] [i_25] [i_24]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)109))))))));
                var_42 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_21 [i_24] [i_24] [4U] [i_25] [i_25])) + (((/* implicit */int) var_14)))) & (((((/* implicit */int) ((unsigned short) (unsigned char)175))) << (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)3990))))))));
                arr_88 [i_25] [i_25] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))) - (10372064333769478003ULL));
            }
        } 
    } 
}
