/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192655
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
    for (signed char i_0 = 3; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) arr_0 [i_0 - 1] [i_0]);
        var_19 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 - 1])) <= (((/* implicit */int) var_9))));
    }
    for (signed char i_1 = 3; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_20 = var_14;
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 20; i_2 += 3) 
        {
            for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */long long int) (signed char)118);
                    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((min((13066372233608996731ULL), (((/* implicit */unsigned long long int) -7308268263744803721LL)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_8 [i_2 - 1] [i_2 - 1] [i_1 + 1])))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 13663762536093978900ULL)) ? (((/* implicit */unsigned long long int) -8973976057695707189LL)) : (13663762536093978900ULL)));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_12 [i_4] = ((/* implicit */_Bool) var_12);
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            var_23 -= ((/* implicit */unsigned long long int) max(((-(max((7350336113058889878LL), (((/* implicit */long long int) arr_15 [i_4] [i_4])))))), (((/* implicit */long long int) arr_21 [(unsigned short)6] [i_4] [i_6] [i_8] [i_4]))));
                            arr_23 [i_4] [i_8] [i_6] [i_7] [i_7] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)53605))))) : (((((var_5) + (9223372036854775807LL))) << (((((/* implicit */int) arr_22 [i_4] [i_6] [i_6] [i_7] [i_8] [(_Bool)0])) - (31785)))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((int) max(((unsigned short)2138), (((/* implicit */unsigned short) arr_21 [i_9 + 1] [i_9 + 1] [i_5] [i_9 + 1] [i_9 + 1])))));
                            var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) 4246900820U)) / (-8973976057695707202LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((unsigned long long int) arr_0 [i_9 + 1] [i_5]))));
                        }
                        var_26 ^= ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [i_4])) : (((/* implicit */int) var_10)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_13)), ((unsigned short)63397))))))));
                    }
                } 
            } 
        } 
        arr_26 [i_4] [i_4] &= arr_16 [i_4] [4];
    }
    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_27 ^= ((/* implicit */_Bool) ((long long int) 11707043688343620319ULL));
            var_28 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_11])) : (((/* implicit */int) arr_0 [i_10] [i_11]))));
            arr_33 [i_11] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_11] [i_11])) & (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        }
        for (int i_12 = 0; i_12 < 15; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    {
                        var_29 ^= ((/* implicit */unsigned long long int) max((arr_30 [i_10]), (arr_34 [i_14] [i_12] [i_10])));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - ((-(var_16)))));
                        arr_43 [i_10] [i_12] [i_13] [i_13] [i_14] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [(unsigned char)9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_12]))) : (min((((/* implicit */unsigned int) arr_37 [i_10] [i_12] [i_13] [i_14])), (926193471U))))), (((/* implicit */unsigned int) arr_1 [i_13]))));
                    }
                } 
            } 
            arr_44 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_10])) != (((/* implicit */int) arr_0 [(unsigned short)3] [i_12]))));
        }
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            for (int i_16 = 3; i_16 < 14; i_16 += 3) 
            {
                {
                    var_31 |= arr_37 [i_16 - 3] [i_15] [i_10] [i_10];
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65535)), (-1LL)))) ? (((arr_34 [i_16 - 1] [i_16] [i_16]) ? ((~(var_16))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_16 + 1]))) & (5380371840100554906ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_35 [i_16 - 3] [i_16 + 1] [i_16 - 2])))))));
                }
            } 
        } 
    }
    var_33 ^= ((/* implicit */unsigned long long int) var_13);
    var_34 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((549755813887ULL), (((13066372233608996710ULL) / (((/* implicit */unsigned long long int) 1793119711581421224LL))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) min((((/* implicit */unsigned char) ((var_16) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))), (var_9))))));
    var_35 ^= ((/* implicit */unsigned long long int) (_Bool)1);
    var_36 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((-2326795225068756693LL), (((/* implicit */long long int) (unsigned short)8723)))))));
}
