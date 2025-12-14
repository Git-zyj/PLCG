/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209072
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)117)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (_Bool)1);
                                arr_13 [(unsigned char)20] [i_1] [i_1] [i_3 - 1] [i_0 - 2] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 - 2] [i_0] [i_0])) && (arr_5 [i_3 + 1] [i_0 + 1]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_2))));
                    arr_14 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */int) arr_9 [i_0] [14LL] [i_0] [i_0] [i_2] [i_2]);
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((unsigned char) arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 1] [i_0] [i_0 - 2])))));
                }
            } 
        } 
        var_20 = ((/* implicit */int) min((max((var_0), (((/* implicit */unsigned int) (short)-31285)))), (((unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0 - 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [8LL])))))));
        arr_15 [(unsigned char)8] = ((/* implicit */unsigned int) (unsigned char)63);
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_16 [i_5] [i_5]))));
        arr_19 [(unsigned char)14] = ((/* implicit */unsigned char) arr_4 [i_5] [i_5] [13]);
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+(((/* implicit */int) ((unsigned char) var_5))))))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                for (short i_8 = 2; i_8 < 13; i_8 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) var_0);
                        arr_29 [1] [1] [1] [1] [i_6] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                        var_24 -= ((/* implicit */short) var_2);
                        arr_30 [(_Bool)1] [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) var_3);
                        var_25 -= ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) (signed char)-116)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_46 [i_11] [i_9] [(_Bool)1] [i_12] [i_13] [16ULL] [16ULL] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)1))));
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((unsigned long long int) (unsigned short)27943)) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)140))))))));
                            }
                        } 
                    } 
                    arr_47 [i_9] [i_9] = ((/* implicit */unsigned short) arr_3 [i_9]);
                    var_27 = ((/* implicit */unsigned char) ((unsigned long long int) arr_27 [i_9] [i_10] [i_10] [i_10]));
                    arr_48 [i_9] [i_9] [i_9] = ((/* implicit */signed char) (+(((int) arr_8 [i_9] [21] [i_10] [i_10]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            for (int i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) min((var_28), (var_0)));
                        arr_58 [i_9] [i_14 - 1] [i_9] [i_15] [i_14 - 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_42 [i_14 - 1] [i_9]))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) var_1)))));
        var_30 = (+(((/* implicit */int) arr_28 [i_9] [(unsigned char)10] [i_9])));
    }
    for (long long int i_17 = 0; i_17 < 17; i_17 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_17 [i_17])) >= (((/* implicit */int) arr_17 [i_17])))) ? (min((((/* implicit */unsigned long long int) var_14)), (((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)239)) & (((/* implicit */int) (short)-20283))))), (((var_13) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (arr_56 [i_17] [i_17] [i_17]) : (max((((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_17]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_17] [i_17]))) ^ (arr_55 [6U] [i_17] [i_17])))))));
        arr_62 [i_17] = ((/* implicit */_Bool) ((((/* implicit */int) ((((arr_18 [i_17]) ? (var_2) : (((/* implicit */int) arr_5 [i_17] [i_17])))) < (((/* implicit */int) ((unsigned char) var_11)))))) & ((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (unsigned char i_18 = 0; i_18 < 17; i_18 += 2) 
        {
            for (unsigned int i_19 = 2; i_19 < 14; i_19 += 1) 
            {
                {
                    var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_38 [i_17] [i_17] [1LL] [i_17]))));
                    arr_70 [i_17] [i_18] [i_19] = ((/* implicit */unsigned long long int) ((((arr_67 [i_19]) / (arr_67 [i_19]))) ^ (arr_67 [i_19])));
                    var_34 ^= ((/* implicit */unsigned char) max((((/* implicit */int) ((short) -1785962496))), (min(((+(((/* implicit */int) var_11)))), (arr_51 [i_19 + 1] [i_18] [i_17])))));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */short) ((((_Bool) ((long long int) var_13))) ? (((((/* implicit */int) (unsigned char)139)) >> (((1785962518) - (1785962510))))) : (((((((/* implicit */_Bool) (short)20283)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))) | (0)))));
}
