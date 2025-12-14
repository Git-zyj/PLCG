/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192472
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) & (((((/* implicit */_Bool) 8191)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (445080292798561780ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (1809562905)))) ? ((~(((/* implicit */int) var_6)))) : (var_10))))));
        var_14 ^= ((/* implicit */unsigned char) -3543848934211563638LL);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (1809562922))))));
        var_15 = ((/* implicit */unsigned short) (unsigned char)173);
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)63)) && (((/* implicit */_Bool) -7142571859673725522LL))))) : (-1809562906)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_8 [i_2])) && (((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))) && (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) (signed char)72)) : (var_10)))) <= (-3543848934211563638LL))))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_8), (((/* implicit */short) (_Bool)1)))))))) ? (((/* implicit */int) (unsigned char)82)) : (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((arr_7 [i_2]) < (((/* implicit */long long int) 1763423926)))))))));
    }
    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((int) var_6));
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    {
                        var_20 = var_7;
                        arr_17 [i_5] = ((/* implicit */unsigned short) (-(((long long int) ((unsigned long long int) var_4)))));
                        var_21 = ((/* implicit */unsigned long long int) -1809562905);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                {
                    arr_23 [i_8] [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_6) ? (((((/* implicit */_Bool) arr_12 [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))) : (7142571859673725531LL))) : (arr_20 [i_3]))))));
                    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 445080292798561780ULL)) && (((/* implicit */_Bool) (signed char)71))))) >= (((/* implicit */int) ((signed char) var_12))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_21 [i_3 + 2] [i_3]) : (((/* implicit */int) arr_12 [i_3 + 2]))))), (((long long int) var_12))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        var_24 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)172))));
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_1))));
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            arr_30 [i_10] [i_10] [i_9] = ((/* implicit */unsigned short) (-(83814686812004073ULL)));
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    {
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)119)))))));
                        arr_36 [i_11] [i_10] [i_11] [i_11] [i_10] = ((/* implicit */long long int) 83814686812004086ULL);
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_32 [i_9] [i_9] [22ULL] [22LL]))) || (((/* implicit */_Bool) var_5))));
                    }
                } 
            } 
        }
        arr_37 [i_9] = ((/* implicit */signed char) ((((1) - (((/* implicit */int) arr_24 [i_9])))) >= (((/* implicit */int) arr_24 [i_9]))));
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 3; i_13 < 23; i_13 += 2) 
    {
        arr_41 [i_13] [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_4)))))));
        var_28 = var_9;
        var_29 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_11)))));
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 4) 
    {
        arr_45 [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) -648357427)) ? (1253574307) : (((/* implicit */int) var_1))));
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) -1LL)) ? (1253574307) : (((/* implicit */int) (short)-32755)))) : (((/* implicit */int) ((((/* implicit */_Bool) 4294967289U)) && (((/* implicit */_Bool) arr_32 [i_14] [i_14] [i_14] [15U])))))));
    }
    for (signed char i_15 = 2; i_15 < 20; i_15 += 4) 
    {
        var_31 = ((/* implicit */unsigned short) ((((arr_38 [i_15]) ? (((((/* implicit */_Bool) 1253574295)) ? (((/* implicit */int) (unsigned char)54)) : (-1542714285))) : ((~(((/* implicit */int) (_Bool)1)))))) >= (var_10)));
        var_32 = ((unsigned short) ((((/* implicit */_Bool) arr_34 [i_15] [i_15] [i_15] [i_15])) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) arr_34 [i_15 - 1] [i_15 - 2] [i_15 + 2] [i_15 + 2]))));
        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7819)) * (((/* implicit */int) (unsigned char)96))))))))));
        var_34 = ((/* implicit */unsigned int) ((((arr_32 [i_15 + 1] [i_15 + 1] [i_15 + 2] [(short)18]) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_33 [i_15] [i_15])))))) ? (((((445080292798561780ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_15]))))) ? (((((/* implicit */_Bool) arr_35 [i_15 + 1] [i_15] [i_15] [i_15 + 1] [i_15] [i_15 + 1])) ? (arr_4 [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_15] [i_15]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)78)) + (-1253574306)))) ? (((((/* implicit */_Bool) arr_46 [i_15] [i_15 - 1])) ? (var_7) : (((/* implicit */int) arr_25 [i_15])))) : (((/* implicit */int) var_8)))))));
    }
}
