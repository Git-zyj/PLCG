/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31308
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [(signed char)3] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) (!(((var_14) || (((/* implicit */_Bool) 0U)))))));
                    var_18 = ((/* implicit */unsigned short) 3873964707U);
                    arr_10 [i_2 - 4] [i_1] [(short)7] = (~(((((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_15))))) ? (max((((/* implicit */long long int) (unsigned char)39)), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)217)), (var_6))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
    {
        /* LoopSeq 4 */
        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            arr_17 [i_3 - 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_16 [(short)8])))) ? (((long long int) (unsigned short)65519)) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            /* LoopSeq 2 */
            for (unsigned int i_5 = 2; i_5 < 19; i_5 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_6 = 2; i_6 < 19; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 421002587U)) : (var_17)));
                            arr_25 [i_3] [i_7] = ((/* implicit */int) arr_13 [i_3] [i_7]);
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) (((+(((/* implicit */int) var_2)))) & ((+(((/* implicit */int) arr_15 [(unsigned short)10] [i_4]))))));
            }
            for (unsigned int i_8 = 2; i_8 < 19; i_8 += 4) /* same iter space */
            {
                var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_27 [i_8 - 2] [i_8 - 1] [i_8 + 1] [i_8 + 1])) : (((((/* implicit */_Bool) arr_16 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38))) : (var_7)))));
                arr_28 [i_3] [i_4] [i_8] = ((/* implicit */short) var_17);
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */int) (unsigned char)31))))) ? (((arr_13 [19ULL] [(_Bool)1]) & (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
            }
            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_4])) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_27 [(short)3] [i_4] [i_4] [(short)3])) ? (((/* implicit */int) arr_23 [i_4])) : (var_0)))));
        }
        for (unsigned int i_9 = 1; i_9 < 19; i_9 += 4) 
        {
            var_24 = ((/* implicit */long long int) (unsigned short)18444);
            arr_33 [i_3] [i_9] = ((/* implicit */unsigned short) var_16);
            arr_34 [i_9] [i_9] [(unsigned short)14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_26 [17ULL] [i_3 + 1] [i_3])) : (((/* implicit */int) ((arr_11 [i_9] [i_3]) != (((/* implicit */unsigned long long int) var_0)))))));
        }
        for (short i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            var_25 = ((/* implicit */short) (-(((/* implicit */int) arr_38 [i_3 + 2] [i_3 + 1]))));
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                var_26 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_29 [(unsigned short)7] [i_10] [(_Bool)1])) ? (var_13) : (arr_11 [i_3] [i_11])))));
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_31 [i_13] [i_10])) ? (-1358036949014398290LL) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_11] [i_13]))))));
                        arr_50 [i_11] [i_11] [i_11] [i_12] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(4294967270U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_3] [3ULL]))) : (var_16)));
                        arr_51 [i_11] [16] [i_11] [i_10] [(_Bool)1] [i_10] [i_11] = ((((((/* implicit */unsigned long long int) 4294967270U)) | (12371032393781407855ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))));
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        arr_55 [i_3] [i_10] [i_3] [i_12] [i_11] = 25U;
                        arr_56 [i_3 - 1] [i_3 + 2] [i_11] [i_3 - 1] [(short)4] [13LL] = (~(arr_49 [i_3] [i_10] [i_11] [(_Bool)1] [i_10]));
                    }
                    var_28 = ((/* implicit */int) 25U);
                    arr_57 [i_3] [i_11] [i_11] [i_3] [i_3 + 1] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_12] [i_12] [i_3 + 2] [i_3 - 1]))));
                    var_29 = ((/* implicit */unsigned int) arr_26 [i_10] [i_11] [i_12]);
                }
                var_30 = ((/* implicit */long long int) var_5);
            }
            for (int i_15 = 0; i_15 < 20; i_15 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_16 = 4; i_16 < 17; i_16 += 1) 
                {
                    arr_65 [i_3] [i_10] [i_15] [i_16] = ((/* implicit */long long int) ((_Bool) var_6));
                    arr_66 [i_16] [i_10] [i_15] [i_16] = ((/* implicit */signed char) ((long long int) ((signed char) 0U)));
                    var_31 = ((/* implicit */short) (+((-(((/* implicit */int) arr_47 [12LL] [i_16 + 3] [i_15] [8] [i_16]))))));
                    var_32 = ((-7699168189575642618LL) / (4802081940525962541LL));
                }
                var_33 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_3 + 1] [i_10] [i_3 - 1]))));
                var_34 -= ((/* implicit */short) ((((/* implicit */_Bool) 27U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)20827))));
            }
        }
        for (unsigned int i_17 = 0; i_17 < 20; i_17 += 3) 
        {
            arr_70 [i_3] [i_17] |= ((/* implicit */unsigned long long int) 604096484U);
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)20827)) ? (1225851539U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122)))));
            var_36 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (1225851539U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) + (((((/* implicit */long long int) arr_58 [i_3] [i_3] [(short)6] [(short)7])) & (8458112506110191165LL)))));
            arr_71 [i_3 + 2] [i_17] [i_17] = (+((~(((/* implicit */int) arr_19 [(unsigned short)1] [i_17])))));
        }
        var_37 |= 4294967271U;
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 20; i_18 += 1) 
        {
            for (unsigned int i_19 = 0; i_19 < 20; i_19 += 1) 
            {
                {
                    var_38 += ((/* implicit */signed char) ((((/* implicit */_Bool) 24U)) ? (((/* implicit */int) arr_53 [i_3] [i_18] [i_18] [i_19] [12U])) : (((/* implicit */int) (signed char)-122))));
                    arr_77 [i_19] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(7699168189575642617LL)))) & (10593231713093207251ULL)));
                    arr_78 [(unsigned short)17] [i_3] [i_19] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_3] [i_3 - 1] [i_3] [i_3])) ^ (((/* implicit */int) var_14))));
                }
            } 
        } 
    }
}
