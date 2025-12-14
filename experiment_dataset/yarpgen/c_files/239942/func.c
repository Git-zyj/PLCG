/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239942
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) var_6);
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [5ULL] [5ULL] [i_0]))) : (arr_0 [i_2])));
                    arr_7 [i_0] [i_0] [13LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) == (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            arr_11 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [(unsigned short)10] [i_3] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) : (var_0)));
            var_18 |= ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_0] [14ULL] [14ULL]))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 16; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0]))))))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_3 [(short)13] [i_0]))));
                    }
                } 
            } 
            var_21 = ((_Bool) arr_13 [i_0]);
        }
        var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0] [5LL] [i_0]))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) ((_Bool) 9223372036854775807LL))) & (((/* implicit */int) arr_14 [i_7] [i_7] [i_7])))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_10))));
        arr_23 [i_7] [i_7] = ((/* implicit */signed char) (+(var_14)));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_10 [i_8] [i_8] [i_8])))) ? (((((((/* implicit */unsigned long long int) var_1)) ^ (arr_17 [i_8]))) >> (((var_13) + (2460084661875509887LL))))) : (((arr_0 [7LL]) + (((/* implicit */unsigned long long int) var_1))))));
        arr_27 [0LL] &= (!(((/* implicit */_Bool) arr_5 [(unsigned short)10] [i_8] [i_8])));
        var_26 = (+(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_24 [i_8] [(unsigned char)3])))))));
        arr_28 [i_8] = ((/* implicit */signed char) var_11);
        var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_2 [(short)18] [i_8] [i_8])))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            var_28 = (~(((((/* implicit */_Bool) arr_16 [i_10] [(unsigned char)10])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_10] [i_10]))))));
            var_29 |= ((/* implicit */_Bool) var_14);
        }
        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            arr_39 [(short)11] [i_11] = ((/* implicit */unsigned long long int) var_13);
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((arr_8 [i_9] [i_11] [i_11]) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_9] [(short)4] [i_9]))))))));
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                arr_43 [i_9] [11ULL] [i_12] = ((/* implicit */unsigned char) var_5);
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        {
                            var_31 -= ((/* implicit */unsigned long long int) ((_Bool) arr_8 [i_9] [4ULL] [i_13]));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_9]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_9] [i_9]))))))) <= (arr_0 [i_9])));
                            var_33 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_44 [i_9] [i_11] [i_12] [11ULL] [i_11] [i_14])))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (var_8)))));
                            var_34 = ((/* implicit */_Bool) var_8);
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_9])) < (((/* implicit */int) arr_25 [(unsigned char)9]))));
                        }
                    } 
                } 
            }
        }
        var_36 = ((/* implicit */signed char) var_8);
        var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_15 [(_Bool)1] [(short)12] [i_9]))))));
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 15; i_15 += 3) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned char) var_13);
                        var_39 += ((((((/* implicit */_Bool) arr_2 [i_15] [17ULL] [(_Bool)1])) ? (((/* implicit */int) arr_4 [i_9] [(unsigned short)10] [(unsigned char)2])) : (((/* implicit */int) arr_54 [i_9] [i_15] [i_16] [i_17])))) / (((/* implicit */int) ((unsigned short) var_6))));
                        var_40 ^= ((/* implicit */short) ((((/* implicit */_Bool) 647503489737847413LL)) ? (3152845266U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_9])) ^ (((/* implicit */int) var_12))));
                    }
                    var_42 = ((/* implicit */_Bool) arr_34 [i_9] [i_9]);
                    var_43 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_9]))));
                    arr_55 [i_9] [i_16] [i_9] [(unsigned char)9] = ((/* implicit */unsigned long long int) ((unsigned short) arr_40 [i_9] [(_Bool)1] [i_16] [i_16]));
                }
            } 
        } 
        var_44 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
    }
    var_45 ^= ((/* implicit */unsigned char) var_8);
    var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_12)))) & (min((((/* implicit */unsigned long long int) var_2)), (var_14)))))) ? (((long long int) (unsigned char)67)) : (((((/* implicit */long long int) max((var_5), (((/* implicit */int) var_10))))) & (((long long int) var_2))))));
}
