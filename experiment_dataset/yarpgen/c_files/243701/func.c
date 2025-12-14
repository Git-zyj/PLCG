/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243701
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
    var_14 = ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(signed char)21] [i_1])) ? (var_9) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) 3374596875195969281LL)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (short)-29344))))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_2 [i_1]))));
            var_18 = ((/* implicit */unsigned int) arr_4 [i_0]);
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (9142470434508682193ULL)));
            arr_6 [23U] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1902556217706206386LL)) <= (var_5)));
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    {
                        arr_17 [i_0] [i_2] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_2] [i_3] [i_4]))));
                        var_20 = ((/* implicit */short) arr_8 [i_2] [i_3] [i_4]);
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned int) max((var_21), (((unsigned int) ((unsigned int) -1902556217706206387LL)))));
            arr_18 [i_0] = ((/* implicit */short) ((unsigned int) (unsigned short)31));
        }
        for (int i_5 = 2; i_5 < 23; i_5 += 2) 
        {
            var_22 = (+(arr_3 [i_5 - 1] [i_5 - 1]));
            var_23 = var_12;
        }
        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) var_2);
            /* LoopSeq 4 */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_8 = 2; i_8 < 22; i_8 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_21 [i_7]))));
                    var_26 += ((/* implicit */signed char) var_6);
                }
                for (unsigned int i_9 = 4; i_9 < 22; i_9 += 4) 
                {
                    var_27 *= ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_22 [i_0] [i_6])))));
                    arr_30 [i_0] [(short)11] [4] [i_7] [i_9 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_6] [i_6] [i_7] [i_9 - 2] [i_0] [i_6])) == (((/* implicit */int) var_6))));
                }
                arr_31 [i_0] [i_6] [9LL] [i_7] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_6] [i_7]))) : (var_3)));
                /* LoopSeq 2 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    var_28 = ((/* implicit */signed char) ((unsigned int) arr_10 [i_0] [(unsigned char)10] [(signed char)5]));
                    var_29 = ((/* implicit */unsigned long long int) var_9);
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        arr_38 [i_10] [(unsigned short)5] [i_0] [i_0] [i_7] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [(_Bool)1])) >> (((((/* implicit */int) arr_35 [i_10] [(unsigned char)17])) - (25472)))));
                        var_30 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1]))) - (((unsigned int) arr_29 [19] [i_10 - 1] [i_0]))));
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (+(((/* implicit */int) var_2)))))));
                    }
                }
                for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    arr_43 [i_0] [i_6] [i_7] [i_12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))));
                    var_32 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (short)2184)) : (((/* implicit */int) (short)-2184))));
                    arr_44 [i_0] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) -1902556217706206386LL))) ? (arr_27 [i_12] [i_7]) : (((/* implicit */int) arr_24 [(short)7] [i_6] [9ULL] [i_12]))));
                }
                var_33 = ((/* implicit */long long int) var_0);
                var_34 = ((/* implicit */int) min((var_34), (((((/* implicit */_Bool) 12112572534143874518ULL)) ? (arr_23 [i_0] [i_6] [i_7]) : (((/* implicit */int) arr_22 [i_0] [i_6]))))));
            }
            for (long long int i_13 = 3; i_13 < 21; i_13 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_14 = 1; i_14 < 22; i_14 += 4) 
                {
                    arr_50 [i_14] [(short)2] [i_13] [i_6] [i_0] = ((/* implicit */unsigned int) ((unsigned short) 2371771176U));
                    var_35 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_12))))));
                    var_36 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) - (var_8))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_13 + 3] [i_13])))));
                }
                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_13] [i_13 - 1] [i_13] [i_13] [i_13 - 3]))) | (arr_48 [i_13] [i_13 - 3] [i_13 + 2] [i_13])));
                arr_51 [i_13] = ((/* implicit */unsigned int) ((unsigned short) ((var_12) / (((/* implicit */unsigned int) var_9)))));
                arr_52 [i_13] [i_6] = ((/* implicit */unsigned int) var_3);
            }
            for (unsigned int i_15 = 1; i_15 < 20; i_15 += 2) 
            {
                var_38 *= arr_47 [i_0] [i_6] [i_15 + 1];
                var_39 &= ((arr_49 [i_0] [i_6] [(short)9] [i_15 + 1] [i_0] [i_15 + 1]) + (((/* implicit */long long int) ((unsigned int) var_0))));
            }
            for (int i_16 = 2; i_16 < 23; i_16 += 3) 
            {
                var_40 *= ((/* implicit */unsigned short) arr_34 [i_16 - 2] [i_16 + 1] [i_16] [i_0] [i_16]);
                var_41 = ((/* implicit */unsigned char) (~(var_8)));
                /* LoopSeq 4 */
                for (short i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    var_42 = ((/* implicit */long long int) (_Bool)0);
                    var_43 = ((/* implicit */long long int) ((2519790952U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_16 - 1] [i_16 - 2] [i_16] [i_16 - 1])))));
                    var_44 = ((/* implicit */short) ((((/* implicit */_Bool) 484730150)) ? (var_5) : (((/* implicit */unsigned long long int) var_11))));
                }
                for (unsigned long long int i_18 = 2; i_18 < 22; i_18 += 1) 
                {
                    var_45 = ((/* implicit */unsigned int) ((short) var_12));
                    var_46 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 1923196119U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (4604719972426172513ULL)))));
                }
                for (unsigned char i_19 = 0; i_19 < 24; i_19 += 1) 
                {
                    var_47 = ((/* implicit */long long int) ((arr_46 [i_0] [i_6] [i_16 - 1] [(unsigned char)2]) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_16] [i_16] [i_16 + 1] [14LL])))));
                    arr_67 [7] [i_6] [(_Bool)1] [i_19] [i_6] [i_16] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) arr_23 [i_19] [i_16] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_16 + 1] [i_16 - 1] [i_16 - 2])))));
                }
                for (unsigned char i_20 = 3; i_20 < 22; i_20 += 4) 
                {
                    arr_70 [i_16] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)95)) : (arr_23 [(_Bool)1] [19ULL] [i_16 + 1])))));
                    var_48 = ((/* implicit */unsigned long long int) min((var_48), (4604719972426172513ULL)));
                }
            }
            arr_71 [10U] [i_0] [i_0] &= ((/* implicit */unsigned long long int) arr_49 [i_0] [i_6] [i_0] [i_6] [6] [i_6]);
        }
    }
    /* vectorizable */
    for (int i_21 = 2; i_21 < 18; i_21 += 4) 
    {
        var_49 = ((/* implicit */unsigned long long int) (~(5716568485410713094LL)));
        arr_75 [i_21 - 1] = ((/* implicit */unsigned char) arr_49 [i_21] [i_21] [i_21 - 2] [i_21 + 1] [i_21 - 1] [2U]);
        var_50 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_21 + 1] [(_Bool)1] [i_21])) && (((/* implicit */_Bool) arr_33 [i_21 - 1] [i_21 - 1] [i_21 - 1]))));
        var_51 = ((/* implicit */unsigned long long int) arr_34 [i_21] [i_21] [i_21] [i_21] [(short)6]);
        /* LoopNest 3 */
        for (int i_22 = 2; i_22 < 18; i_22 += 1) 
        {
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                for (short i_24 = 1; i_24 < 18; i_24 += 1) 
                {
                    {
                        arr_83 [i_22] [i_22] [i_23] = ((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_24 - 1] [i_22 + 1] [i_21 + 1])) / (((/* implicit */int) var_10))));
                        arr_84 [i_22] [i_22 - 1] [i_23] [i_23] [i_23] [(unsigned short)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [21ULL] [i_21 + 2])))));
                        var_52 = arr_57 [i_24 + 2] [i_22 - 1] [i_21 - 1];
                        var_53 ^= ((/* implicit */_Bool) ((((12780971880358955495ULL) < (((/* implicit */unsigned long long int) 233182531U)))) ? (((/* implicit */unsigned long long int) arr_62 [i_21] [i_22 + 1])) : (var_5)));
                    }
                } 
            } 
        } 
    }
}
