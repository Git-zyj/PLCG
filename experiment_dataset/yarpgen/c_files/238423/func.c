/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238423
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
    var_11 ^= ((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) var_10)), (562881233944576LL)))));
    var_12 = var_6;
    var_13 = var_8;
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -562881233944592LL))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_16 = ((/* implicit */long long int) (+(((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) min(((signed char)-90), (((/* implicit */signed char) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_11 [i_1] [i_2] [i_3])))) % (((/* implicit */int) arr_1 [i_2]))));
                    var_18 = ((((/* implicit */int) (!(((/* implicit */_Bool) 562881233944582LL))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))));
                    var_19 = ((int) ((((/* implicit */_Bool) (~(562881233944609LL)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [(_Bool)1] [i_1])), (arr_8 [i_3] [i_2] [i_1])))) : (((/* implicit */int) (signed char)63))));
                    var_20 -= ((((/* implicit */_Bool) ((unsigned long long int) -562881233944579LL))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)73))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2070408412)) ? (-562881233944583LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)96))))))))));
                    arr_12 [i_1] [i_1] [i_3] = ((/* implicit */long long int) (signed char)114);
                }
            } 
        } 
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_4 = 3; i_4 < 19; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 1; i_5 < 18; i_5 += 4) 
            {
                var_21 = ((/* implicit */int) ((-7981732284892661524LL) | (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4 - 3] [i_4])))));
                arr_17 [i_1] [i_4] [(signed char)8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)89))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) -562881233944597LL)))))));
            }
            for (int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 3; i_7 < 18; i_7 += 3) 
                {
                    for (unsigned char i_8 = 3; i_8 < 16; i_8 += 1) 
                    {
                        {
                            arr_27 [i_1] [i_4] [i_1] = ((/* implicit */signed char) -562881233944568LL);
                            arr_28 [i_1] = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)92))) : (562881233944552LL));
                            arr_29 [i_1] [i_4] = ((/* implicit */long long int) (((((~(((/* implicit */int) arr_6 [i_6])))) + (2147483647))) << (((((/* implicit */int) ((3880666734384011445LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)-17225)))))) - (1)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_4 - 3] [i_4] [17] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_4 - 2] [i_4 - 2] [i_6] [i_4]))));
            }
            var_23 |= ((/* implicit */unsigned long long int) arr_3 [i_4 - 3] [4ULL]);
        }
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            var_24 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_1] [i_1] [i_9] [i_9])) >> (((8463457U) - (8463432U)))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_9]))) : (arr_10 [i_1] [i_1] [(unsigned char)14])));
            /* LoopSeq 2 */
            for (short i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                var_26 = ((/* implicit */int) ((arr_9 [i_1] [i_9] [i_10] [i_10]) >= (((/* implicit */unsigned long long int) 4294967279U))));
                var_27 = ((/* implicit */unsigned int) (!(arr_15 [i_1] [i_10] [i_9] [i_1])));
            }
            for (unsigned int i_11 = 3; i_11 < 19; i_11 += 2) 
            {
                var_28 = ((/* implicit */short) min((var_28), ((short)6144)));
                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)6136)))) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) arr_36 [i_1] [i_9])))))));
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_11 - 1] [i_11 - 2])) << (((533769701U) - (533769686U)))));
            }
        }
        for (int i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            arr_41 [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_1] [i_12] [i_12] [i_12]))) : (arr_38 [i_1])))));
            var_31 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_15 [i_1] [i_12] [i_1] [i_1]) && (((/* implicit */_Bool) 10ULL))))) << (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_1] [i_12] [17LL] [i_1]))))));
        }
        for (signed char i_13 = 0; i_13 < 20; i_13 += 2) 
        {
            arr_45 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)19)) ? (max((arr_20 [i_13] [6LL] [i_13] [i_1]), (((/* implicit */int) arr_34 [i_1] [(short)19] [i_1] [i_13])))) : ((-((~(((/* implicit */int) (unsigned short)36892))))))));
            arr_46 [i_13] [i_1] [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-1635900014512313674LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)54))) : (131941395333120LL)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)228))));
        }
    }
    for (unsigned char i_14 = 2; i_14 < 19; i_14 += 2) 
    {
        arr_50 [i_14 - 2] [15] = ((/* implicit */_Bool) min(((+((+(2147483647))))), (((((/* implicit */_Bool) 1810272352061574191LL)) ? (((/* implicit */int) min(((unsigned char)7), ((unsigned char)13)))) : (((/* implicit */int) (_Bool)1))))));
        arr_51 [i_14] = ((/* implicit */unsigned short) max((((((/* implicit */int) (!((_Bool)1)))) - (((((/* implicit */_Bool) arr_8 [i_14] [(_Bool)1] [4U])) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) arr_25 [i_14])))))), (((/* implicit */int) (!(arr_15 [i_14 - 2] [i_14 - 1] [i_14 + 1] [i_14]))))));
        var_32 = ((/* implicit */unsigned short) min(((~(arr_26 [i_14] [i_14] [(unsigned short)11] [i_14] [i_14] [i_14] [i_14 - 1]))), (((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) (short)29001))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_15 = 2; i_15 < 18; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (int i_16 = 2; i_16 < 19; i_16 += 3) 
            {
                for (long long int i_17 = 2; i_17 < 19; i_17 += 2) 
                {
                    {
                        arr_59 [i_17] [i_15] [i_15] [i_14 - 2] = ((/* implicit */unsigned char) ((short) 2563600726U));
                        arr_60 [i_14 + 1] [i_14] [i_14] [i_15] [i_16] [i_15] = ((/* implicit */int) arr_33 [i_15] [i_15] [i_15] [5U]);
                        arr_61 [(unsigned short)14] [i_15] [i_15] [14LL] [(unsigned char)8] [i_15] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_14 - 2])) || (((/* implicit */_Bool) arr_7 [i_14]))))) != ((-(((/* implicit */int) (_Bool)1))))));
                        arr_62 [i_15] [i_15] [i_16] [i_17] [i_15] [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1LL))));
                    }
                } 
            } 
            arr_63 [i_15] [i_14] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_15])) * (((/* implicit */int) arr_3 [i_15 - 2] [i_15]))));
            /* LoopNest 2 */
            for (signed char i_18 = 0; i_18 < 20; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_70 [i_15] [3LL] [i_18] [i_19] = ((/* implicit */unsigned short) (_Bool)1);
                        arr_71 [i_15] [i_15] [(signed char)10] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_65 [i_14 - 2] [i_15 - 2] [i_15 + 2]))));
                        arr_72 [i_14] [(_Bool)1] [i_18] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8463472U))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_20 = 1; i_20 < 17; i_20 += 2) 
            {
                var_33 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-22940)) * (((/* implicit */int) (signed char)105))))) ? (1170720218939605676LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_15] [i_15])))));
                arr_75 [i_15] [i_15] [10ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96))) == (arr_47 [i_14 - 1])));
                arr_76 [i_14] [i_14] [i_15 + 2] [i_15] = ((/* implicit */int) arr_38 [i_20 + 3]);
                arr_77 [i_14] [i_15] [i_20 + 3] [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-28041))));
            }
            for (long long int i_21 = 2; i_21 < 19; i_21 += 4) 
            {
                var_35 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)31))));
                /* LoopSeq 1 */
                for (int i_22 = 1; i_22 < 18; i_22 += 3) 
                {
                    var_36 = ((/* implicit */int) arr_53 [0U] [0U]);
                    arr_82 [12] [i_22 + 2] [i_15] [i_22 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_14] [i_15] [i_15] [(short)19]))));
                    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_19 [i_14] [i_14])) : (arr_80 [i_22] [(short)1] [i_22 - 1] [i_22] [i_21] [2]))))));
                    arr_83 [i_15] [i_15] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_73 [i_22 + 2] [i_15] [i_15] [i_14]))));
                }
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [(signed char)14] [i_15 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47021))) : (4286503795U)));
            }
        }
    }
    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
    {
        var_39 = ((/* implicit */unsigned int) (unsigned char)9);
        arr_86 [i_23] = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) arr_58 [i_23] [i_23] [(signed char)10] [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35686))) : (arr_73 [i_23] [0LL] [i_23] [i_23]))), (((/* implicit */unsigned long long int) (signed char)-122)))), (((/* implicit */unsigned long long int) max((arr_10 [i_23] [i_23] [i_23]), (((/* implicit */long long int) (short)28040)))))));
        arr_87 [i_23] [(unsigned short)6] = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)54));
        var_40 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((int) (signed char)-52))), (min((7044460744165031803LL), (arr_44 [i_23])))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)12)), (22LL)))) ? (min((7420365462708013778ULL), (((/* implicit */unsigned long long int) 1486795454)))) : (((/* implicit */unsigned long long int) arr_40 [i_23])))) : ((-(arr_31 [i_23 - 1] [3U])))));
    }
}
