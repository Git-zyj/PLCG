/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209443
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_7)) - (57818))))) : (((/* implicit */int) max((var_1), (var_10))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)47))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) arr_2 [i_0])), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) ((_Bool) (signed char)-112))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) (!(var_10)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                arr_10 [12LL] &= ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_4))))));
                arr_11 [i_0] [(short)8] [i_2] = ((((/* implicit */int) ((short) arr_0 [i_2] [(_Bool)1]))) > (((arr_2 [i_0]) | (((/* implicit */int) arr_8 [i_0] [i_0])))));
                arr_12 [i_1 + 3] [i_0] = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [4ULL]);
                arr_13 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_8 [i_1] [i_0]);
            }
            /* vectorizable */
            for (unsigned char i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                var_15 = ((/* implicit */_Bool) arr_2 [i_0]);
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    arr_19 [i_0] [i_0] [i_0] [i_3] [(_Bool)0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_1 - 1] [i_1 - 1] [i_1 + 3] [i_3] [i_3 - 1] [i_3]))));
                    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 2; i_5 < 16; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned int) arr_16 [i_0] [i_1 + 3] [(_Bool)1] [i_4]);
                        arr_23 [13LL] [i_0] [i_3] [i_0] [3U] = ((/* implicit */unsigned int) (_Bool)0);
                        arr_24 [i_1] [i_1] [i_1] [i_0] [i_5] [i_1 - 1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_1 - 1] [i_3] [i_0])) ? (((/* implicit */int) (short)-5165)) : (((/* implicit */int) (unsigned char)213))));
                        arr_25 [i_0] [16] [(unsigned char)3] [i_4] [i_5] [i_0] = (+((+(((/* implicit */int) (unsigned char)102)))));
                    }
                }
                arr_26 [(_Bool)1] [i_0] [i_3] = (_Bool)0;
                arr_27 [i_0] [i_1 - 1] [i_3] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                var_18 += ((((/* implicit */_Bool) ((signed char) arr_0 [(unsigned char)0] [i_1]))) ? (arr_16 [i_3 + 1] [i_1] [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) var_6)));
            }
            /* vectorizable */
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_7 = 1; i_7 < 19; i_7 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 3] [i_7 - 1])) ? (arr_33 [i_0] [i_1 + 3] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7]) : (arr_33 [16U] [i_1 + 3] [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1])));
                    /* LoopSeq 4 */
                    for (short i_8 = 1; i_8 < 19; i_8 += 2) 
                    {
                        arr_38 [i_8] [i_6] [i_6] [i_6] [i_0] &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_35 [i_0] [i_1] [i_6] [i_7 + 1])) + (2147483647))) >> (((((/* implicit */int) arr_32 [(_Bool)1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8])) - (19133)))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_37 [i_6])))))));
                    }
                    for (short i_9 = 3; i_9 < 16; i_9 += 1) 
                    {
                        arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [8LL] = var_3;
                        arr_42 [i_0] [15ULL] [i_0] [2U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_9] [i_9 + 3] [i_0] [i_0] [i_1 - 1] [i_1 - 1])) & ((-(((/* implicit */int) var_8))))));
                        var_21 += ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) arr_39 [i_0] [(unsigned char)13] [i_6] [(unsigned char)13] [(unsigned char)13] [i_1] [i_0])))));
                        arr_43 [i_9 + 4] [i_7 + 1] [i_0] [2U] [i_0] = ((/* implicit */unsigned int) ((short) (((_Bool)0) ? (arr_29 [i_0] [i_0] [(unsigned char)2] [i_7 - 1]) : (((/* implicit */int) var_1)))));
                    }
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        arr_46 [i_10] [i_7 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((arr_0 [i_0] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_47 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)1))))));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (unsigned char)139))));
                        arr_48 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_0] [i_0] [i_1 + 3] [i_6] [i_0] [i_10]))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        arr_51 [i_0] [i_0] [i_7] = ((/* implicit */_Bool) arr_20 [i_1] [i_1 + 1] [i_0] [i_7] [i_11] [i_7 + 1]);
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [13U] [i_0] [i_0] [i_1 + 3] [(_Bool)1])) ? (((/* implicit */int) arr_45 [i_1 - 1] [i_0])) : (((/* implicit */int) arr_15 [i_7 + 1] [i_7 + 1] [i_0]))));
                        var_23 -= ((/* implicit */unsigned char) (((~(((/* implicit */int) (short)32767)))) != (((/* implicit */int) var_5))));
                    }
                }
                var_24 ^= (-(((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 3] [i_1 + 1])));
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_37 [i_0]))));
                    arr_55 [i_0] [i_0] [i_0] [i_6] [i_12] = ((/* implicit */unsigned char) (!((_Bool)1)));
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        arr_59 [i_0] [(short)16] [(unsigned char)9] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_58 [i_0] [i_1] [i_1 + 1] [i_1] [i_13]))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_22 [i_13] [(signed char)16] [i_6]))));
                        var_27 ^= (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1))));
                        var_28 = ((/* implicit */unsigned char) -194368289);
                    }
                    for (unsigned short i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)35))));
                        var_29 = ((/* implicit */unsigned long long int) (((-(218681010850219080ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9))))));
                    }
                }
                arr_65 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_57 [i_1 + 3] [i_6] [i_6] [(short)7] [i_6]) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)-22))));
            }
        }
    }
    /* vectorizable */
    for (short i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
    {
        var_30 += ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_39 [(_Bool)1] [(unsigned short)18] [i_15] [i_15] [i_15] [9] [(_Bool)1])) >= (var_6))))));
        var_31 -= ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_15])) > (((/* implicit */int) arr_20 [i_15] [i_15] [14LL] [i_15] [14LL] [i_15])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_15] [i_15] [i_15] [i_15]))) : (((((/* implicit */_Bool) 4192235271213987347LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (4192235271213987347LL)))));
        arr_68 [i_15] [i_15] = ((/* implicit */_Bool) ((unsigned int) var_5));
        var_32 = ((/* implicit */_Bool) arr_60 [(unsigned short)16] [(signed char)12]);
        arr_69 [i_15] [i_15] = ((/* implicit */int) ((unsigned char) var_10));
    }
    var_33 = ((/* implicit */unsigned long long int) (short)-32767);
}
