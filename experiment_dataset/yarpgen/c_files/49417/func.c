/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49417
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned char)114))))));
        var_11 = ((/* implicit */unsigned long long int) ((var_6) & (((/* implicit */long long int) ((/* implicit */int) (!(var_9)))))));
        var_12 = ((/* implicit */unsigned short) var_3);
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_6))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_9 [(_Bool)1] [(_Bool)1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((arr_6 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [(short)11])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_1)))))));
                        arr_10 [i_1] [i_1] [(unsigned char)15] [(unsigned char)15] = ((/* implicit */short) (_Bool)1);
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_3 - 1] [(_Bool)1] [i_3] [i_3 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_3] [i_3] [i_3] [i_3 - 1])));
                        var_15 = ((/* implicit */_Bool) 1048572U);
                    }
                } 
            } 
        }
        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
            {
                arr_15 [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) var_7);
                arr_16 [i_0] [i_0] [i_0] [i_5] = ((((/* implicit */int) ((_Bool) var_8))) - (((/* implicit */int) arr_0 [i_5])));
            }
            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
            {
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_13 [i_0]);
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    arr_23 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [(signed char)8] [i_7] [(unsigned short)20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1280020432578130244LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_12 [i_4 + 2] [i_4] [i_4]))));
                        var_16 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_4]))) : (8372224LL)))));
                        arr_29 [i_0] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (14231771457646188723ULL))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_22 [4U] [i_7])) ? (((/* implicit */int) arr_5 [i_7] [i_6] [i_7])) : (((/* implicit */int) (_Bool)1))))));
                    }
                    for (short i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) (_Bool)1);
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) ? (var_0) : (1048512ULL)))) ? ((+(9007164895002624LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4 - 1] [i_4 - 1] [i_9])))));
                        arr_32 [22U] [i_4] [i_7] [i_4] [22U] = ((/* implicit */_Bool) (short)-22151);
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((arr_5 [i_0] [i_4 + 1] [i_4 + 1]) ? (((/* implicit */int) arr_5 [i_0] [i_4 + 2] [2LL])) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (short i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
                    {
                        arr_37 [i_0] [i_0] [22LL] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) (+(-8372225LL)));
                        var_20 = ((/* implicit */long long int) ((arr_11 [(_Bool)1] [(unsigned short)15] [(short)11]) & (((/* implicit */unsigned long long int) 2542350360U))));
                    }
                }
            }
            for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
            {
                arr_40 [14LL] [i_0] [i_4 + 2] [i_11] = ((/* implicit */_Bool) (-(8372225LL)));
                var_21 = ((/* implicit */unsigned short) min((var_21), (var_2)));
            }
            arr_41 [i_4 - 2] [i_4 - 2] [10ULL] = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_0] [i_0] [14ULL] [i_0] [(unsigned short)8]))));
        }
    }
    var_22 += ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(var_0))))));
    /* LoopSeq 4 */
    for (int i_12 = 4; i_12 < 16; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 2) 
        {
            for (int i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_35 [i_13] [(unsigned short)20])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_12 - 1] [i_13])))) & (max((((/* implicit */int) (short)-30121)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-4096))))))));
                    arr_52 [i_13] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1287227061)) ? (((/* implicit */int) arr_47 [i_13] [i_13] [i_13])) : (((/* implicit */int) (short)8191))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)65280)), (arr_38 [(unsigned short)7] [12U] [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2467934190U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_46 [i_12] [i_12 - 2]))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_12] [20LL] [i_13] [i_14] [i_12] [20LL] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_12] [i_12] [i_12] [i_13] [i_12]))) : (arr_34 [20U] [12U] [20U] [i_12] [i_12])))) * (arr_17 [i_12] [i_12] [i_14])))));
                    arr_53 [(_Bool)1] [i_13] [14U] = ((/* implicit */unsigned long long int) arr_42 [i_12] [i_12 + 1]);
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_34 [i_12] [i_12] [i_12] [i_12] [i_12 - 2])))) ? (((((/* implicit */_Bool) arr_34 [21LL] [i_12] [i_12] [i_12 + 1] [i_12 - 4])) ? (((/* implicit */unsigned long long int) arr_45 [i_12] [i_12])) : (917504ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)31)))))))) ? (((((/* implicit */_Bool) 3145728ULL)) ? (min((((/* implicit */unsigned long long int) arr_4 [i_12] [i_12] [i_12])), (arr_13 [(unsigned char)13]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_12 + 1] [i_12] [i_12 + 1])) ? (arr_31 [i_12]) : (8372224LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_30 [i_12] [14LL] [i_12 - 3] [14LL] [(_Bool)1] [0ULL] [0U]), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [(short)17] [(short)17] [(short)17]))) : ((-(arr_34 [i_12] [(_Bool)1] [i_12] [i_12] [i_12]))))))));
        arr_54 [(short)13] = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
    }
    for (unsigned long long int i_15 = 3; i_15 < 20; i_15 += 4) /* same iter space */
    {
        var_26 = ((((275668888785242698LL) >= (((/* implicit */long long int) ((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_15] [i_15] [i_15])) > ((+(((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? ((+(-7674096038901469163LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
        var_27 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_31 [i_15]) : (var_8)))) ? (((/* implicit */int) arr_55 [i_15 - 1] [9LL])) : (((((/* implicit */_Bool) 72057594037926912LL)) ? (((/* implicit */int) (unsigned short)17091)) : (((/* implicit */int) (unsigned short)2016))))))));
        var_28 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(arr_17 [i_15 - 2] [i_15 - 2] [i_15])))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_26 [(unsigned short)5] [9ULL] [i_15 + 2] [i_15 + 2]))))) : (((arr_14 [i_15] [i_15] [1U]) ? (arr_34 [i_15] [i_15] [i_15 + 2] [i_15 + 2] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2661)))))))));
        var_29 = ((/* implicit */_Bool) var_2);
    }
    for (unsigned long long int i_16 = 3; i_16 < 20; i_16 += 4) /* same iter space */
    {
        var_30 += ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) arr_34 [i_16] [i_16] [i_16] [i_16] [i_16])), (((var_7) ? (var_0) : (((/* implicit */unsigned long long int) arr_6 [i_16] [i_16] [i_16] [i_16])))))) != ((-(((unsigned long long int) arr_33 [i_16] [i_16] [i_16] [i_16] [i_16 - 2]))))));
        var_31 += ((/* implicit */long long int) (_Bool)1);
    }
    for (unsigned long long int i_17 = 3; i_17 < 20; i_17 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */_Bool) max((arr_39 [i_17 - 1] [16LL] [16LL] [i_17 - 3]), (arr_39 [i_17 + 2] [i_17 - 3] [i_17 + 2] [i_17 + 2])));
        var_33 &= ((/* implicit */unsigned long long int) min((min(((+(((/* implicit */int) (unsigned short)25218)))), (((/* implicit */int) var_9)))), (((/* implicit */int) (_Bool)1))));
        arr_63 [i_17] = ((/* implicit */_Bool) (+(38043551570049380ULL)));
    }
}
