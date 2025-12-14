/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44087
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
    var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), ((short)14)))) : (((/* implicit */int) ((signed char) arr_2 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */int) (unsigned char)133)) ^ (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_4 [i_0]);
            var_12 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0])))), (((((/* implicit */int) arr_6 [(unsigned char)6])) < (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned char)54))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_13 ^= ((/* implicit */_Bool) (unsigned char)101);
            var_14 = ((/* implicit */short) ((signed char) arr_5 [i_2 - 1]));
            /* LoopNest 3 */
            for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            arr_19 [(unsigned char)18] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) ((arr_11 [i_0] [i_2 - 1] [i_3 + 2] [i_5]) ? (((/* implicit */int) arr_12 [i_2] [i_2 - 1] [i_3 + 2] [i_2 - 1])) : (((/* implicit */int) arr_11 [i_0] [i_2 - 1] [i_3 + 2] [i_5]))));
                            arr_20 [i_0] [(unsigned char)17] [i_2] [i_3 + 3] [i_4] [(short)7] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (_Bool)1))));
            arr_24 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : ((-(((/* implicit */int) (short)21614)))))) - ((+(((/* implicit */int) (unsigned char)201))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_8 = 1; i_8 < 18; i_8 += 4) 
                {
                    arr_30 [(_Bool)1] [i_6] [i_7] [(unsigned char)10] [(_Bool)1] = ((/* implicit */unsigned char) ((arr_8 [i_8 - 1] [i_6]) ? (((/* implicit */int) arr_8 [i_6] [i_6])) : (((/* implicit */int) arr_8 [i_0] [i_6]))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)216)) >= (((/* implicit */int) arr_17 [i_7 - 1] [i_8 + 1]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        var_17 += ((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_7] [i_6]);
                        arr_33 [i_6] [(signed char)11] [(signed char)11] [i_6] [(signed char)11] [i_6] [(signed char)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_7] [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_9] [i_8 + 1] [i_6] [i_7] [i_6] [i_0])))))));
                    }
                    for (unsigned char i_10 = 3; i_10 < 17; i_10 += 2) 
                    {
                        arr_36 [i_0] [i_10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
                        arr_37 [i_10] [i_6] [i_6] [i_6] [i_10] [(_Bool)1] = ((/* implicit */signed char) (_Bool)0);
                        var_18 = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_6 [i_10])));
                        arr_38 [i_0] [i_10] [(unsigned char)13] [i_8] = ((/* implicit */short) ((_Bool) (-(((/* implicit */int) var_3)))));
                        arr_39 [i_10] = (!(((/* implicit */_Bool) (signed char)-62)));
                    }
                    arr_40 [i_0] [i_6] [i_8] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (short)-2500))));
                }
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_2)))))));
                var_20 ^= ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) var_8)))));
            }
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0] [i_6])) - (((((/* implicit */int) min(((short)4095), (((/* implicit */short) (unsigned char)34))))) - (((/* implicit */int) min(((signed char)29), (((/* implicit */signed char) (_Bool)1)))))))));
        }
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
    {
        var_22 = arr_18 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11];
        /* LoopSeq 1 */
        for (unsigned char i_12 = 3; i_12 < 18; i_12 += 3) 
        {
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_12 - 2] [i_12 - 2])))))));
            var_24 = ((/* implicit */unsigned char) arr_23 [i_11] [i_12]);
            var_25 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_12 - 1] [i_12 - 3])) != (((/* implicit */int) var_4))));
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 2 */
            for (unsigned char i_13 = 1; i_13 < 18; i_13 += 2) 
            {
                var_27 = ((/* implicit */signed char) (+((-(((/* implicit */int) var_1))))));
                arr_48 [i_11] [i_12] [i_13] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_29 [i_13] [i_13] [(signed char)2] [i_13]))))));
                var_28 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)187))));
            }
            for (short i_14 = 0; i_14 < 19; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 19; i_15 += 2) 
                {
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_56 [i_16] [i_15] [i_15] [i_14] [i_11] [i_12] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_11])) / (((/* implicit */int) (unsigned char)220))));
                            arr_57 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */int) arr_43 [i_12 - 2])) != (((/* implicit */int) arr_5 [i_12 - 3]))));
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)92))))) < (((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (short i_18 = 0; i_18 < 19; i_18 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) var_1);
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */int) arr_55 [i_12] [i_12 - 2] [i_12 - 1] [i_12 + 1] [i_12 - 2])) >= (((/* implicit */int) arr_0 [i_12] [i_12 - 2])))))));
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (~(((/* implicit */int) arr_45 [i_12 - 2] [i_12 + 1])))))));
                            var_33 = ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-1))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_11] [i_12] [i_14])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)17))))) ? (((/* implicit */int) arr_32 [i_12 - 1] [i_12 - 1])) : (((/* implicit */int) arr_54 [i_14] [i_14] [i_12 - 2] [i_12 - 3] [i_12 - 1]))));
                /* LoopNest 2 */
                for (unsigned char i_19 = 4; i_19 < 17; i_19 += 4) 
                {
                    for (unsigned char i_20 = 0; i_20 < 19; i_20 += 4) 
                    {
                        {
                            arr_69 [i_20] [i_19] [i_14] [i_12] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-3835))));
                            var_35 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_47 [i_12] [i_19 + 2] [i_14])) && (((/* implicit */_Bool) arr_67 [i_11] [i_12] [i_20] [i_19] [i_20])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)21))))) : (((/* implicit */int) ((((/* implicit */int) (short)6275)) != (((/* implicit */int) (short)-32766)))))));
                            arr_70 [i_19] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [i_19 - 4] [i_12 - 2])) ? (((/* implicit */int) arr_46 [i_11] [i_20])) : (((/* implicit */int) arr_26 [i_11] [i_12] [i_19] [i_20]))));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 2 */
        for (signed char i_21 = 4; i_21 < 17; i_21 += 2) 
        {
            /* LoopNest 3 */
            for (short i_22 = 1; i_22 < 18; i_22 += 1) 
            {
                for (unsigned char i_23 = 2; i_23 < 17; i_23 += 3) 
                {
                    for (short i_24 = 0; i_24 < 19; i_24 += 3) 
                    {
                        {
                            arr_83 [i_11] [i_21 - 1] [i_22 - 1] [i_23] [i_21 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) (short)6260)) & (((/* implicit */int) (signed char)56))));
                            arr_84 [i_11] [i_21] [i_11] [i_23] [i_23] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) arr_81 [i_11] [i_11] [i_11] [(short)11] [i_11]))));
                        }
                    } 
                } 
            } 
            arr_85 [i_11] [i_21] = (short)-326;
        }
        for (short i_25 = 0; i_25 < 19; i_25 += 2) 
        {
            var_36 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_67 [i_11] [i_25] [i_25] [i_25] [i_11])) ? (((/* implicit */int) arr_23 [i_11] [i_11])) : (((/* implicit */int) (short)-15214)))) >= (((/* implicit */int) (signed char)-95))));
            var_37 = ((/* implicit */_Bool) arr_53 [i_11] [i_25] [i_25] [i_25]);
        }
    }
    var_38 &= ((signed char) var_1);
}
