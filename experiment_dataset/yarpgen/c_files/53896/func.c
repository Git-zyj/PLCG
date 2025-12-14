/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53896
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
    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) var_13))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) var_14))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) (!(var_3)))) : ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) (-((-(((/* implicit */int) ((_Bool) arr_3 [i_1])))))));
        var_17 = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) (((+(((/* implicit */int) var_11)))) != (((/* implicit */int) arr_3 [i_1]))))) : (((/* implicit */int) (!((_Bool)1))))));
        arr_7 [i_1] [(_Bool)1] = var_6;
        arr_8 [i_1] [(_Bool)0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) max((var_0), (var_3))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((arr_4 [i_2]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : ((-(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) min((((((/* implicit */int) arr_3 [i_2])) <= (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_9 [i_2] [i_2])) > (((/* implicit */int) var_10)))))))));
        arr_12 [i_2] = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3))))));
        var_18 = arr_4 [i_2];
        /* LoopSeq 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_2] [i_2])))))))) : ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) + (((arr_14 [i_2] [i_2] [(_Bool)1]) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) arr_15 [i_2] [i_3 - 1]))))))));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_24 [i_2] [i_2] [i_3] [i_3 - 1] [i_2] [i_5] = var_0;
                        arr_25 [i_4] [i_2] = (((~(((/* implicit */int) var_4)))) >= ((((!((_Bool)1))) ? (((/* implicit */int) arr_16 [i_2])) : (((/* implicit */int) max((var_4), ((_Bool)1)))))));
                        arr_26 [i_5] [i_2] [i_2] = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 1] [i_2] [i_3 - 1] [i_3 - 1])))), (((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_20 = ((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_2))))));
            var_21 = var_2;
            arr_29 [i_2] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
        }
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_43 [i_7] [(_Bool)1] [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_8] [i_10]))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_42 [(_Bool)1] [i_8] [i_9] [i_10]))));
                        var_23 = (!(var_12));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_47 [i_11] [i_7] [i_11] = ((/* implicit */_Bool) (-(((var_2) ? (((/* implicit */int) arr_3 [i_7])) : (((/* implicit */int) var_9))))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_32 [i_7]))) | (((/* implicit */int) var_14))));
            arr_48 [i_7] [i_11] = var_3;
            var_25 = ((/* implicit */_Bool) (~(((arr_34 [(_Bool)1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_51 [i_12] [i_12] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) ((arr_28 [i_7] [i_12]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_39 [i_14]))));
                        /* LoopSeq 2 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_27 = (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7))))));
                            arr_62 [i_7] [i_14] [i_13] [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((((/* implicit */int) var_11)) * (((/* implicit */int) arr_33 [i_7] [i_7]))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            arr_65 [i_7] [i_12] [i_14] [i_14] [i_16] [(_Bool)0] = ((((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) != ((-(((/* implicit */int) arr_57 [i_14] [i_12] [i_13] [i_14])))));
                            arr_66 [i_7] [i_7] [(_Bool)1] [i_14] [i_7] [i_14] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_7]))));
                            var_28 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            var_29 = ((/* implicit */_Bool) ((var_11) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) arr_49 [i_7] [i_7])))) : (((((/* implicit */int) arr_56 [i_13] [i_13] [i_16])) | (((/* implicit */int) arr_4 [i_7]))))));
                        }
                        var_30 = ((/* implicit */_Bool) ((arr_64 [i_7] [i_12] [i_13] [i_12] [i_7] [i_7]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))));
                        arr_67 [i_14] [i_14] [i_12] [i_12] [i_12] [i_14] = arr_58 [i_7];
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_74 [i_7] [i_7] [i_18] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_7])) >> (((/* implicit */int) arr_4 [i_7]))));
                            arr_75 [i_12] [(_Bool)1] [i_18] = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_0))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
        {
            arr_78 [(_Bool)1] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)0))))));
            arr_79 [i_7] [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_7] [(_Bool)0]))));
            var_31 = (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) ((_Bool) var_9))));
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
        {
            arr_83 [i_7] [(_Bool)1] = var_11;
            var_32 = ((/* implicit */_Bool) ((arr_18 [i_7] [i_21] [(_Bool)1]) ? (((/* implicit */int) arr_18 [i_7] [i_7] [(_Bool)1])) : (((/* implicit */int) arr_18 [i_7] [i_7] [(_Bool)1]))));
        }
        var_33 = arr_3 [i_7];
    }
}
