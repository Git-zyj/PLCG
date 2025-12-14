/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223813
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
    var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_19)))) ? (((/* implicit */int) var_3)) : (var_1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-127)) + (2147483647))) << (((2147483647) - (2147483647)))));
            var_21 -= ((/* implicit */unsigned short) ((((-2147483641) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0] [i_1])) + (7369)))));
        }
        arr_7 [i_0] = (((!(arr_2 [i_0] [i_0] [i_0]))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) -2147483640))))));
        /* LoopSeq 4 */
        for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_2 + 1])) < (((/* implicit */int) arr_4 [i_2 + 1]))));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 1; i_3 < 8; i_3 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */int) ((signed char) -2147483647));
                arr_14 [i_2] &= ((/* implicit */_Bool) (((((+(-2147483647))) + (2147483647))) << (((((/* implicit */int) arr_11 [i_3 + 3] [i_3 + 3] [i_3] [i_3 + 3])) - (99)))));
                var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16788)) ? (105930122) : (2147483636)));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_10 [i_2] [i_4]))))));
                    var_26 = ((/* implicit */unsigned long long int) (~(arr_0 [i_3 + 3])));
                }
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                {
                    arr_19 [i_0] [i_0] [i_0] [i_2] [i_3 + 2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_3 - 1] [i_3 + 3] [i_3 + 3] [i_3 + 1])) ? (((/* implicit */int) arr_13 [i_2 + 1])) : (((((/* implicit */_Bool) arr_18 [i_5] [i_2] [i_0])) ? (2147483628) : (2147483636)))));
                    var_27 += ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_3 + 2])) + (2147483647))) << (((((((/* implicit */int) arr_4 [i_3 - 1])) + (67))) - (29)))));
                }
            }
            for (unsigned short i_6 = 1; i_6 < 8; i_6 += 1) /* same iter space */
            {
                arr_22 [i_0] [i_0] [(signed char)2] &= ((/* implicit */unsigned short) arr_9 [i_2] [i_2 + 1] [i_2]);
                arr_23 [i_6 + 3] [4ULL] [i_2] [8ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_6 + 3])) <= (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned short i_7 = 1; i_7 < 8; i_7 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_2] [i_7] [i_7 + 1]))))));
                arr_27 [i_0] &= arr_10 [i_2 + 1] [i_7];
                arr_28 [i_7] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_2 + 1] [i_7 + 3] [i_7])) : ((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((/* implicit */int) (signed char)0))))));
                arr_29 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_2 + 1] [i_7 - 1])) >= (((/* implicit */int) (_Bool)1))));
                var_29 += ((/* implicit */short) (!(((/* implicit */_Bool) 2147483647))));
            }
        }
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            arr_32 [i_8] [i_8] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_21 [i_8] [i_0])) & (((/* implicit */int) arr_13 [i_0]))));
            var_30 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [i_0] [i_8]))));
            arr_33 [i_0] [i_0] [i_8] = ((/* implicit */unsigned short) arr_20 [i_0] [i_0] [i_0]);
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 2; i_9 < 7; i_9 += 1) 
            {
                var_31 = ((/* implicit */int) (~(arr_12 [i_0] [i_9 + 4] [i_9] [i_9])));
                var_32 = ((/* implicit */short) var_11);
            }
        }
        for (signed char i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
        {
            arr_38 [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_35 [i_10] [i_10] [i_10] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) (signed char)1))))));
            var_33 += ((/* implicit */short) var_13);
            arr_39 [i_0] [i_10] [i_10] = ((/* implicit */signed char) (~(arr_0 [i_0])));
            var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)240)) - (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (_Bool)1))));
        }
        for (signed char i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_14 = 0; i_14 < 11; i_14 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-18429))));
                            var_36 = ((/* implicit */unsigned short) arr_49 [i_0] [i_11] [i_11] [i_12] [i_13] [i_14]);
                        }
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            arr_56 [i_0] = ((/* implicit */short) ((arr_9 [i_15 + 1] [i_15 + 1] [i_15 + 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_15 + 1] [i_15] [i_15] [i_13] [i_15])))));
                            arr_57 [i_0] [i_11] [i_12] [i_13] [i_15] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_46 [i_13] [i_13] [i_15 + 1] [i_13] [i_15 + 1] [i_15]))));
                        }
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                        {
                            arr_61 [i_16] [i_16] [i_16] [i_12] [i_16] [i_11] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_0] [i_11] [i_12] [4] [i_16 + 1] [i_16 + 1])) ? (((/* implicit */unsigned long long int) -1)) : (arr_49 [i_0] [i_0] [(_Bool)1] [i_13] [i_16] [i_16 + 1])));
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_16 + 1] [i_11] [(short)9] [i_12] [i_13] [5ULL])) & ((-(-2147483647)))));
                        }
                        var_38 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_39 = ((/* implicit */short) 2147483610);
            arr_62 [(signed char)6] [8ULL] = ((/* implicit */signed char) (_Bool)1);
            var_40 -= ((/* implicit */unsigned long long int) -2147483647);
        }
    }
    /* LoopSeq 2 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        arr_65 [i_17] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_64 [i_17])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_64 [i_17])))), (((((/* implicit */_Bool) arr_64 [i_17])) ? (((/* implicit */int) arr_64 [i_17])) : (((/* implicit */int) arr_64 [i_17]))))));
        var_41 = ((/* implicit */int) arr_64 [i_17]);
        var_42 = ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)32386))))))) || (((/* implicit */_Bool) arr_64 [i_17]))));
        /* LoopNest 3 */
        for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 4) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 2) 
            {
                for (unsigned short i_20 = 0; i_20 < 14; i_20 += 1) 
                {
                    {
                        arr_73 [i_17] [i_20] [i_19] [i_17] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32386)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (_Bool)1)))))));
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_66 [i_18] [i_19] [i_20]))))) ? ((~(((/* implicit */int) arr_64 [i_18])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_70 [i_17] [i_19]))))))))));
                        var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 2147483626)) | (arr_69 [i_17] [i_18] [i_19] [i_20]))) <= ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_69 [i_17] [i_18] [i_18] [i_17]))))))));
                        var_45 = ((/* implicit */short) (((~(((/* implicit */int) arr_64 [i_19])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_64 [i_19])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 4) 
        {
            var_46 += (short)12997;
            var_47 *= arr_67 [i_17] [(signed char)4] [i_21];
            arr_77 [i_17] [i_21] = ((/* implicit */signed char) 2147483638);
        }
    }
    /* vectorizable */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        arr_80 [i_22] [5ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
        var_48 = ((/* implicit */unsigned short) arr_78 [i_22]);
        /* LoopNest 2 */
        for (unsigned short i_23 = 4; i_23 < 18; i_23 += 4) 
        {
            for (short i_24 = 0; i_24 < 20; i_24 += 4) 
            {
                {
                    arr_85 [i_22] [i_24] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-5))));
                    arr_86 [i_22] [(unsigned short)7] [i_24] = ((/* implicit */unsigned short) arr_78 [i_23 + 1]);
                    var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) arr_81 [i_23 - 4] [i_23 + 1] [i_23 - 4]))));
                }
            } 
        } 
        arr_87 [i_22] [i_22] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_81 [i_22] [i_22] [i_22])) ? (((/* implicit */int) arr_78 [i_22])) : (((/* implicit */int) arr_84 [i_22] [i_22] [i_22] [i_22]))));
    }
}
