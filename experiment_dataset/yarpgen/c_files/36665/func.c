/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36665
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
    var_12 -= ((/* implicit */unsigned int) ((_Bool) var_0));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) max((var_11), (var_11))))))) ? (((/* implicit */long long int) var_10)) : (var_2)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_0] [i_0] [i_1] [i_2]))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)22191)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_3] = arr_6 [i_3] [i_1] [i_0];
                        var_14 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0 - 1]);
                    }
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 1; i_5 < 24; i_5 += 3) 
                        {
                            var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [(_Bool)1] [i_1] [i_2] [i_4] [20LL] [i_5 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [10LL] [i_1] [i_2] [(signed char)10])) || (((/* implicit */_Bool) arr_17 [i_0])))))));
                            var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)10613)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)62268))));
                        }
                        var_17 -= ((/* implicit */unsigned short) (short)11963);
                        var_18 = ((unsigned short) -504001424620186926LL);
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_6 = 1; i_6 < 23; i_6 += 4) 
        {
            arr_22 [i_0] [i_6] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_19 [i_0])))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_6] [i_6])) ? (((/* implicit */int) (unsigned short)65535)) : (arr_0 [i_0] [i_6 + 1]))) : (((/* implicit */int) arr_3 [i_6 - 1] [i_6] [i_0]))));
            arr_23 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)127))));
        }
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) 4294967290U))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_17 [(unsigned char)15]))) | ((-(((/* implicit */int) (unsigned short)4064))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (+(arr_19 [(signed char)22]))))));
        arr_26 [i_7] [i_7] = ((/* implicit */_Bool) arr_10 [(unsigned char)8]);
    }
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 23; i_8 += 2) 
    {
        arr_30 [i_8] [i_8] = ((/* implicit */unsigned short) arr_17 [i_8 + 1]);
        arr_31 [(_Bool)1] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)20] [(_Bool)1] [i_8]))) >= (((long long int) arr_28 [i_8 + 2]))));
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                for (unsigned int i_11 = 1; i_11 < 23; i_11 += 3) 
                {
                    {
                        arr_40 [i_8] [i_8] [i_8] [13U] [i_11] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_8 [i_8] [3]) & (((/* implicit */long long int) arr_2 [i_8]))))) ? (((((/* implicit */_Bool) arr_34 [i_8] [19LL] [13U])) ? (((/* implicit */int) arr_1 [i_11 + 2])) : (-1214539628))) : (((/* implicit */int) arr_7 [i_8] [i_8 + 1] [i_11 + 2] [i_11 + 2]))));
                        var_22 ^= ((/* implicit */long long int) (-(((((/* implicit */int) arr_14 [i_8])) - (((/* implicit */int) arr_29 [i_10] [i_10]))))));
                    }
                } 
            } 
        } 
    }
    for (short i_12 = 0; i_12 < 22; i_12 += 1) 
    {
        arr_43 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_12])) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_36 [i_12] [i_12] [i_12])))))) : ((+((+(((/* implicit */int) (unsigned char)224))))))));
        var_23 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_17 [i_12])) ? (arr_17 [i_12]) : (arr_17 [i_12]))));
        /* LoopNest 2 */
        for (unsigned int i_13 = 1; i_13 < 20; i_13 += 4) 
        {
            for (unsigned short i_14 = 4; i_14 < 19; i_14 += 1) 
            {
                {
                    arr_49 [i_12] [i_12] [(unsigned short)0] [i_13] = var_0;
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 19; i_15 += 3) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_13 [i_12] [i_15 - 1] [9LL] [i_12])) : (((/* implicit */int) (unsigned short)38274))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_12] [i_13 + 1]))) : (min((var_0), (((/* implicit */long long int) (unsigned char)192)))))), (((/* implicit */long long int) var_5))));
                                arr_55 [i_12] [i_13 + 1] [i_15] [i_15 - 1] [i_12] [i_13 + 1] [i_12] = ((/* implicit */signed char) arr_29 [i_12] [i_12]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 3) 
        {
            arr_58 [i_12] [i_17] [i_12] = ((/* implicit */unsigned int) ((long long int) max(((-(((/* implicit */int) arr_54 [i_12] [(unsigned char)19])))), (((/* implicit */int) arr_10 [i_12])))));
            var_25 ^= ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */int) arr_20 [i_12] [i_12] [i_17])) | (((/* implicit */int) arr_51 [(_Bool)1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((max((arr_20 [i_12] [i_17] [i_17]), (arr_14 [i_12]))), (((/* implicit */short) arr_39 [i_12] [i_17] [i_12] [i_12])))))) : (((unsigned int) -504001424620186926LL))));
        }
        /* vectorizable */
        for (signed char i_18 = 0; i_18 < 22; i_18 += 3) 
        {
            arr_61 [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) 1214539624))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_12])) & (((/* implicit */int) arr_34 [i_12] [i_18] [i_18]))))) : (arr_16 [i_12] [i_18] [i_12] [i_12] [i_12] [7LL])));
            var_26 = ((/* implicit */signed char) var_0);
            /* LoopSeq 2 */
            for (unsigned short i_19 = 2; i_19 < 20; i_19 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_20 = 1; i_20 < 20; i_20 += 3) 
                {
                    arr_67 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)127)) || (((/* implicit */_Bool) 1536873716U))));
                    arr_68 [i_12] [i_18] [i_18] [i_18] = ((/* implicit */signed char) ((long long int) ((long long int) arr_24 [i_12] [i_18])));
                }
                for (int i_21 = 0; i_21 < 22; i_21 += 1) 
                {
                    var_27 = ((/* implicit */signed char) (unsigned short)14574);
                    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4060521447U))));
                    var_29 -= ((/* implicit */long long int) ((arr_37 [i_19 + 1] [i_19 - 1] [i_19 + 2] [i_19 + 1]) ? (((/* implicit */int) arr_37 [i_19 - 1] [i_19 + 2] [i_19 - 2] [i_19 - 2])) : (((/* implicit */int) arr_37 [i_19 + 1] [i_19 - 1] [i_19 + 2] [i_19 - 1]))));
                    var_30 = ((/* implicit */_Bool) arr_33 [(short)10] [i_18]);
                }
                var_31 = ((((/* implicit */_Bool) arr_71 [i_12] [i_19 + 1] [i_19 - 2] [15LL] [i_19 - 2] [i_12])) ? (arr_71 [i_19 - 1] [i_19 + 1] [i_19 - 2] [i_19] [i_19 + 1] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))));
                var_32 = ((/* implicit */short) ((signed char) 4192687682U));
                /* LoopSeq 1 */
                for (int i_22 = 0; i_22 < 22; i_22 += 2) 
                {
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_19 - 1] [i_19 - 2] [i_19 + 2])) ? (((/* implicit */int) arr_44 [i_19 - 2] [i_19] [i_19 - 2])) : (((/* implicit */int) var_3)))))));
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) arr_34 [i_12] [i_12] [i_19])) : (((/* implicit */int) ((signed char) (unsigned short)47355)))));
                    var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_54 [i_12] [i_18]))));
                    arr_75 [i_12] = arr_45 [i_12] [i_12] [i_12];
                }
            }
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                var_36 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_53 [i_12] [i_12] [(unsigned short)8] [i_18] [i_23] [(unsigned short)20] [i_23])))) - ((+(0U)))));
                /* LoopNest 2 */
                for (signed char i_24 = 2; i_24 < 21; i_24 += 3) 
                {
                    for (int i_25 = 0; i_25 < 22; i_25 += 3) 
                    {
                        {
                            var_37 -= ((/* implicit */long long int) arr_7 [(unsigned short)24] [i_18] [i_24 - 2] [(unsigned short)18]);
                            var_38 -= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) -5305474362549619849LL)) ? (arr_72 [(_Bool)1] [i_23] [i_23] [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_23] [i_24 - 2] [i_25]))))));
                        }
                    } 
                } 
            }
            arr_83 [i_12] = ((/* implicit */short) (~(((/* implicit */int) arr_34 [i_12] [i_12] [(unsigned short)1]))));
        }
    }
    var_39 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 1536873716U))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_3)))) : ((~(var_10)))))) ? (max((((/* implicit */int) var_3)), (var_10))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_11))) && (((var_0) <= (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
    var_40 = min((((/* implicit */int) var_11)), (((((/* implicit */int) ((_Bool) var_11))) >> (((var_4) - (1152508732413987370LL))))));
}
