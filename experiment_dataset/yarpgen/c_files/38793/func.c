/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38793
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
    var_16 *= max((((((((/* implicit */_Bool) 0LL)) && (var_13))) ? (max((((/* implicit */unsigned long long int) (_Bool)0)), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((int) var_5))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */signed char) ((_Bool) arr_0 [i_0]));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_18 ^= ((/* implicit */unsigned int) ((unsigned short) arr_1 [i_1] [i_1]));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_1 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (((unsigned int) -1LL))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
        {
            arr_11 [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_1]))));
            arr_12 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) (_Bool)1);
            var_20 = ((/* implicit */_Bool) max((var_20), (((_Bool) ((unsigned short) (_Bool)1)))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                for (int i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) ((int) ((unsigned long long int) -2078612648)));
                        arr_21 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_5 + 2]))));
                    }
                } 
            } 
            arr_22 [i_3] = ((/* implicit */short) 257698037760ULL);
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) ((1464186335U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_6] [i_6])))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((arr_19 [i_1]) - (arr_19 [i_6]))))));
            var_24 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_4 [i_1] [i_6])) - (((unsigned long long int) arr_3 [i_1] [i_1]))));
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_29 [i_6] [i_6] [i_6] |= arr_20 [i_1] [i_1] [i_7] [i_7] [i_7] [i_1];
                var_25 = ((/* implicit */int) (_Bool)1);
            }
            for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 3) 
            {
                arr_32 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_8 + 2] [i_8 + 1] [i_8 + 1]))) : (5426079692283632993ULL)));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    arr_36 [i_1] [i_1] [i_9] |= ((/* implicit */unsigned char) ((short) arr_28 [i_9] [i_6] [i_1] [i_8 + 1]));
                    arr_37 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) arr_8 [i_8 - 1] [i_8 - 1] [i_8]))));
                    arr_38 [i_6] = ((/* implicit */unsigned long long int) (unsigned short)60045);
                }
                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_1] [i_6] [i_8 + 2]))));
                /* LoopNest 2 */
                for (short i_10 = 2; i_10 < 13; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_45 [i_1] [i_6] [i_1] = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
                            var_27 &= ((unsigned short) arr_13 [i_8] [i_8 + 1] [i_10 + 4]);
                            arr_46 [i_11] [i_8] [i_8] [i_1] = ((/* implicit */unsigned long long int) arr_41 [i_1] [i_6] [i_1] [i_10] [i_11] [i_6]);
                        }
                    } 
                } 
            }
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((arr_4 [i_1] [i_6]) & (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1]))))))));
        }
        arr_47 [i_1] = ((/* implicit */_Bool) (unsigned short)26753);
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (~(((/* implicit */int) ((short) (unsigned short)22469))))))));
            var_30 = ((/* implicit */unsigned char) arr_4 [i_1] [i_12]);
        }
        for (short i_13 = 0; i_13 < 17; i_13 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                var_31 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) min((-714503327), (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_1] [i_1]))) : (526897796287872213LL))))) : (((((/* implicit */_Bool) arr_39 [i_1] [i_13])) ? (((/* implicit */int) ((signed char) 17514440350160117284ULL))) : (((((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) | (((/* implicit */int) arr_16 [i_13]))))))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 2; i_15 < 16; i_15 += 1) 
                {
                    for (unsigned short i_16 = 0; i_16 < 17; i_16 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */long long int) ((((unsigned long long int) arr_7 [i_15 - 2] [i_15 + 1] [i_15])) << (((((int) arr_3 [i_15 - 1] [i_15 - 1])) + (1481470325)))));
                            var_33 &= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_59 [i_15 - 2] [(_Bool)1] [i_15 - 1] [i_15 - 1] [i_15 + 1] [i_15 - 2] [i_15 - 1])) * (((/* implicit */int) arr_59 [i_15 - 2] [i_15] [i_15] [i_15] [i_15 - 2] [i_15 + 1] [i_15 - 1])))));
                            arr_63 [i_1] [i_13] [i_1] [i_15] [i_13] = max((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4206289354U)) && (((/* implicit */_Bool) 18446744073709551605ULL)))))) % (((arr_40 [i_1] [i_13] [i_15] [i_16]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65529))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_15 - 2])) | (((/* implicit */int) (unsigned char)119))))));
                        }
                    } 
                } 
            }
            arr_64 [i_1] [i_1] [i_13] = ((/* implicit */unsigned short) arr_3 [i_1] [i_1]);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 1) 
        {
            for (unsigned short i_18 = 4; i_18 < 16; i_18 += 1) 
            {
                {
                    arr_72 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1243220144U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_41 [i_1] [i_17] [i_1] [i_18] [i_18] [i_1])))) : (11ULL)))) || (((/* implicit */_Bool) (+(max((2724319170U), (((/* implicit */unsigned int) arr_69 [i_1] [i_17] [i_17] [i_18])))))))));
                    var_34 = ((/* implicit */unsigned long long int) arr_27 [i_17]);
                    arr_73 [i_17] [i_17] [i_17] = ((/* implicit */_Bool) (unsigned short)65535);
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_40 [i_1] [i_1] [i_1] [8LL]) % (arr_40 [0ULL] [i_1] [i_1] [i_1])))) ? (max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32766)) && (((/* implicit */_Bool) arr_3 [i_1] [(short)4]))))), (((int) arr_26 [i_1] [i_1] [i_1])))) : (((/* implicit */int) (unsigned char)126))));
    }
    var_36 = ((/* implicit */short) ((long long int) var_3));
}
