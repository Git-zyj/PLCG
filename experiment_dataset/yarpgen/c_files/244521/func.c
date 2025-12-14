/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244521
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
    var_16 = ((/* implicit */signed char) var_0);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_2)), (max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (692744692908810365ULL)))));
        var_18 += ((/* implicit */unsigned int) ((arr_2 [i_0]) ? (var_10) : (min((var_8), (((/* implicit */int) (short)32767))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_19 = ((arr_6 [i_1]) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1])));
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) arr_6 [i_1]));
            arr_11 [i_1] [14] [i_1] = ((unsigned short) arr_1 [i_1] [i_1]);
            var_21 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [(signed char)11])) >> (((var_3) - (459047927)))))) < ((~(17753999380800741271ULL)))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                var_22 = ((/* implicit */_Bool) (+(arr_7 [i_1] [i_1])));
                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)23)))));
                arr_15 [i_1] = var_14;
            }
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                var_24 &= ((/* implicit */short) 692744692908810344ULL);
                var_25 = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_11)))))));
                var_26 = ((/* implicit */unsigned short) var_8);
            }
        }
        for (short i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
        {
            var_27 &= ((/* implicit */_Bool) var_5);
            var_28 = ((/* implicit */signed char) (-(((arr_19 [i_1]) ? (var_7) : (((/* implicit */unsigned int) var_5))))));
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                arr_25 [i_1] = (+(((/* implicit */int) arr_19 [i_1])));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_29 += ((/* implicit */signed char) arr_20 [3U]);
                            var_30 = ((/* implicit */short) (~(arr_16 [i_1])));
                            arr_30 [i_1] [(_Bool)1] [i_6] [i_7 + 1] [i_6] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_7 + 1] [i_7 + 1] [6LL] [i_7 - 2] [i_5])) / (((/* implicit */int) arr_17 [i_1] [i_7] [i_7 - 2] [i_1]))));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((var_7) * (((/* implicit */unsigned int) -1200235016)))))))));
                        }
                    } 
                } 
            }
        }
        for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            arr_35 [i_1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_9] [i_1])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (short)(-32767 - 1)))));
            arr_36 [i_1] [(_Bool)1] = ((/* implicit */short) (+(arr_7 [i_1] [i_9])));
            /* LoopNest 2 */
            for (signed char i_10 = 2; i_10 < 21; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    {
                        arr_43 [i_1] [i_1] = ((/* implicit */_Bool) var_5);
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) -5478592820472956614LL)) ? (17753999380800741283ULL) : (17753999380800741272ULL)));
                    }
                } 
            } 
        }
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        arr_47 [(unsigned short)12] [i_12] &= ((/* implicit */unsigned int) ((arr_6 [(_Bool)1]) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_34 [i_12]))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7245716566619778916LL))))) : (((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_45 [i_12]), (arr_13 [i_12] [i_12] [(_Bool)1]))))) : (-5478592820472956614LL)))));
        var_33 = max((((/* implicit */int) max((var_6), (((/* implicit */short) ((_Bool) arr_4 [i_12])))))), (var_5));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) arr_38 [i_13] [i_13] [i_13] [i_13])))));
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            for (long long int i_15 = 1; i_15 < 22; i_15 += 3) 
            {
                {
                    arr_55 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_23 [i_13] [i_15 + 1] [i_15]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 732174803U)) && (((/* implicit */_Bool) -1286157040))))))))));
                    /* LoopNest 2 */
                    for (short i_16 = 3; i_16 < 20; i_16 += 1) 
                    {
                        for (unsigned int i_17 = 1; i_17 < 22; i_17 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) arr_46 [i_14]))));
                                var_36 += var_13;
                                arr_61 [i_13] [i_17] [i_17] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)32767)))), (((((/* implicit */int) arr_2 [i_13])) - (((/* implicit */int) var_11))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((-(arr_0 [i_13] [i_13]))))))));
                            }
                        } 
                    } 
                    var_37 = arr_17 [i_14] [i_14] [i_14] [i_14];
                    arr_62 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0))))))))) - ((~(min((((/* implicit */unsigned int) (unsigned short)62849)), (1769278990U)))))));
                }
            } 
        } 
    }
    var_38 = ((/* implicit */long long int) (signed char)-58);
    /* LoopNest 2 */
    for (unsigned int i_18 = 2; i_18 < 20; i_18 += 4) 
    {
        for (int i_19 = 0; i_19 < 23; i_19 += 4) 
        {
            {
                arr_67 [i_18] = ((/* implicit */_Bool) (short)32767);
                var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((min(((-(1769051861U))), (((/* implicit */unsigned int) (signed char)-58)))) != (((/* implicit */unsigned int) ((/* implicit */int) max((arr_34 [i_18 + 1]), (((var_5) != (var_9))))))))))));
            }
        } 
    } 
    var_40 &= ((/* implicit */signed char) var_8);
}
