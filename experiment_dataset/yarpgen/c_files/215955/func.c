/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215955
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
    var_13 |= ((/* implicit */long long int) (-(((/* implicit */int) var_11))));
    var_14 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) (short)-24038)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25755))))), ((~(3695501395U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) 3320072612U);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_16 += ((long long int) arr_3 [i_0 + 2]);
                    arr_6 [i_0] [i_0 - 1] [i_1] [(_Bool)1] &= ((((/* implicit */_Bool) max((min((((/* implicit */int) (short)2044)), ((-2147483647 - 1)))), (((/* implicit */int) ((((/* implicit */_Bool) 3320072615U)) && (((/* implicit */_Bool) arr_3 [i_1])))))))) ? (max((((/* implicit */unsigned long long int) max((arr_3 [i_0]), (((/* implicit */int) (unsigned short)14453))))), ((+(arr_2 [(_Bool)1]))))) : (((((((/* implicit */_Bool) (short)-2769)) ? (var_5) : (((/* implicit */unsigned long long int) var_9)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [20ULL]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 3) /* same iter space */
    {
        arr_10 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3 - 2])) ? (arr_4 [i_3 + 2] [i_3 - 2] [18ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3])))));
        arr_11 [i_3] [i_3] = ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (short)-2062)));
        var_17 = ((/* implicit */short) arr_5 [i_3] [i_3] [i_3 - 2]);
        /* LoopNest 2 */
        for (long long int i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 4; i_6 < 22; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                arr_24 [i_4] [i_3] [i_4] [i_5] [i_3] [i_6] [i_7] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 1040187392U)) ? (2761282322U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                                var_18 = ((/* implicit */int) ((arr_0 [i_3] [i_6 - 4]) & (((/* implicit */unsigned long long int) arr_12 [i_5]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) arr_16 [i_4 - 2] [i_5] [i_8] [i_4]);
                                var_20 = arr_12 [i_3 + 2];
                                var_21 = (short)-5846;
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_28 [i_4] [(_Bool)1] [7LL] [i_9]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((var_8) % (((/* implicit */unsigned long long int) 401809633510024889LL)))))));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                for (unsigned int i_12 = 1; i_12 < 22; i_12 += 1) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) 3194691091U)) ? (((/* implicit */int) (short)-19612)) : ((((_Bool)0) ? (759984231) : (((/* implicit */int) (short)32767)))))))));
                        arr_39 [i_3] [i_3] [i_10] [i_3] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14447))) : (arr_37 [i_3] [i_3] [i_3 - 1] [i_3] [22U] [i_11]))) + (((/* implicit */unsigned long long int) arr_4 [i_3 - 2] [i_10] [i_11]))));
                        var_25 += ((/* implicit */unsigned short) (+(arr_37 [i_3] [i_3] [i_12] [i_12 - 1] [i_12 + 2] [4U])));
                        arr_40 [i_3] [i_11] [i_11] [(short)12] [i_11] [(short)12] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (var_4) : (var_4)))));
                        arr_41 [i_3] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 8577238345211974361ULL)))) | (((((/* implicit */unsigned int) arr_9 [i_12])) | (arr_17 [i_12] [i_11] [i_3] [i_3])))));
                    }
                } 
            } 
        }
        for (int i_13 = 2; i_13 < 22; i_13 += 1) 
        {
            arr_45 [i_13 - 2] [0LL] &= ((/* implicit */unsigned long long int) ((long long int) arr_20 [i_3 - 2] [i_3 + 1] [i_3 - 1]));
            var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_3 - 2])) ? (arr_32 [i_3 - 1]) : (arr_32 [i_3 - 1])));
            /* LoopSeq 3 */
            for (short i_14 = 0; i_14 < 24; i_14 += 1) 
            {
                arr_49 [i_13] = ((/* implicit */_Bool) (short)-28576);
                arr_50 [i_3] [(unsigned short)10] [i_14] &= ((/* implicit */_Bool) ((arr_28 [i_3 + 2] [i_13 + 1] [i_3 + 2] [i_13 - 1]) ? (((unsigned int) arr_0 [i_3 - 2] [i_3 - 2])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [12ULL])))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_27 = ((/* implicit */int) (~((+(var_5)))));
                var_28 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_51 [8LL] [14ULL])) && (((/* implicit */_Bool) arr_23 [i_3 + 2] [2U] [i_13 + 1]))));
            }
            for (int i_16 = 0; i_16 < 24; i_16 += 3) 
            {
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52427)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_13 + 2] [i_16]))) : (arr_52 [i_3 - 1] [i_3 + 1] [i_13 - 1] [i_13 - 1]))))));
                /* LoopSeq 1 */
                for (short i_17 = 1; i_17 < 20; i_17 += 1) 
                {
                    arr_59 [i_3 - 2] [i_3 - 2] [i_16] [i_13] [i_17 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_3] [i_13 + 1] [i_13 + 2] [i_17 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_13]))) < (18446744073709551615ULL))))) : (arr_47 [i_17 + 3] [i_17 + 3] [i_17 + 3] [i_17 + 3])));
                    var_30 = ((/* implicit */_Bool) min((var_30), ((!(((/* implicit */_Bool) arr_55 [6U]))))));
                }
            }
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3352357365U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_3] [i_13] [i_13])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_3 + 2] [i_13] [i_13] [(short)12] [i_13]))))) : (arr_32 [i_13 - 2])));
        }
        for (short i_18 = 0; i_18 < 24; i_18 += 3) 
        {
            var_32 *= ((unsigned int) (short)-19613);
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30720)) << (((((/* implicit */int) arr_7 [i_3])) - (27648)))))) ? (((/* implicit */int) arr_57 [i_3 - 2])) : (((/* implicit */int) arr_48 [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3 - 2]))));
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                for (int i_20 = 2; i_20 < 21; i_20 += 3) 
                {
                    {
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (_Bool)1))));
                        var_35 *= ((/* implicit */_Bool) (~(((/* implicit */int) (short)-9477))));
                    }
                } 
            } 
            arr_71 [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) (short)22861))))));
        }
    }
    for (unsigned int i_21 = 2; i_21 < 22; i_21 += 3) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)54586))));
        arr_74 [i_21] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_43 [i_21 + 1] [i_21 - 2] [8]))))));
        var_37 &= ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)28076)) ? (arr_0 [i_21 - 2] [i_21 - 2]) : (arr_0 [i_21 - 1] [i_21 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-8552)) >= (((/* implicit */int) (!(((/* implicit */_Bool) (short)-30151))))))))));
    }
    var_38 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((14346385769157291068ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) 974894696U))))));
}
