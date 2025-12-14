/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196708
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) 296922848U);
        var_14 &= var_0;
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_2 [i_4] [i_3]);
                        arr_14 [i_1] &= ((/* implicit */unsigned short) var_9);
                    }
                } 
            } 
            var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(2063342578)))), (arr_2 [(short)8] [(unsigned short)16])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2063342578))))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_11))))));
            var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((arr_6 [i_2]) >= (((/* implicit */long long int) 19484889))))), (arr_12 [i_1] [i_1] [i_1] [i_1] [(unsigned char)4])))) ? (var_8) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_11 [i_1] [i_2] [i_1] [i_2] [i_1] [i_2]), (((/* implicit */unsigned short) var_2))))))))));
            var_17 += ((/* implicit */unsigned int) var_6);
            arr_15 [i_2] [(_Bool)1] = ((/* implicit */unsigned int) var_11);
        }
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                for (unsigned char i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((max((max((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) max(((_Bool)1), (arr_5 [i_6] [i_5])))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [3U] [i_5] [3U] [i_6] [i_7 + 2])))));
                        arr_22 [i_1] [i_6] [i_6] [i_7 + 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (-(arr_4 [i_1]))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (var_8) : (((/* implicit */int) min((arr_16 [i_5] [i_5]), (((/* implicit */short) (_Bool)1))))))) : (((/* implicit */int) var_10))));
                        /* LoopSeq 3 */
                        for (short i_8 = 2; i_8 < 20; i_8 += 4) 
                        {
                            arr_25 [i_6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)2])) ? (((((/* implicit */_Bool) arr_0 [i_6])) ? (((((/* implicit */_Bool) arr_24 [(unsigned char)3] [i_5] [17U])) ? (((/* implicit */int) arr_23 [i_5] [i_5])) : (((/* implicit */int) arr_23 [(signed char)15] [i_7])))) : (-2063342579))) : (((/* implicit */int) ((_Bool) ((arr_1 [i_6]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))));
                            var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                            arr_28 [13U] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (min((((/* implicit */int) arr_18 [i_7 + 1] [i_5] [i_6] [i_7])), (2063342578))) : ((-((-(((/* implicit */int) var_10))))))));
                        }
                        for (short i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            arr_31 [i_6] [13LL] [8U] [11U] [(short)2] = ((/* implicit */unsigned int) ((var_13) >= (((/* implicit */long long int) var_1))));
                            var_21 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                        }
                        var_22 = ((/* implicit */short) (unsigned char)14);
                        /* LoopSeq 4 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_23 = ((/* implicit */int) var_6);
                            arr_35 [(unsigned short)19] [(unsigned short)19] [(short)0] [4U] [i_6] [i_7 - 1] [i_6] = ((/* implicit */int) 1007045907U);
                        }
                        for (unsigned char i_12 = 3; i_12 < 19; i_12 += 4) 
                        {
                            arr_39 [i_6] = ((/* implicit */int) var_10);
                            arr_40 [i_1] [i_6] [i_6] [i_6] [i_7] [i_7] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_1] [i_6] [i_6] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_7 + 1] [i_12 - 2] [i_6] [i_12])) || (((/* implicit */_Bool) arr_34 [i_7 + 1] [(unsigned short)2] [i_6] [i_7 - 1]))))) : (((-2063342579) % (((/* implicit */int) arr_27 [i_12] [i_12 + 2] [i_7 + 2] [i_7 - 1] [i_7 + 2]))))));
                        }
                        for (unsigned int i_13 = 2; i_13 < 19; i_13 += 1) 
                        {
                            arr_45 [i_6] [i_6] = ((/* implicit */short) var_5);
                            arr_46 [i_6] [i_5] [i_5] [3U] [i_5] [(unsigned char)0] [(short)11] = ((/* implicit */unsigned int) var_10);
                            arr_47 [i_1] [i_6] [i_5] [14U] [i_7] [i_13 + 2] = ((/* implicit */int) min((max((arr_11 [i_7 - 1] [i_5] [(signed char)0] [i_7] [i_7] [i_13 - 1]), (arr_11 [i_7 - 1] [i_1] [i_1] [i_5] [i_13] [i_13 - 1]))), (((/* implicit */unsigned short) arr_20 [i_6] [i_5]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            arr_51 [i_6] = ((/* implicit */_Bool) var_1);
                            var_24 = 15U;
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_9 [i_5] [7LL] [i_14]))));
                            arr_52 [i_1] [i_1] [i_1] [i_1] [i_6] = (-(var_0));
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */long long int) arr_27 [i_1] [i_5] [i_1] [i_1] [9U]);
            arr_53 [i_1] [2LL] [i_1] = ((/* implicit */_Bool) var_0);
            var_27 -= ((/* implicit */_Bool) var_10);
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (3967300625674477655LL) : (((/* implicit */long long int) 15U))));
        }
        /* vectorizable */
        for (int i_15 = 4; i_15 < 20; i_15 += 1) 
        {
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_1])) ? (((/* implicit */int) arr_23 [i_1] [i_1])) : (((/* implicit */int) (short)-7485))));
            arr_57 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_15] [12])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (short)30377))))) : (((/* implicit */int) arr_5 [i_15 - 3] [i_15 - 3]))));
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-848355975) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((arr_44 [i_1] [8LL]) != (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (((/* implicit */int) var_4))));
        }
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (-(-598227012)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_1] [i_1] [10U])) * (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1] [i_1]))) : (var_5)))))));
        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3967300625674477655LL)) ? (((/* implicit */int) ((unsigned short) arr_27 [i_1] [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */int) min((var_3), (((/* implicit */short) var_9)))))))) ? (((((/* implicit */_Bool) arr_21 [(short)14] [(short)14] [i_1] [i_1])) ? (((/* implicit */int) arr_16 [i_1] [(short)16])) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_56 [i_1] [(short)17] [i_1])))))) : (((/* implicit */int) var_4)))))));
        var_33 = ((((/* implicit */_Bool) min((min((3967300625674477646LL), (((/* implicit */long long int) 848355975)))), (((/* implicit */long long int) max((((/* implicit */int) var_12)), (-2063342581))))))) ? ((-(-2063342581))) : (((/* implicit */int) var_11)));
    }
    var_34 = ((/* implicit */long long int) (((~((~(((/* implicit */int) var_12)))))) >= (((/* implicit */int) var_2))));
}
