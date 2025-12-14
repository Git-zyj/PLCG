/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46046
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
    var_17 = ((/* implicit */signed char) (-(min((((/* implicit */int) ((((/* implicit */int) (signed char)60)) <= (((/* implicit */int) (_Bool)1))))), ((~(((/* implicit */int) var_10))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))))));
                    arr_8 [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? ((+(((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_3)))))) : ((~(((var_15) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_19 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-60))));
            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
            var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
        }
        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            arr_17 [(short)18] [(short)18] = max((((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_14))))))), (max((min((var_16), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) min((((/* implicit */unsigned short) max((var_5), (((/* implicit */signed char) var_6))))), (max((var_14), (var_14)))))))))));
        }
        arr_18 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned char)242), (((/* implicit */unsigned char) (signed char)66))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */int) var_14)) | (((/* implicit */int) var_9))))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            var_23 = ((/* implicit */short) (~(((/* implicit */int) var_13))));
            /* LoopSeq 4 */
            for (short i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    for (signed char i_9 = 3; i_9 < 22; i_9 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_5))));
                            arr_31 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */short) (-(((/* implicit */int) var_6))));
                            arr_32 [(short)22] [i_5] [i_7] [i_8] [i_9] [(unsigned short)2] &= ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
                            var_26 += ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
            }
            for (short i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned char i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_8)) : (((var_6) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))));
                    var_28 = ((/* implicit */short) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_11))));
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        arr_39 [(_Bool)1] [(_Bool)1] [i_6] [i_6] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) (-(((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_2))))));
                        arr_40 [i_5] [i_6] [(signed char)9] [i_11] [i_12] [i_12] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) var_14))));
                        arr_41 [i_12] [i_6] [i_5] [i_10] [i_6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))));
                        arr_42 [(short)0] [i_12] |= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))));
                    }
                }
                for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (+(((/* implicit */int) var_7)))))));
                    arr_46 [i_6] [(short)6] = ((/* implicit */short) (-(((/* implicit */int) var_13))));
                }
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
                    var_31 = ((/* implicit */unsigned short) var_12);
                }
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
                {
                    arr_51 [i_5] [i_5] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */_Bool) var_1);
                    var_32 -= ((/* implicit */short) var_2);
                    var_33 = ((/* implicit */_Bool) max((var_33), ((!(var_10)))));
                    arr_52 [i_5] [i_6] [i_6] [(unsigned char)22] [i_5] [i_15] = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                    arr_53 [i_6] [i_15] [i_10] [i_6] [i_6] = ((/* implicit */short) (-((-(((/* implicit */int) var_7))))));
                }
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 23; i_16 += 4) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_34 &= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))));
                            arr_58 [i_5] [i_6] [i_10] [i_6] [i_17] = ((/* implicit */short) var_8);
                            var_35 = var_4;
                        }
                    } 
                } 
                arr_59 [i_5] [i_6] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
            }
            for (short i_18 = 0; i_18 < 23; i_18 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned char) var_13);
                var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15))));
                var_38 = ((/* implicit */signed char) var_1);
            }
            for (long long int i_19 = 2; i_19 < 22; i_19 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 23; i_20 += 4) 
                {
                    for (signed char i_21 = 2; i_21 < 19; i_21 += 2) 
                    {
                        {
                            arr_70 [i_5] [i_20] [i_6] [i_6] [i_21 + 3] = ((/* implicit */short) (+(((/* implicit */int) var_10))));
                            var_39 = var_13;
                            arr_71 [i_5] [i_6] [i_6] [i_6] [i_20] [(_Bool)1] [i_21] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_10))))) * (((/* implicit */int) var_11))));
                        }
                    } 
                } 
                arr_72 [i_5] [i_5] [i_19] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))));
            }
            var_40 = ((/* implicit */short) var_3);
        }
        var_41 &= ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
        /* LoopNest 3 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            for (long long int i_23 = 0; i_23 < 23; i_23 += 3) 
            {
                for (short i_24 = 0; i_24 < 23; i_24 += 2) 
                {
                    {
                        arr_79 [i_22] [(signed char)12] [i_22] [i_24] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_13)))))));
                        var_42 = ((/* implicit */_Bool) (+((~(((/* implicit */int) var_2))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_25 = 3; i_25 < 22; i_25 += 1) 
        {
            var_43 += ((/* implicit */long long int) (-((-(((/* implicit */int) var_12))))));
            arr_84 [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (short)-2673)) : (((/* implicit */int) (short)-1))));
            var_44 += ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
        }
        var_45 = var_3;
    }
    /* vectorizable */
    for (unsigned char i_26 = 0; i_26 < 15; i_26 += 3) 
    {
        var_46 = ((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_14))));
        var_47 += ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
        arr_89 [i_26] [i_26] = ((/* implicit */short) (-(var_16)));
        /* LoopNest 2 */
        for (signed char i_27 = 0; i_27 < 15; i_27 += 3) 
        {
            for (short i_28 = 1; i_28 < 14; i_28 += 3) 
            {
                {
                    var_48 = ((/* implicit */_Bool) max((var_48), (((var_15) || (((/* implicit */_Bool) var_12))))));
                    var_49 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_30 = 2; i_30 < 14; i_30 += 2) 
            {
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    for (unsigned short i_32 = 0; i_32 < 15; i_32 += 1) 
                    {
                        {
                            arr_106 [(short)10] [(short)10] [i_30] [i_32] [(signed char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))));
                            var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (short)2665))));
                        }
                    } 
                } 
            } 
            arr_107 [i_29] [i_26] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_3)))))));
        }
    }
    /* vectorizable */
    for (short i_33 = 0; i_33 < 10; i_33 += 1) 
    {
        var_51 = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
        arr_110 [i_33] = var_15;
        arr_111 [i_33] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_0)));
        /* LoopNest 3 */
        for (short i_34 = 0; i_34 < 10; i_34 += 3) 
        {
            for (unsigned short i_35 = 0; i_35 < 10; i_35 += 1) 
            {
                for (short i_36 = 0; i_36 < 10; i_36 += 1) 
                {
                    {
                        arr_119 [i_36] [i_34] [i_34] [i_33] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))));
                        arr_120 [i_35] [(_Bool)1] [(_Bool)1] [i_33] &= ((/* implicit */_Bool) (((-(var_16))) + (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))));
                        arr_121 [i_33] [i_34] [i_34] [i_36] = ((/* implicit */long long int) (-(((/* implicit */int) var_15))));
                    }
                } 
            } 
        } 
        var_52 = ((/* implicit */short) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_7)) + (10369)))));
    }
}
