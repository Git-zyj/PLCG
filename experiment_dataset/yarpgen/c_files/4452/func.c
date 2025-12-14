/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4452
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
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-102), (((/* implicit */signed char) (_Bool)1)))))) / (min((((/* implicit */unsigned int) min((var_9), (((/* implicit */int) var_7))))), (((unsigned int) (unsigned char)50))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_16 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) arr_4 [(signed char)12] [1ULL] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_2]))))));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        {
                            arr_10 [i_0] |= 10943666685346333429ULL;
                            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_1 + 1] [1] [i_1 + 1]))))) - (((arr_3 [(unsigned short)2] [i_2]) + (var_11)))));
            }
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                var_19 = ((/* implicit */unsigned short) var_9);
                arr_13 [i_0] [i_0 + 1] [i_0] &= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) -1671864918544848886LL))) ? (((/* implicit */int) max((arr_6 [i_0 - 2] [i_0] [i_0] [(unsigned char)3]), (((/* implicit */short) var_8))))) : (((int) 1654996578)))));
                arr_14 [i_0] [(_Bool)1] [i_1 + 1] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) 537635734));
            }
            var_20 = min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0 - 2] [i_1] [2LL] [i_1 - 2]))))), (((((/* implicit */_Bool) var_2)) ? (max((11209288712787235731ULL), (7503077388363218178ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79))))));
        }
    }
    for (short i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        arr_17 [i_6] = ((/* implicit */unsigned char) arr_15 [i_6] [i_6]);
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (signed char)-100))) + ((-(-1654996602)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_20 [i_6] [i_6]), (((/* implicit */unsigned short) arr_16 [i_7] [i_7])))))) : ((+(var_14))))))));
            var_22 = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
            var_23 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_7] [i_6])) && (arr_18 [i_6])))) - (((/* implicit */int) arr_18 [i_6]))));
            var_24 ^= ((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) arr_18 [i_7])))));
        }
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                for (unsigned char i_11 = 1; i_11 < 9; i_11 += 1) 
                {
                    {
                        arr_29 [i_11] [(unsigned char)5] [i_8] [i_8] [i_9] [i_8] = ((/* implicit */_Bool) ((unsigned char) 1654996548));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_5 [i_8] [i_9] [i_11 + 2] [i_11 + 2]))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned char) var_13);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 3) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 1; i_14 < 22; i_14 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 3) 
                    {
                        var_27 += ((/* implicit */int) arr_36 [11ULL] [i_13]);
                        var_28 = ((/* implicit */int) max((((/* implicit */unsigned char) arr_36 [i_13] [i_13])), (max((((unsigned char) arr_37 [i_12] [(unsigned short)7] [i_13] [i_14 + 1] [i_15] [i_15])), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_37 [(signed char)6] [i_13] [i_14] [i_15] [6ULL] [20ULL])))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 1) 
                        {
                            var_29 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [(short)14] [16ULL] [i_14 - 1] [i_14] [i_14 - 1])) ? (((/* implicit */int) arr_40 [i_14] [12] [i_14 - 1] [i_14] [i_14 - 1])) : (((/* implicit */int) arr_40 [i_12] [(_Bool)1] [i_14 - 1] [i_14] [i_14 + 1]))));
                            arr_41 [i_16] [i_12] [i_14] [i_12] [i_12] = ((/* implicit */unsigned long long int) arr_36 [i_14 - 1] [i_13]);
                            arr_42 [i_12] [i_14] [i_14] [i_15] [i_12] [(unsigned short)18] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_14] [i_14] [i_14] [3LL] [i_14 - 1] [i_14 + 1])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_17 = 1; i_17 < 22; i_17 += 3) 
                        {
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) arr_40 [(unsigned short)10] [4U] [i_14 - 1] [i_14] [i_14 + 1]))));
                            var_31 = ((/* implicit */unsigned long long int) ((int) (signed char)-87));
                        }
                        /* vectorizable */
                        for (signed char i_18 = 0; i_18 < 23; i_18 += 2) 
                        {
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)208)) - (((/* implicit */int) (_Bool)1)))))));
                            var_33 = ((/* implicit */unsigned short) (~(arr_33 [i_12] [i_12] [i_13])));
                            arr_47 [i_12] [i_12] [i_13] [i_14] [i_15] [20ULL] [i_18] = ((/* implicit */signed char) ((int) var_8));
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) var_9))));
                        }
                        for (int i_19 = 1; i_19 < 22; i_19 += 1) 
                        {
                            arr_52 [i_12] [i_13] [i_14] [i_12] [12LL] = -857585385;
                            var_35 = ((/* implicit */signed char) ((short) (-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)34)), (var_6)))))));
                            var_36 = ((/* implicit */unsigned char) arr_46 [i_13] [i_12]);
                        }
                    }
                    for (unsigned char i_20 = 0; i_20 < 23; i_20 += 3) 
                    {
                        var_37 = ((/* implicit */int) ((unsigned char) (((_Bool)1) ? (arr_44 [i_12] [i_12] [i_14 + 1] [i_14] [i_20]) : (arr_44 [i_14 - 1] [i_14 + 1] [(short)1] [i_14] [i_14]))));
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_51 [i_12] [i_13] [i_13] [i_14] [i_20] [i_20])), (17150647442608555544ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)7))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 8216399072042548231ULL)) ? (((/* implicit */int) var_7)) : (537635749))))) : (((/* implicit */int) var_1))));
                        var_39 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_39 [(short)0] [i_13] [i_14] [(short)0] [i_20])) | (((int) min((arr_39 [(short)22] [i_13] [i_14] [i_14] [16]), (((/* implicit */unsigned short) var_4)))))));
                    }
                    for (unsigned short i_21 = 0; i_21 < 23; i_21 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_40 = ((/* implicit */long long int) ((signed char) arr_46 [i_21] [i_12]));
                            var_41 -= ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) (short)32752)))));
                        }
                        for (unsigned char i_23 = 2; i_23 < 22; i_23 += 1) 
                        {
                            var_42 += ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) ((var_11) - (11650882301286763042ULL)))))));
                            arr_64 [i_12] [i_23] = ((/* implicit */unsigned char) var_5);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_24 = 0; i_24 < 23; i_24 += 3) 
                        {
                            var_43 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                            arr_67 [i_12] [(unsigned short)11] [i_13] [i_12] [19U] [i_21] [22] = ((/* implicit */unsigned char) var_9);
                            arr_68 [i_21] [i_13] [(signed char)8] [i_13] [i_13] [0ULL] &= ((/* implicit */unsigned long long int) ((unsigned char) (~(var_11))));
                        }
                        for (unsigned short i_25 = 0; i_25 < 23; i_25 += 1) 
                        {
                            arr_72 [i_12] [i_12] [i_14] [(signed char)14] [i_25] = ((/* implicit */_Bool) var_8);
                            var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) (_Bool)1))));
                            var_45 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_71 [i_25] [i_21] [i_14] [4] [i_12]))));
                        }
                        var_46 = ((/* implicit */unsigned char) arr_36 [i_14] [(unsigned char)8]);
                        arr_73 [i_12] [i_21] [22] [i_13] [i_12] = ((/* implicit */_Bool) arr_50 [i_21] [i_14 - 1] [i_14] [i_14] [i_14] [i_14] [(_Bool)1]);
                        var_47 = ((/* implicit */int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1564))))) ? (min((8216399072042548226ULL), (((/* implicit */unsigned long long int) var_9)))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (10230345001667003402ULL))))), (13991398570337975107ULL)));
                    }
                    var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) (-((-(((((/* implicit */unsigned long long int) -537635745)) + (3114809213556295560ULL))))))))));
                    var_49 |= ((/* implicit */signed char) ((((/* implicit */int) (signed char)3)) + (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (short)-14615))))))));
                }
            } 
        } 
    } 
}
