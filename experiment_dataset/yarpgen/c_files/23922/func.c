/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23922
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (1438706179658016767ULL) : (((/* implicit */unsigned long long int) 2676834135U))));
        arr_4 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0] [13LL]) : (((/* implicit */long long int) 2147483648U))))) ? (arr_0 [i_0] [i_0]) : ((~(arr_0 [i_0] [i_0])))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */int) ((min((arr_2 [i_1]), (arr_2 [i_1]))) ? ((+(max((17008037894051534848ULL), (((/* implicit */unsigned long long int) arr_1 [i_1])))))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1080863910568919040ULL)))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (15749144707420240638ULL)))))));
        var_16 *= ((/* implicit */_Bool) (~(1438706179658016767ULL)));
        var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-28150))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4] [i_2])) ? (arr_5 [i_2] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (1438706179658016784ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1))))))));
                /* LoopNest 2 */
                for (long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        {
                            arr_23 [i_4] [i_4] [i_4] [i_5] [i_6] [i_2] = ((/* implicit */unsigned int) ((var_7) < (arr_0 [i_5 - 1] [i_5])));
                            var_19 = ((/* implicit */unsigned int) (!((!(arr_2 [i_2])))));
                            var_20 = ((/* implicit */signed char) var_5);
                            var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_5]))));
                        }
                    } 
                } 
            }
            for (long long int i_7 = 1; i_7 < 20; i_7 += 2) 
            {
                arr_26 [i_7] [i_7] = ((/* implicit */signed char) ((var_12) != (-2147483621)));
                arr_27 [i_2] [i_3] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22234))) : (1080863910568919040ULL))))));
                var_22 = ((/* implicit */unsigned long long int) ((arr_8 [i_7 - 1]) < (arr_8 [i_7 + 1])));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_7)) : (1080863910568919040ULL)));
                var_24 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_25 [i_2] [(_Bool)1] [i_2] [i_2])) != (((/* implicit */int) (signed char)127))))));
            }
            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_15 [i_2] [13U] [i_3]))))));
        }
        for (long long int i_8 = 2; i_8 < 18; i_8 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (-1634237186) : (((((/* implicit */_Bool) 2147483607)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) arr_16 [i_2] [i_8]))))));
            var_28 = ((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2] [i_2] [i_2]);
            arr_31 [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_16 [i_2] [i_2])) + (((/* implicit */int) var_6)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        }
        for (long long int i_9 = 2; i_9 < 18; i_9 += 3) /* same iter space */
        {
            arr_36 [i_9] [i_2] [i_9] = ((/* implicit */int) (+(6231821841538609073LL)));
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_9 [i_2] [i_2])) : (var_5))))));
        }
        arr_37 [i_2] = ((/* implicit */unsigned short) var_11);
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            var_30 = ((/* implicit */unsigned int) ((unsigned long long int) arr_11 [i_2] [i_10]));
            var_31 = var_4;
            /* LoopSeq 3 */
            for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_12 = 2; i_12 < 19; i_12 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        arr_49 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1220080024)) ? (((/* implicit */long long int) arr_18 [i_13] [i_13] [i_12 + 1] [i_12 + 2])) : (((((/* implicit */_Bool) var_14)) ? (arr_38 [i_2] [i_10] [i_12]) : (((/* implicit */long long int) arr_20 [i_2] [i_2] [i_11] [i_12 - 1] [i_11]))))));
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_2] [i_10] [i_10] [i_12] [i_13]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_12 + 1] [i_13] [i_11] [i_12 + 2]))) : (((long long int) arr_42 [i_12] [7ULL] [i_12])))))));
                        var_33 = ((((/* implicit */long long int) -1)) + (arr_11 [i_12 - 1] [i_13]));
                        var_34 = ((/* implicit */unsigned char) ((unsigned short) arr_14 [i_12 - 2] [i_10]));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_47 [i_10]))));
                        arr_53 [i_12 - 1] [i_10] [i_11] [i_12] [i_10] [i_10] [i_12 - 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_44 [i_2] [i_10] [i_2] [i_12 - 1] [i_14]))));
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) var_11))));
                    }
                    var_37 *= ((/* implicit */unsigned short) (~(((arr_13 [i_11]) ? (((/* implicit */unsigned long long int) var_11)) : (15749144707420240638ULL)))));
                    arr_54 [i_2] [i_10] [i_10] [i_11] [i_11] [i_12 + 1] = ((/* implicit */unsigned int) (~(1ULL)));
                }
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    arr_58 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] |= ((/* implicit */unsigned short) arr_2 [i_10]);
                    var_38 = ((/* implicit */unsigned char) (~(arr_9 [i_15] [i_11])));
                    arr_59 [i_10] [i_11] = (+((+(((/* implicit */int) arr_19 [i_2] [i_10] [i_11] [i_15])))));
                }
                var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_39 [i_11] [i_11]))));
                var_40 = ((/* implicit */long long int) (+(((((/* implicit */int) arr_44 [i_11] [i_10] [i_2] [i_10] [(unsigned char)11])) + (((/* implicit */int) var_0))))));
            }
            for (int i_16 = 0; i_16 < 21; i_16 += 3) 
            {
                var_41 = ((/* implicit */int) max((var_41), ((~(((/* implicit */int) (signed char)114))))));
                var_42 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_19 [i_2] [i_10] [i_10] [i_16]))));
                /* LoopSeq 2 */
                for (signed char i_17 = 0; i_17 < 21; i_17 += 4) /* same iter space */
                {
                    var_43 |= ((/* implicit */long long int) (((~(((/* implicit */int) arr_46 [i_2] [i_10] [i_16] [i_16] [i_17])))) < (((/* implicit */int) var_1))));
                    var_44 = ((/* implicit */unsigned long long int) var_1);
                    var_45 += (~(((long long int) arr_28 [i_16] [i_17])));
                    var_46 = ((/* implicit */long long int) var_1);
                }
                for (signed char i_18 = 0; i_18 < 21; i_18 += 4) /* same iter space */
                {
                    var_47 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_10]))) : (1438706179658016767ULL)))));
                    var_48 = ((/* implicit */unsigned char) var_14);
                }
                var_49 = ((/* implicit */unsigned int) arr_41 [(_Bool)1] [(_Bool)1] [i_10]);
                /* LoopSeq 1 */
                for (unsigned long long int i_19 = 2; i_19 < 19; i_19 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_20 = 3; i_20 < 20; i_20 += 4) 
                    {
                        var_50 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_28 [i_16] [i_19]))))));
                        var_51 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_50 [i_20 + 1] [i_20] [i_20 + 1] [(short)4] [i_20] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_19] [(unsigned short)5] [i_19] [i_19 - 1]))) : (((((/* implicit */_Bool) arr_24 [i_2] [i_10] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_71 [i_2] [i_2] [i_2] [i_2])))));
                        var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_19 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_19 - 2]))) : (arr_64 [i_20 + 1] [i_10] [i_19 - 2] [i_19])));
                    }
                    var_53 = ((/* implicit */int) arr_71 [i_10] [i_16] [i_16] [i_19 + 2]);
                }
            }
            for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 4) 
            {
                arr_80 [15ULL] [i_10] [i_21] = ((/* implicit */long long int) var_4);
                var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_2] [i_10] [i_21] [i_21])) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_19 [i_2] [i_10] [(unsigned short)6] [i_10]))));
            }
        }
        var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) var_7))));
    }
    var_56 = ((/* implicit */long long int) (~(var_13)));
}
