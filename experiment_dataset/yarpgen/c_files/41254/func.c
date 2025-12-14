/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41254
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_0)))));
        var_16 = arr_2 [i_0 + 1];
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((((/* implicit */int) var_4)) * (((/* implicit */int) (signed char)39))))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) arr_4 [i_0]);
                /* LoopNest 2 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)146))));
                            var_18 = ((/* implicit */_Bool) (unsigned char)124);
                            var_19 = ((unsigned long long int) ((arr_13 [i_0] [i_2] [i_4] [i_3] [i_4] [i_3] [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_4])))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) var_9)));
            }
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */int) ((short) arr_13 [i_0] [(unsigned short)18] [i_0 - 1] [i_1] [i_0] [i_0] [i_5]));
                        var_22 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) var_6)))));
                        /* LoopSeq 1 */
                        for (short i_7 = 4; i_7 < 19; i_7 += 2) 
                        {
                            arr_24 [i_0] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */signed char) (short)19130);
                            arr_25 [i_7] [i_6] [i_5] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_23 [i_7] [i_7] [i_7] [i_7] [i_7])) <= (((/* implicit */int) var_13)))) || (((((/* implicit */int) (short)-19130)) < (((/* implicit */int) (unsigned short)44063))))));
                        }
                        var_23 ^= ((/* implicit */_Bool) ((signed char) arr_19 [i_1 - 2] [i_6] [i_6] [i_6] [i_6] [i_6]));
                    }
                } 
            } 
            var_24 = ((/* implicit */signed char) var_9);
        }
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)26160))))) | (((/* implicit */int) arr_27 [i_8]))));
            var_26 = ((/* implicit */int) var_4);
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (1738841286104877505ULL)));
            /* LoopNest 2 */
            for (signed char i_9 = 3; i_9 < 21; i_9 += 4) 
            {
                for (short i_10 = 1; i_10 < 21; i_10 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_12 [i_0] [i_8] [i_9] [i_10] [i_8] [i_0])))) <= (((((/* implicit */_Bool) arr_4 [i_8])) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) var_5))))));
                        arr_33 [i_0] [i_8] [i_8] [i_8] [i_10] [i_0] = ((/* implicit */short) ((unsigned long long int) ((signed char) var_7)));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (short)8188)) : (((/* implicit */int) (signed char)-113))));
                        var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)44671)) % (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0])))) < (arr_29 [i_0] [i_8] [i_9])));
                        arr_34 [i_8] = (short)-4922;
                    }
                } 
            } 
        }
    }
    for (signed char i_11 = 1; i_11 < 21; i_11 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_10)))) < (min((var_11), (((/* implicit */unsigned int) (unsigned short)8736))))))) != (((/* implicit */int) var_9))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_12 = 3; i_12 < 20; i_12 += 3) 
        {
            arr_41 [i_12] = ((/* implicit */signed char) ((unsigned char) ((short) arr_4 [i_11])));
            /* LoopNest 2 */
            for (unsigned short i_13 = 3; i_13 < 18; i_13 += 2) 
            {
                for (signed char i_14 = 2; i_14 < 21; i_14 += 3) 
                {
                    {
                        var_32 = ((/* implicit */signed char) arr_45 [i_11 + 1] [i_12 - 1] [i_13 + 2]);
                        arr_48 [i_12] [i_12] = ((/* implicit */signed char) (~((+(((/* implicit */int) var_7))))));
                        arr_49 [i_11] [i_11] [i_12] [i_13] [i_14] = ((/* implicit */signed char) var_2);
                    }
                } 
            } 
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_16 = 1; i_16 < 19; i_16 += 1) 
            {
                arr_55 [i_11] [i_11] = ((/* implicit */short) ((long long int) ((unsigned short) var_11)));
                var_33 = ((/* implicit */unsigned short) var_14);
                arr_56 [i_11] [i_15] [i_15] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (unsigned short)65419))));
                /* LoopSeq 1 */
                for (unsigned short i_17 = 3; i_17 < 20; i_17 += 3) 
                {
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) arr_12 [i_11] [i_15] [i_16] [i_16] [i_17] [i_17])) > (((/* implicit */int) (signed char)27)))))));
                    arr_61 [i_17] [i_16] [i_11] [i_17] = ((/* implicit */unsigned int) ((short) ((var_5) ? (((/* implicit */unsigned long long int) arr_19 [i_16] [i_15] [i_11] [i_17] [i_15] [i_11])) : (var_0))));
                    var_35 = ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)26539))) - (arr_38 [i_16])));
                    var_36 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)39205)) < (((((/* implicit */int) arr_57 [i_15] [i_11] [i_16] [i_15] [i_16] [i_16])) | (((/* implicit */int) var_14))))));
                    var_37 = ((/* implicit */long long int) ((unsigned short) 3068542476U));
                }
            }
            for (long long int i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                arr_64 [i_11] [i_15] [i_15] [i_18] = ((/* implicit */long long int) ((short) min(((signed char)127), (((/* implicit */signed char) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_3))))))));
                arr_65 [i_11] [i_18] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14035197320703476607ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)127))))) ? (max((var_8), (((/* implicit */unsigned int) (unsigned char)102)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_11] [i_15] [i_18] [i_15])), (arr_45 [i_11] [i_15] [i_18]))))))));
            }
            var_38 = ((/* implicit */signed char) (+(max((((((/* implicit */int) arr_35 [i_15])) * (((/* implicit */int) (unsigned char)241)))), (((/* implicit */int) ((arr_3 [i_11] [i_15]) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_15] [i_15] [i_15] [i_15] [i_15] [i_11]))))))))));
        }
        /* vectorizable */
        for (unsigned int i_19 = 4; i_19 < 20; i_19 += 4) 
        {
            var_39 -= ((/* implicit */short) 4171850871U);
            var_40 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6242)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_7)) ? (arr_14 [i_11] [i_11] [i_11] [i_19] [i_19] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
        }
        var_41 = ((/* implicit */short) max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) arr_12 [i_11] [i_11] [i_11] [i_11] [i_11 + 1] [i_11])) ? (861857422576964255LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_20 = 2; i_20 < 21; i_20 += 3) 
        {
            for (unsigned short i_21 = 2; i_21 < 20; i_21 += 3) 
            {
                {
                    arr_73 [i_21] [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_28 [i_11] [i_20] [i_21])))) ? (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) arr_46 [i_11] [i_20] [i_21] [i_21])) : (((/* implicit */int) (signed char)103)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_16 [i_11 + 1])))) : (var_11)));
                    var_42 = ((/* implicit */unsigned short) (-(((((/* implicit */int) ((signed char) arr_45 [i_11] [i_20] [i_21]))) ^ (((/* implicit */int) arr_47 [i_20]))))));
                    /* LoopNest 2 */
                    for (short i_22 = 1; i_22 < 19; i_22 += 2) 
                    {
                        for (long long int i_23 = 3; i_23 < 21; i_23 += 3) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned short) ((arr_63 [i_21] [i_21] [i_21]) - (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))));
                                arr_79 [i_11] [i_20] [i_21] [i_20] [i_21] [i_11] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_69 [i_11 + 1] [i_11 - 1]))) ? (((long long int) ((int) (signed char)-116))) : (((/* implicit */long long int) (-(((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                            }
                        } 
                    } 
                    arr_80 [i_11] [i_21] [i_21] = ((/* implicit */_Bool) arr_38 [i_21]);
                    arr_81 [i_20] [i_21] [i_21] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) max((3190582237U), (var_6)))) && (((((/* implicit */_Bool) arr_77 [i_11] [i_20] [i_20] [i_21] [i_21])) || (((/* implicit */_Bool) var_4)))))))));
                }
            } 
        } 
        arr_82 [i_11] [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_16 [i_11 + 1]))));
    }
    var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)104)) * (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (_Bool)0)))))));
    var_45 = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_12))))));
}
