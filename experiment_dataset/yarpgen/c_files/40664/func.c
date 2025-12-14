/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40664
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
    var_14 = ((/* implicit */_Bool) (signed char)14);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] = arr_1 [i_0] [i_1];
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22833)) ? (((0U) & (3010131146U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                var_16 |= ((/* implicit */unsigned char) (!((_Bool)1)));
                var_17 = ((/* implicit */long long int) (~(var_7)));
            }
            for (short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 3; i_4 < 24; i_4 += 3) 
                {
                    arr_17 [i_1] [i_3] [i_0] [i_1] = ((/* implicit */long long int) ((3077849697134532109LL) <= (var_4)));
                    var_18 = var_7;
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-50)) & (((/* implicit */int) (unsigned short)65472))))) ? (((/* implicit */int) arr_6 [i_0] [i_3])) : (((/* implicit */int) (_Bool)1))))));
                        var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) 1981886175U)) ? (arr_5 [i_0 - 1]) : (arr_5 [i_0 - 1])));
                        arr_20 [i_1] = ((/* implicit */int) 6U);
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1467283304012853830LL)) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1])))));
                    }
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_3]))) ^ ((+(var_4)))));
                }
                var_23 = ((/* implicit */signed char) var_2);
            }
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            arr_28 [i_1] [i_8] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63079))))))));
                            arr_29 [(short)24] [i_1] [i_6] [i_6] = ((/* implicit */short) (~(arr_15 [i_0 - 1])));
                        }
                        arr_30 [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_6))));
                        var_24 = ((/* implicit */signed char) var_12);
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)7250)) || (((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */int) ((signed char) 29))) : (((/* implicit */int) var_3)))))));
                            arr_35 [(signed char)5] [i_1] [(signed char)20] [(signed char)5] [i_1] [6ULL] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_22 [i_1] [4ULL]))))));
                        }
                    }
                } 
            } 
            arr_36 [i_0 - 1] [i_0] [(unsigned short)14] &= ((/* implicit */short) (!(((/* implicit */_Bool) (short)19389))));
        }
        for (signed char i_10 = 1; i_10 < 24; i_10 += 4) 
        {
            arr_41 [i_0] [i_0] [i_10 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_10 - 1] [(unsigned char)4] [i_10 + 1] [i_10 - 1] [i_10 - 1]))));
            var_26 = ((/* implicit */unsigned long long int) (unsigned short)50881);
        }
        for (signed char i_11 = 1; i_11 < 24; i_11 += 2) /* same iter space */
        {
            var_27 *= ((/* implicit */signed char) arr_26 [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_0 - 1] [i_0]);
            var_28 = (i_11 % 2 == 0) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [i_11 - 1] [i_11])) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_39 [i_0 - 1] [i_0 - 1] [12]))))) - (1)))))) : (((/* implicit */unsigned int) ((((((((/* implicit */int) arr_6 [i_11 - 1] [i_11])) - (2147483647))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_39 [i_0 - 1] [i_0 - 1] [12]))))) - (1))))));
            arr_45 [10ULL] [8ULL] &= ((((/* implicit */_Bool) 1934228379U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))));
            arr_46 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)57767)) : (((/* implicit */int) (short)-19389))))) % (((((/* implicit */_Bool) 4194303LL)) ? (-553933942824428487LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-11146)))))));
            arr_47 [i_0] [i_0] [i_11] = ((((/* implicit */_Bool) (unsigned short)57785)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-19401))) % (arr_21 [(signed char)24] [i_11] [2U] [i_0 - 1])))) : (arr_11 [i_11 - 1] [i_11] [i_11] [i_0 - 1]));
        }
        for (signed char i_12 = 1; i_12 < 24; i_12 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_13 = 0; i_13 < 25; i_13 += 4) 
            {
                for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) 
                {
                    for (unsigned int i_15 = 1; i_15 < 22; i_15 += 2) 
                    {
                        {
                            arr_61 [i_14] [i_12 - 1] [i_13] [i_14] [i_15] [i_0] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_12 + 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_12 - 1] [i_0 - 1]))) : (4294967295U)));
                            var_29 += ((/* implicit */_Bool) (unsigned char)223);
                            arr_62 [i_0] [i_12] [(unsigned short)23] [i_12] = ((/* implicit */unsigned int) ((arr_57 [(signed char)16] [i_12] [i_13] [i_14] [i_13] [(short)12]) | (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_13])))));
                        }
                    } 
                } 
            } 
            arr_63 [i_12 + 1] = ((/* implicit */unsigned long long int) (short)-6343);
            var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
        }
        arr_64 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2660565540581021142ULL)) ? (262977757) : (((/* implicit */int) (short)-19403))));
        arr_65 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)61446)) == (((/* implicit */int) (unsigned short)7732))));
        var_31 = ((/* implicit */signed char) ((_Bool) var_1));
    }
    for (short i_16 = 0; i_16 < 25; i_16 += 4) 
    {
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((780025713U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) var_13)) ? (arr_21 [(signed char)24] [i_16] [i_16] [(_Bool)1]) : (((/* implicit */long long int) 780025697U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)14] [i_16])))))) ? (((((/* implicit */_Bool) ((signed char) var_4))) ? (((((/* implicit */_Bool) var_10)) ? (arr_32 [7U] [i_16] [(_Bool)1] [(_Bool)1] [i_16]) : (((/* implicit */long long int) var_5)))) : (max((arr_37 [i_16]), (((/* implicit */long long int) arr_43 [i_16] [i_16] [i_16])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (short)19414))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) == (arr_24 [i_16] [i_16] [i_16] [i_16] [i_16]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (var_7))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_17 = 1; i_17 < 24; i_17 += 3) 
        {
            var_33 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)19369)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7745))))) : (1817893898)));
            arr_70 [i_16] [i_17 - 1] = ((/* implicit */_Bool) ((short) arr_0 [i_17 + 1] [i_17 - 1]));
        }
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_74 [i_18] [i_18] = ((/* implicit */unsigned short) ((max((arr_11 [i_18] [(signed char)1] [(unsigned short)8] [i_18]), (arr_11 [i_18] [(_Bool)1] [i_18] [i_18]))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)19417)))))));
        var_34 = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << (((((/* implicit */int) (signed char)-31)) + (46)))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) ^ (3645867293U))))));
        arr_75 [i_18] = ((/* implicit */unsigned short) min((arr_44 [i_18] [i_18]), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)(-32767 - 1))))))));
    }
    /* LoopNest 3 */
    for (signed char i_19 = 0; i_19 < 14; i_19 += 3) 
    {
        for (unsigned int i_20 = 0; i_20 < 14; i_20 += 1) 
        {
            for (unsigned short i_21 = 0; i_21 < 14; i_21 += 1) 
            {
                {
                    var_35 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_52 [i_19] [i_20] [i_20] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4206682321U)) || (arr_60 [i_19] [i_19] [i_21] [i_21] [i_21]))))) : (((((/* implicit */_Bool) 3514941582U)) ? (2905090646U) : (((/* implicit */unsigned int) var_10)))))), (((/* implicit */unsigned int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [18LL]))))))));
                    arr_85 [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_78 [i_19])) ? (1352228013) : (((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 644756920599010861ULL)))))) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                    var_36 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_19] [i_19] [i_21] [(unsigned short)6] [i_21] [(unsigned short)6]))))) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)43466)) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (3282012751U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (var_5)))));
                }
            } 
        } 
    } 
}
