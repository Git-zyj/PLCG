/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244534
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_18 -= ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned short)30517)), (arr_0 [i_0])));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) / (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(short)16] [i_1] [(signed char)4] [i_3])) & (((/* implicit */int) var_12))))) ? ((+(var_11))) : (((18296469169025859991ULL) * (((/* implicit */unsigned long long int) arr_3 [(signed char)12] [(short)18] [i_2]))))))));
                        arr_12 [i_0] [i_1] [i_3] [i_2 + 1] = ((/* implicit */signed char) var_16);
                        var_19 = ((/* implicit */unsigned char) ((unsigned int) ((int) ((signed char) arr_2 [i_0] [i_1] [i_1]))));
                    }
                } 
            } 
        } 
        var_20 = ((signed char) ((signed char) (short)31));
        var_21 = ((/* implicit */int) (short)-32);
    }
    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
    {
        arr_16 [i_4] [i_4] = ((/* implicit */short) arr_10 [(unsigned short)18] [i_4] [i_4] [i_4] [(unsigned short)18] [i_4]);
        var_22 *= ((/* implicit */short) ((unsigned long long int) ((signed char) arr_13 [i_4])));
        arr_17 [i_4] &= ((/* implicit */unsigned long long int) var_9);
        var_23 = ((/* implicit */unsigned int) arr_15 [i_4]);
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
    {
        var_24 = arr_6 [i_5] [i_5] [i_5] [i_5];
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) 134217724U))));
            var_26 = ((/* implicit */int) arr_21 [i_5]);
            arr_23 [i_6] = ((/* implicit */long long int) ((arr_4 [i_5] [i_5]) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_5])) - (((/* implicit */int) arr_1 [i_5])))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5]))) / (var_10)));
            var_28 *= ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-33))) * (562949953388544ULL))) * (((/* implicit */unsigned long long int) var_1)));
            var_29 = ((/* implicit */long long int) arr_19 [i_5]);
        }
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
        {
            arr_30 [i_5] [i_5] [5ULL] = ((/* implicit */signed char) 1628679671345766402ULL);
            var_30 = ((/* implicit */short) arr_2 [i_5] [i_8] [i_5]);
            var_31 = ((/* implicit */long long int) (short)-22);
        }
        var_32 ^= ((/* implicit */unsigned long long int) ((signed char) arr_5 [i_5] [i_5]));
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            var_33 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_3 [i_5] [i_11] [i_5])) ? (((/* implicit */int) arr_39 [i_5] [i_11] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_38 [i_11] [i_9] [i_10] [i_11])))));
                            var_34 = ((/* implicit */unsigned char) var_0);
                        }
                        var_35 = ((unsigned long long int) ((short) arr_35 [i_5] [0ULL] [i_5]));
                    }
                } 
            } 
        } 
    }
    for (signed char i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
    {
        arr_45 [i_13] = ((/* implicit */unsigned long long int) arr_6 [(unsigned char)23] [(unsigned char)23] [i_13] [i_13]);
        arr_46 [6LL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 4160749555U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_17))))))) * (((((/* implicit */long long int) ((int) arr_10 [i_13] [i_13] [6U] [i_13] [i_13] [i_13]))) / (((long long int) (short)-31))))));
        var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) > (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (arr_4 [i_13] [i_13])))) ? (((/* implicit */int) arr_8 [i_13] [i_13] [i_13] [i_13])) : ((-(((/* implicit */int) arr_8 [(signed char)0] [(signed char)5] [(signed char)5] [i_13]))))))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
    {
        var_37 = ((/* implicit */signed char) arr_6 [i_14] [i_14] [i_14] [i_14]);
        var_38 = ((/* implicit */short) arr_1 [(signed char)15]);
        arr_50 [i_14] [(short)0] = ((/* implicit */unsigned long long int) var_16);
    }
    for (unsigned char i_15 = 3; i_15 < 20; i_15 += 4) 
    {
        arr_53 [i_15] &= ((/* implicit */unsigned char) ((((min((((/* implicit */long long int) arr_7 [18ULL])), (arr_3 [i_15] [i_15 + 1] [i_15 - 1]))) + (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_15] [i_15] [16ULL] [i_15])) + (((/* implicit */int) (unsigned short)36765))))))) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_15 + 1] [24] [i_15 - 3] [i_15 - 3])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_16 = 3; i_16 < 19; i_16 += 1) 
        {
            arr_56 [i_15] [i_16] = ((/* implicit */unsigned long long int) arr_0 [i_16]);
            var_39 = ((/* implicit */unsigned char) arr_5 [20ULL] [i_16]);
        }
    }
    for (int i_17 = 0; i_17 < 16; i_17 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_18 = 0; i_18 < 16; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 4; i_19 < 14; i_19 += 1) 
            {
                {
                    var_40 = ((/* implicit */short) ((((((/* implicit */int) arr_52 [i_18])) + (2147483647))) >> (((/* implicit */int) (signed char)12))));
                    var_41 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_48 [i_17])) - (((/* implicit */int) arr_2 [i_17] [i_18] [i_19]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_20 = 0; i_20 < 16; i_20 += 1) /* same iter space */
                    {
                        arr_68 [i_17] [i_17] [i_18] [i_19] [i_17] [i_20] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_64 [i_17] [i_17] [i_17] [i_17])) && (((/* implicit */_Bool) ((long long int) var_0)))))));
                        var_42 ^= ((/* implicit */unsigned char) arr_47 [i_17] [i_20]);
                        arr_69 [i_17] [i_17] [i_17] = arr_6 [i_19] [i_19] [i_18] [i_17];
                        arr_70 [i_17] [i_17] [i_17] [i_19] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)8)) || (((/* implicit */_Bool) var_2))));
                    }
                    /* vectorizable */
                    for (unsigned short i_21 = 0; i_21 < 16; i_21 += 1) /* same iter space */
                    {
                        arr_75 [i_17] [i_17] [i_18] [i_19] [i_19] [i_21] = ((/* implicit */short) arr_49 [i_17]);
                        var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) arr_63 [i_17] [i_18] [i_19 - 2]))));
                    }
                    for (unsigned short i_22 = 0; i_22 < 16; i_22 += 1) /* same iter space */
                    {
                        var_44 = ((short) arr_65 [i_17] [(signed char)14]);
                        arr_79 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */long long int) var_0);
                        arr_80 [i_17] [i_18] [i_18] [i_18] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_18] [i_18] [24LL])), (var_14))))) * (min((arr_49 [i_17]), (var_11))))) >> (((((min((((/* implicit */unsigned long long int) arr_78 [i_22])), (arr_76 [i_22] [i_19] [i_18] [(short)1]))) << (((((((/* implicit */int) var_6)) - (arr_58 [(short)7]))) - (802026862))))) - (6503197861922996195ULL)))));
                        var_45 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_17] [i_17] [i_17]))) ^ (var_9)));
                    }
                }
            } 
        } 
        var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) (+(((long long int) var_14)))))));
    }
    /* LoopSeq 2 */
    for (short i_23 = 0; i_23 < 18; i_23 += 1) /* same iter space */
    {
        var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) var_15))));
        /* LoopNest 2 */
        for (signed char i_24 = 2; i_24 < 17; i_24 += 1) 
        {
            for (short i_25 = 0; i_25 < 18; i_25 += 4) 
            {
                {
                    var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) arr_10 [i_23] [i_25] [i_24 - 2] [i_24 - 1] [i_25] [(short)4]))));
                    arr_88 [i_25] [i_25] &= var_12;
                }
            } 
        } 
        arr_89 [i_23] [i_23] = ((/* implicit */int) var_9);
    }
    /* vectorizable */
    for (short i_26 = 0; i_26 < 18; i_26 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_27 = 0; i_27 < 18; i_27 += 4) 
        {
            var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) arr_52 [i_26]))));
            var_50 = ((/* implicit */unsigned int) max((var_50), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_90 [i_27])))))) & (((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_27])))))))));
        }
        var_51 = ((/* implicit */unsigned char) var_15);
        var_52 = ((/* implicit */signed char) arr_5 [i_26] [i_26]);
    }
}
