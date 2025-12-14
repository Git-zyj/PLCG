/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222436
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (+((+((~(((/* implicit */int) arr_1 [i_0 - 1]))))))));
        arr_4 [i_0] [(short)16] &= ((/* implicit */short) arr_0 [i_0 - 3]);
        var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)9)) ? (((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0 + 2])))) ? (((((/* implicit */_Bool) -3730469851658761596LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_2 [i_0 - 3])))) : (min((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [(unsigned short)5]))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_14 = (+(((((/* implicit */_Bool) (short)23446)) ? (9014487174063245025LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65511))))));
        var_15 = ((/* implicit */short) arr_2 [(unsigned short)2]);
        var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) min((13LL), (((/* implicit */long long int) arr_1 [(short)8]))))) ? (((/* implicit */int) min(((unsigned short)6489), (arr_0 [i_1 - 2])))) : (((/* implicit */int) max((arr_1 [i_1]), (((/* implicit */short) (!(((/* implicit */_Bool) (short)32767))))))))));
        var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)28254)) ? ((+(((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_6 [(unsigned short)0] [(unsigned short)0])))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_18 = ((/* implicit */short) (+(arr_7 [i_2])));
        arr_12 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-8063))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_4 = 3; i_4 < 18; i_4 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        {
                            arr_29 [i_4] [i_4] = ((/* implicit */short) (-(((/* implicit */int) arr_23 [i_3] [(short)14] [(short)14] [(short)14]))));
                            var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_7])) ? ((~(((/* implicit */int) arr_13 [i_4])))) : (((((/* implicit */_Bool) arr_15 [(short)1])) ? (((/* implicit */int) arr_21 [i_7])) : (((/* implicit */int) (short)32767))))));
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */long long int) arr_27 [i_4 + 2] [i_4 + 3] [i_4 + 1] [i_4 + 2]);
            }
            for (long long int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */int) arr_33 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_14 [i_4]))))) ? (((/* implicit */int) arr_20 [i_4])) : (((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */int) arr_27 [i_3] [i_4 - 1] [i_8] [i_4])) : (((/* implicit */int) arr_28 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))));
                arr_34 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_3] [i_4 - 2])) ? (((/* implicit */int) arr_27 [i_3] [i_4 + 2] [i_8] [i_8])) : (((/* implicit */int) arr_24 [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 4]))));
                /* LoopSeq 3 */
                for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    var_22 -= ((((/* implicit */_Bool) arr_32 [i_3] [i_4] [i_8])) ? (((((/* implicit */_Bool) -5665319219000367301LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32767))) : (arr_31 [i_9] [i_9]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_3] [i_3] [i_3] [i_3]))))));
                    arr_39 [i_4] [i_9] [i_8] [i_4] [i_4] = arr_23 [i_3] [i_4] [i_8] [i_9];
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (short)15814)) : (((/* implicit */int) (short)-11911))))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_36 [i_3] [i_4 + 1] [i_8] [i_4 + 1]))));
                }
                for (short i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        var_24 = arr_20 [i_4];
                        var_25 = ((/* implicit */unsigned short) (short)-17924);
                        arr_44 [i_11] [i_4] [i_8] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_3] [i_4] [i_11]))))) ? (((((/* implicit */_Bool) -6651024823615246797LL)) ? (((/* implicit */int) (short)-14818)) : (((/* implicit */int) arr_14 [i_11])))) : ((+(((/* implicit */int) arr_41 [i_3] [i_8] [i_4]))))));
                    }
                    var_26 += arr_21 [i_8];
                    var_27 = arr_40 [i_10] [i_8] [i_4];
                    var_28 += ((/* implicit */unsigned short) (~(7244669684640226398LL)));
                }
                for (short i_12 = 1; i_12 < 20; i_12 += 4) 
                {
                    arr_47 [i_3] [i_3] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned short) arr_42 [i_4]);
                    arr_48 [i_3] [i_4] [i_4] [i_8] [i_12] [i_12] = ((/* implicit */long long int) arr_20 [i_4]);
                    arr_49 [i_4] [i_8] [i_4 + 1] [i_3] [i_4] = ((/* implicit */long long int) arr_15 [i_3]);
                    var_29 = (-(arr_19 [i_3] [i_3] [i_12]));
                }
                arr_50 [i_3] [i_4] [i_3] = ((/* implicit */short) arr_46 [i_8] [i_4] [i_4] [i_3] [i_4] [i_3]);
            }
            for (long long int i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
            {
                var_30 = arr_23 [i_3] [i_4 - 1] [i_13] [i_13];
                arr_54 [i_3] [(short)11] [i_4] = ((/* implicit */long long int) arr_13 [i_3]);
                var_31 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_27 [i_3] [i_4] [i_13] [i_4 + 3]))));
                arr_55 [i_3] [i_3] [i_4 - 2] [i_4] = ((/* implicit */long long int) arr_46 [21LL] [i_4] [i_4] [i_4] [i_4] [i_3]);
            }
            /* LoopSeq 1 */
            for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                arr_58 [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_57 [i_4])) ? (((/* implicit */int) (short)-29022)) : ((~(((/* implicit */int) arr_53 [i_3] [i_4 + 3] [i_4]))))));
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 22; i_15 += 4) 
                {
                    arr_61 [i_4] [i_14] [i_4] [i_4] = (~(3730469851658761610LL));
                    var_32 += ((/* implicit */long long int) (~(((/* implicit */int) arr_35 [i_4] [i_4] [i_4 + 2] [i_4] [i_4 + 2]))));
                }
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4189676931666574384LL)) ? (arr_43 [i_3] [i_3] [i_3] [i_4] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_4] [i_4] [i_4])))))) ? (((((/* implicit */_Bool) arr_31 [i_3] [i_4])) ? (((/* implicit */int) arr_32 [i_3] [13LL] [i_14])) : (((/* implicit */int) arr_17 [i_3])))) : (((/* implicit */int) arr_51 [i_3] [i_4] [i_3] [i_14]))));
                /* LoopSeq 1 */
                for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
                {
                    var_34 = ((/* implicit */long long int) arr_52 [i_3] [i_4 - 3] [i_3]);
                    var_35 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_37 [i_3] [i_3])))) ? ((~(((/* implicit */int) arr_40 [i_16] [i_16] [i_16])))) : (((/* implicit */int) arr_63 [i_3] [i_3] [i_3] [i_3]))));
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_4] [i_4 + 3] [i_4] [i_4])) ? (((/* implicit */int) arr_35 [1LL] [(short)19] [i_4 + 1] [1LL] [i_4 + 1])) : (((/* implicit */int) arr_30 [i_4 + 3] [i_4 - 2] [i_4 + 4]))));
                    arr_65 [(short)19] [i_4] [i_4] [i_16] [i_4 + 4] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_60 [i_3] [i_4] [i_14] [i_16] [i_16])))) ? (((/* implicit */int) arr_46 [i_3] [i_4] [i_3] [i_4 - 2] [(unsigned short)0] [i_16])) : (((/* implicit */int) arr_17 [i_3]))));
                }
            }
        }
        arr_66 [i_3] = ((/* implicit */long long int) arr_52 [i_3] [i_3] [i_3]);
        var_37 -= ((/* implicit */short) arr_30 [i_3] [i_3] [i_3]);
        arr_67 [(unsigned short)0] [(short)6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_33 [i_3] [i_3] [i_3]))));
        arr_68 [i_3] = arr_57 [i_3];
    }
    var_38 = ((((/* implicit */_Bool) var_10)) ? ((~(3730469851658761610LL))) : (((/* implicit */long long int) (-((~(((/* implicit */int) var_8))))))));
}
