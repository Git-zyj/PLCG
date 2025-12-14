/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245315
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
    var_13 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [1ULL] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [8LL]))) | (max((((/* implicit */unsigned long long int) -16LL)), (10787663355542050077ULL))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), ((~(((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */unsigned long long int) 3639146048240284508LL)) : (14809260158729580138ULL)))))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_2] [i_0] [i_0])) == (((/* implicit */int) var_9)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */long long int) arr_10 [i_2] [i_2] [i_2] [i_2]);
                        var_17 *= ((/* implicit */unsigned char) 3637483914979971483ULL);
                    }
                    var_18 ^= ((/* implicit */unsigned char) ((((((-7015517376301729656LL) + (9223372036854775807LL))) << (((((unsigned long long int) 7015517376301729655LL)) - (7015517376301729655ULL))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)36)) : (((((/* implicit */_Bool) 8530319978993245845ULL)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (unsigned char)37)))))))));
                    var_19 |= ((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_0] [i_0]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 4; i_5 < 16; i_5 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (5870229020907326687ULL)));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 4) 
            {
                for (unsigned char i_7 = 4; i_7 < 15; i_7 += 4) 
                {
                    {
                        arr_22 [i_4] [i_4] = var_1;
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_4] [i_4] [i_4])))))));
                    }
                } 
            } 
            arr_23 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5] [i_5 + 1] [i_5 - 2] [15LL])) ? (-6656378478748698395LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192)))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_16 [i_4] [i_4] [i_5]))) || ((!(((/* implicit */_Bool) var_2))))));
        }
        var_23 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_11 [11ULL]))) / (((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) : (arr_3 [i_4] [i_4] [i_4])))));
    }
    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
    {
        var_24 *= min((((((/* implicit */_Bool) ((unsigned char) var_4))) ? (max((arr_4 [i_8] [i_8] [i_8]), (((/* implicit */unsigned long long int) var_10)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_8] [i_8] [i_8]))) : (0ULL))))), (max((arr_6 [i_8] [i_8]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1026052689767857706ULL)) || (((/* implicit */_Bool) arr_26 [i_8]))))))));
        arr_28 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)93))))), (max((arr_24 [i_8] [i_8]), (((/* implicit */long long int) arr_26 [i_8]))))))) & (max((arr_20 [i_8] [i_8]), (((/* implicit */unsigned long long int) arr_18 [i_8]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        var_25 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14809260158729580141ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) : (13466894199867669786ULL))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_4 [i_8] [i_9] [i_9]), (arr_4 [i_8] [i_8] [i_8])))) && (((arr_4 [i_8] [i_8] [i_8]) <= (arr_4 [i_8] [i_8] [i_8])))));
                        arr_36 [i_8] [i_8] [i_9] [i_10] [i_9] = ((/* implicit */long long int) ((unsigned char) (((+(12812176399465557389ULL))) >= (((((/* implicit */unsigned long long int) var_1)) - (var_3))))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((((/* implicit */_Bool) (unsigned char)197)) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)181))))) ^ (max((((/* implicit */unsigned long long int) var_6)), (arr_27 [i_8]))))) : (var_0)))));
                    }
                    for (unsigned char i_12 = 1; i_12 < 17; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */long long int) max(((+(11828284838271531414ULL))), (((/* implicit */unsigned long long int) (unsigned char)196))));
                        var_29 = ((/* implicit */unsigned char) min((var_4), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)201)) ? (-4154322051506859775LL) : (-5797585138042611858LL)))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        arr_42 [i_8] [1ULL] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_8] [i_8]))))) ? ((+(var_5))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_38 [i_10] [i_13])))))));
                        var_30 = arr_6 [i_10] [i_9];
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((-4154322051506859775LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))))))));
                    }
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)18))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_31 [i_8] [i_10])), (var_7)))))))) : (((long long int) ((((/* implicit */_Bool) arr_41 [i_8] [i_8] [i_9] [i_10])) ? (arr_3 [i_8] [i_9] [i_10]) : (arr_12 [i_9]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_14 = 0; i_14 < 19; i_14 += 4) /* same iter space */
    {
        var_33 += ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_14] [i_14] [10ULL]))) - (8902050188541848650ULL))) ^ (((/* implicit */unsigned long long int) -4154322051506859780LL))));
        arr_46 [i_14] |= (-(((10816699383056615539ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202))))));
    }
    var_34 = max((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (unsigned char)54)), (var_7))) != ((-(var_5)))))), (var_0));
    var_35 = ((/* implicit */unsigned char) var_0);
    var_36 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)163)), (18000999623767697544ULL))))))) : ((~(((/* implicit */int) ((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
}
