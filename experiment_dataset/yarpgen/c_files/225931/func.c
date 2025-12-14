/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225931
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) min((var_5), (var_9))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) var_5);
                        arr_13 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2] [i_2])) ^ (((/* implicit */int) arr_2 [(signed char)5] [i_1]))));
                        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */int) (short)17644)) ^ (((/* implicit */int) var_5)))))))));
                    }
                    for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (+((((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_0] [i_0 - 2]))))));
                        var_13 = ((_Bool) (_Bool)1);
                        arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_4])) == (((/* implicit */int) arr_1 [i_0 - 2]))));
                    }
                    var_14 -= ((/* implicit */long long int) ((var_2) ? (((/* implicit */int) ((unsigned char) var_9))) : ((+(((/* implicit */int) var_7))))));
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */short) (((-(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))) != ((-(var_10)))));
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (arr_4 [i_0] [i_0 + 1])));
            arr_21 [i_0 - 2] [i_0] [i_5] = ((long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (arr_15 [i_0 + 1] [i_5] [i_0])));
            /* LoopSeq 4 */
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0 - 2] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        var_17 += ((/* implicit */unsigned char) (-(arr_3 [i_0 + 1] [i_0 + 2])));
                    }
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) arr_28 [i_0 + 2] [i_0 - 2] [i_0 - 2]);
                        var_18 = ((/* implicit */unsigned char) (!(arr_20 [2])));
                    }
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0 - 2]))) <= (arr_31 [i_0 - 2] [i_0 + 2] [i_0 - 2])));
                        arr_36 [i_0] [i_5] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) arr_7 [i_0] [i_0]);
                    }
                    var_20 = arr_9 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0];
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0])) == (((/* implicit */int) var_7))));
                }
                for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    var_22 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_0 + 2])) ^ (((/* implicit */int) (unsigned char)129))));
                    arr_40 [i_5] [i_5] [i_5] = (unsigned short)65529;
                    arr_41 [i_0 - 1] [i_5] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) arr_5 [i_6] [i_6] [i_6]);
                    var_23 = ((/* implicit */_Bool) ((var_2) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])));
                }
                var_24 = ((/* implicit */short) arr_24 [i_0] [i_0 - 1] [i_0 + 1]);
                arr_42 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2525964109U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-690253876755970460LL)));
                arr_43 [i_6] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) var_4);
                var_25 = ((/* implicit */unsigned long long int) arr_9 [i_0 - 2] [i_0 + 2] [i_0 - 2] [(_Bool)1]);
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_0 + 2] [i_0 - 2] [i_5] [i_0 - 2] [i_0] [i_0 + 2])) ? (-4433825069761855743LL) : (((/* implicit */long long int) (+(((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                var_27 = ((/* implicit */unsigned int) ((arr_6 [i_0 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (arr_4 [i_5] [i_5])))))));
                arr_46 [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                arr_47 [i_5] [(short)2] [i_12] [i_12] = ((/* implicit */short) ((signed char) arr_2 [i_0 - 1] [i_0 - 2]));
            }
            for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                var_28 -= ((/* implicit */short) (~(((/* implicit */int) ((_Bool) arr_15 [i_0] [i_0] [i_0])))));
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_38 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 1]))));
            }
            for (long long int i_14 = 4; i_14 < 8; i_14 += 1) 
            {
                arr_53 [i_5] [3ULL] [3ULL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    for (unsigned int i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2169641865U)) ? (((/* implicit */int) arr_57 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)124)))))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_0] [(unsigned short)11] [i_0] [i_0] [i_0] [i_0 - 1])) ^ (((/* implicit */int) (unsigned char)129))));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_62 [i_17] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_35 [i_0 + 2] [(unsigned short)5] [i_0] [i_0] [i_0 + 2]))));
            /* LoopNest 3 */
            for (unsigned char i_18 = 0; i_18 < 12; i_18 += 1) 
            {
                for (unsigned int i_19 = 0; i_19 < 12; i_19 += 1) 
                {
                    for (int i_20 = 0; i_20 < 12; i_20 += 1) 
                    {
                        {
                            var_32 += ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) var_8)));
                            var_33 = ((/* implicit */unsigned char) (+(arr_59 [i_0 - 1] [i_0 - 1])));
                        }
                    } 
                } 
            } 
            arr_72 [i_0 - 1] [i_17] [i_0] = ((/* implicit */_Bool) ((long long int) 3545938488U));
            /* LoopSeq 3 */
            for (unsigned short i_21 = 0; i_21 < 12; i_21 += 4) 
            {
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_67 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_52 [i_0 + 2] [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) ((arr_0 [i_0 - 2]) >= (((/* implicit */int) var_2)))))));
                var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_69 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 - 1] [i_0] [i_0 + 2]))));
                var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) var_9))));
            }
            for (unsigned char i_22 = 0; i_22 < 12; i_22 += 3) /* same iter space */
            {
                arr_80 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_22] [i_22] [i_22]))) + (arr_34 [i_0] [i_0] [i_0] [i_0 + 2] [i_0])))));
                arr_81 [i_0] [i_0] [i_17] = ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
                arr_82 [i_0] [i_17] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned char i_23 = 0; i_23 < 12; i_23 += 3) /* same iter space */
            {
                arr_87 [i_0 + 1] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0 + 1] [1U])) ? (((/* implicit */int) arr_58 [i_0 - 1])) : (((/* implicit */int) arr_56 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))));
            }
        }
        for (unsigned char i_24 = 0; i_24 < 12; i_24 += 4) 
        {
            var_38 *= ((/* implicit */unsigned char) ((long long int) (unsigned short)65535));
            var_39 = arr_49 [i_0] [i_0] [i_0];
            var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-52))));
            /* LoopNest 2 */
            for (unsigned short i_25 = 2; i_25 < 11; i_25 += 1) 
            {
                for (signed char i_26 = 0; i_26 < 12; i_26 += 3) 
                {
                    {
                        var_41 = ((/* implicit */long long int) (-(arr_34 [i_0] [i_0] [i_0 - 1] [i_0] [i_0])));
                        arr_95 [i_25] [i_25] [i_26] [i_25] [i_25] [i_25] = ((/* implicit */signed char) var_10);
                        var_42 = ((/* implicit */short) arr_3 [(_Bool)1] [(_Bool)1]);
                    }
                } 
            } 
        }
        arr_96 [i_0 - 1] = ((/* implicit */short) arr_11 [(short)2] [(short)2] [i_0] [i_0] [i_0 - 2]);
        var_43 = ((/* implicit */unsigned char) (-(3145728)));
    }
    var_44 ^= ((/* implicit */long long int) (unsigned char)129);
    var_45 = ((/* implicit */_Bool) var_6);
}
