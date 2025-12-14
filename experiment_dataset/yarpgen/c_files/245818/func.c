/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245818
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
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) var_9)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_1)) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) var_13);
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(((18166760608190552988ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        arr_14 [i_1] [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned int) arr_8 [i_1] [i_2])) * (arr_7 [i_1] [i_3]))));
                        var_20 -= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_2 - 3])) : (((/* implicit */int) (_Bool)1))));
                        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_2] [i_2]))));
                    }
                    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        arr_18 [i_2] [11U] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2 - 2])) ? (((((/* implicit */int) var_3)) << (((var_5) - (1349988426U))))) : (-1305782773)));
                        arr_19 [i_2] = ((/* implicit */signed char) var_15);
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) 6917529027641081856LL))));
                    }
                    var_23 = ((/* implicit */unsigned short) ((var_1) | (((/* implicit */long long int) arr_7 [i_2 - 2] [i_2 - 3]))));
                    var_24 = ((/* implicit */long long int) (+(18446744073709551609ULL)));
                    var_25 = ((/* implicit */signed char) (short)-3257);
                    var_26 = ((/* implicit */int) max((var_26), ((-(((/* implicit */int) arr_11 [i_1] [i_2 - 2] [i_2 - 2] [(short)14] [i_1] [i_2]))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 4) 
        {
            arr_23 [i_1] [i_6] = ((/* implicit */short) var_7);
            var_27 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (20U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            arr_24 [i_1] [(_Bool)1] [i_6 + 1] = ((/* implicit */long long int) 848119392002856947ULL);
        }
        for (short i_7 = 2; i_7 < 17; i_7 += 1) 
        {
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (_Bool)1))));
            /* LoopSeq 1 */
            for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                var_29 = ((/* implicit */signed char) arr_7 [i_7 + 1] [i_7 + 2]);
                /* LoopSeq 2 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    var_30 -= ((/* implicit */long long int) (+(arr_30 [i_7 + 2] [(unsigned char)10])));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_33 [i_1] [i_1] [i_7] [i_1] [(signed char)2] [i_7] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((-1LL) | (((/* implicit */long long int) arr_4 [i_8])))) + (32LL)))));
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (arr_10 [i_7] [i_1] [17] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((1LL) > (((/* implicit */long long int) arr_28 [i_7 + 3]))))))));
                        var_32 = ((/* implicit */unsigned char) var_16);
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_7 + 3] [i_8] [i_9 - 1] [i_9 - 1] [i_7 + 3] [i_9 - 1])) >= (((/* implicit */int) (_Bool)1)))))));
                        var_34 &= ((/* implicit */_Bool) arr_25 [(unsigned char)14] [(unsigned char)14]);
                    }
                }
                for (short i_11 = 2; i_11 < 17; i_11 += 1) 
                {
                    var_35 = ((/* implicit */_Bool) min((var_35), ((_Bool)1)));
                    var_36 = ((/* implicit */short) min((var_36), (((short) arr_32 [i_7 - 1] [i_11 + 2] [i_11 - 2] [i_11 + 1] [i_11 + 2] [(unsigned char)17]))));
                    var_37 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (signed char)-26))) & (var_1)))));
                    var_38 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_32 [i_11 + 1] [i_11] [i_11] [i_11] [i_11 - 2] [i_7]))));
                }
                arr_37 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_25 [i_7] [i_7])) & (18ULL)));
            }
            var_39 = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_25 [i_7] [i_7 + 3])) : (-1390412929411478148LL))) / (((/* implicit */long long int) (~(((/* implicit */int) var_3))))));
            var_40 = ((/* implicit */_Bool) ((var_6) + (((/* implicit */unsigned long long int) arr_29 [i_7] [i_7]))));
        }
        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            var_41 = ((/* implicit */int) var_15);
            arr_41 [i_1] = ((/* implicit */unsigned short) var_4);
        }
    }
    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) 
    {
        arr_46 [(short)11] = ((/* implicit */unsigned int) min((min((((long long int) arr_35 [i_13] [12] [4LL])), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))))), (((/* implicit */long long int) (+(min((((/* implicit */int) (_Bool)1)), (-44808178))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_14 = 4; i_14 < 11; i_14 += 4) 
        {
            var_42 = ((/* implicit */unsigned int) ((long long int) var_0));
            arr_49 [i_13] [i_13] = ((/* implicit */unsigned int) arr_26 [i_13] [i_13]);
        }
        /* LoopSeq 1 */
        for (unsigned int i_15 = 1; i_15 < 12; i_15 += 4) 
        {
            var_43 = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_38 [i_13]))))) << ((((-(((/* implicit */int) var_4)))) + (22)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_15] [i_13] [i_15] [i_15])) && (((/* implicit */_Bool) arr_30 [i_15 - 1] [i_15]))))) : (((/* implicit */int) (unsigned short)65523)));
            var_44 = ((/* implicit */unsigned int) min((805583855), (((arr_31 [i_13] [i_15] [i_15 + 2] [i_13] [i_15]) ? (-1094486695) : (((/* implicit */int) arr_51 [i_15] [i_15 + 1] [i_15]))))));
            arr_54 [i_13] [i_15] [i_15] = ((/* implicit */long long int) var_10);
            arr_55 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_13] [i_15] [i_13])) >> (((arr_12 [i_13] [i_13] [i_13] [i_15]) - (2434737U)))))), ((~(-6155967912612723006LL)))))) ? (((((/* implicit */_Bool) ((unsigned int) 5419025843866339226LL))) ? (((/* implicit */int) ((signed char) var_9))) : (((/* implicit */int) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-15326)))))))) : (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_13] [i_13] [i_15] [0]))))) >= (-1LL))))));
        }
    }
    var_45 = ((/* implicit */unsigned short) (((+(((/* implicit */int) min((var_0), (var_16)))))) * ((-(((/* implicit */int) var_0))))));
}
