/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240748
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
    for (int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        var_15 = min((((/* implicit */int) arr_2 [i_0] [i_0 - 1])), (min((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) <= (arr_1 [i_0])))), (((((((/* implicit */int) (signed char)-7)) + (2147483647))) << (((((/* implicit */int) (unsigned char)48)) - (48))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((signed char) max(((~(((/* implicit */int) arr_4 [i_2] [i_1])))), (((/* implicit */int) arr_0 [i_0])))));
                    arr_8 [i_1 + 2] = ((/* implicit */short) min((((((/* implicit */int) arr_5 [i_1] [i_1] [i_1 + 2])) | (((/* implicit */int) (unsigned char)48)))), ((((+(((/* implicit */int) (_Bool)0)))) & (((/* implicit */int) arr_0 [i_0]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 2; i_5 < 24; i_5 += 1) 
                {
                    {
                        arr_16 [i_3] [i_3] [i_3] [i_3] = var_4;
                        var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_5 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_9 [i_3] [i_5 + 1])) : (397029320))), (((((/* implicit */_Bool) arr_5 [i_4] [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_9 [i_3] [i_5 - 2])) : (((/* implicit */int) arr_3 [i_5 - 2] [i_0 + 3]))))));
                    }
                } 
            } 
            arr_17 [i_3] = ((/* implicit */short) (+(((/* implicit */int) max((arr_0 [i_0 - 3]), (arr_0 [i_0 + 1]))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_6 = 2; i_6 < 23; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_18 = (-(min((arr_20 [i_0 - 2]), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0] [i_7])) : (((/* implicit */int) var_9)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_8 = 2; i_8 < 24; i_8 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (int i_9 = 2; i_9 < 23; i_9 += 1) 
                        {
                            var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-1720538521)))) ? ((~(((/* implicit */int) arr_0 [i_8 - 1])))) : (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_7] [i_9])))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_13 [8] [i_8 - 1] [i_8] [8])) : (1720538521))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) % (-1720538521)));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((/* implicit */int) (unsigned char)0)))))));
                        }
                        for (int i_10 = 2; i_10 < 23; i_10 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) (short)-14584);
                            var_24 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (-1933262784))) - (((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_10]))));
                        }
                        for (int i_11 = 2; i_11 < 23; i_11 += 4) /* same iter space */
                        {
                            var_25 += ((arr_7 [i_6] [i_6] [i_6 - 2]) != ((~(((/* implicit */int) arr_11 [(unsigned char)24] [i_11] [i_8])))));
                            var_26 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_11 + 1] [i_0 + 3] [i_11]))));
                            arr_33 [i_11] [i_6] [(_Bool)1] [i_6] [i_0] = ((/* implicit */signed char) ((int) ((-397029321) + (-397029331))));
                            var_27 = (i_6 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) arr_19 [i_6])) : (-1720538521)))) ? (((2147483647) + (arr_21 [i_0 + 3] [i_0 + 3] [i_6]))) : (1720538521)))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) arr_19 [i_6])) : (-1720538521)))) ? (((2147483647) - (arr_21 [i_0 + 3] [i_0 + 3] [i_6]))) : (1720538521))));
                            arr_34 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)207)) ? (-890789843) : (1387421948)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 778358035)))))));
                        }
                        for (int i_12 = 2; i_12 < 23; i_12 += 4) /* same iter space */
                        {
                            arr_37 [i_6] [i_6 - 1] [i_7] = ((/* implicit */short) ((unsigned char) (unsigned char)57));
                            arr_38 [i_6] [i_6] [i_7] = 397029320;
                        }
                        arr_39 [i_7] [i_6] = ((/* implicit */signed char) (+(arr_32 [i_0] [i_0] [i_0 + 3] [i_8] [(unsigned short)23] [i_8 + 1] [i_0 + 3])));
                    }
                    for (short i_13 = 4; i_13 < 22; i_13 += 1) /* same iter space */
                    {
                        arr_42 [i_6] = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)207)), (((((/* implicit */_Bool) arr_24 [i_13 + 2] [i_6 - 2] [i_6] [i_13])) ? (arr_24 [i_13 - 1] [i_6 + 2] [i_6] [i_0]) : (((/* implicit */int) (_Bool)0))))));
                        var_28 *= ((/* implicit */int) ((_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)207))))), (((signed char) (_Bool)0)))));
                        arr_43 [2] [i_6] [2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1387421948)) ? (((/* implicit */int) max(((unsigned char)224), ((unsigned char)151)))) : (((/* implicit */int) (unsigned char)4))));
                        var_29 *= ((/* implicit */unsigned char) ((unsigned short) var_5));
                    }
                    for (short i_14 = 4; i_14 < 22; i_14 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_14] [i_14 - 3])) <= (((/* implicit */int) arr_4 [i_7] [i_14 + 1]))))) != (((/* implicit */int) ((_Bool) arr_4 [i_14] [i_14 + 2]))))))));
                        var_31 += ((/* implicit */unsigned short) (_Bool)1);
                        arr_47 [i_0] [i_6] [i_6] [i_14] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)38)), (var_8)))) ? (((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) var_2)) : (397029350))) : (((826664207) | (255))))), ((+(((/* implicit */int) ((_Bool) 908118934)))))));
                        var_32 -= var_6;
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_15 = 3; i_15 < 16; i_15 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 18; i_16 += 4) 
        {
            for (unsigned char i_17 = 1; i_17 < 17; i_17 += 1) 
            {
                {
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((-1211566922) % (((/* implicit */int) arr_11 [i_17] [i_15] [i_15])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1720538521)))))));
                    var_34 = ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-1)))) ? (((/* implicit */int) arr_12 [i_17 + 1] [i_17 - 1] [i_15])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_28 [i_15] [i_15] [i_15] [i_15] [i_16] [i_17 - 1]))))));
                }
            } 
        } 
        arr_55 [i_15] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_3))))));
        var_35 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_15 + 1])) >= (((/* implicit */int) ((unsigned short) -1897141649)))));
        var_36 *= ((/* implicit */unsigned char) ((int) arr_25 [i_15 - 2] [i_15 - 2] [(short)12] [i_15 - 3]));
    }
    for (unsigned char i_18 = 2; i_18 < 13; i_18 += 2) 
    {
        var_37 = ((/* implicit */_Bool) 1720538521);
        var_38 = ((/* implicit */signed char) max((var_38), (arr_4 [i_18 + 4] [i_18 + 4])));
        arr_59 [i_18] [i_18 + 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((1373760487), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)80)))))))) ? (max((arr_1 [i_18 + 1]), ((-(((/* implicit */int) arr_2 [i_18 - 2] [i_18 - 1])))))) : (min((((((/* implicit */_Bool) (unsigned char)74)) ? (-1373760488) : (((/* implicit */int) (signed char)-13)))), ((~(((/* implicit */int) (_Bool)1))))))));
    }
    var_39 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) min(((signed char)37), ((signed char)-25)))) : (max((268435455), (((/* implicit */int) (unsigned short)32338)))))), (((/* implicit */int) (!(var_6))))));
}
