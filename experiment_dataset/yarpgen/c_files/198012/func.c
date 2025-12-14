/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198012
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3847319587101349465ULL)))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((int) (-2147483647 - 1)))))) & (max((3847319587101349486ULL), (((/* implicit */unsigned long long int) ((int) var_10)))))));
        var_11 |= ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 14599424486608202146ULL)) && (((/* implicit */_Bool) arr_0 [i_0]))))), ((((_Bool)1) ? (-4204558570072393462LL) : (((/* implicit */long long int) -1575120490))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (-2147483624)))) : (((/* implicit */int) ((short) (_Bool)0))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 14599424486608202130ULL)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) arr_1 [i_1] [i_1]))))), (arr_5 [i_1] [i_1]))))));
        var_13 = ((/* implicit */_Bool) max((var_13), (((((/* implicit */int) ((_Bool) 3847319587101349485ULL))) <= (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1])) > (((/* implicit */int) arr_3 [i_1] [i_1])))))))));
    }
    for (unsigned int i_2 = 3; i_2 < 17; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_14 -= ((/* implicit */unsigned int) arr_10 [i_3]);
                    arr_14 [i_2 + 1] [i_4] [i_3] [i_4] = ((/* implicit */_Bool) (~(arr_13 [i_2 - 2])));
                }
            } 
        } 
        var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 3546690924447721935LL)), (14599424486608202115ULL)));
        /* LoopNest 3 */
        for (unsigned short i_5 = 4; i_5 < 17; i_5 += 2) 
        {
            for (unsigned short i_6 = 4; i_6 < 15; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_7])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5 - 1] [i_2]))))))) ? (var_0) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65533)) >> (((/* implicit */int) var_8))))))))));
                        var_17 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) (unsigned char)12)));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)254)) << (((arr_22 [i_8]) - (10960217108488225629ULL)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)6952)) ? (-1438348712) : (((/* implicit */int) var_10))))) : (((long long int) ((unsigned char) 10293127503779484236ULL)))));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
                    {
                        arr_33 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((int) 6120394410876117957ULL))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_8])))) ^ (((((/* implicit */_Bool) (unsigned char)193)) ? (8310699623827330161LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)16227))))) != (((unsigned int) (_Bool)1))))))));
                        var_19 = ((/* implicit */long long int) ((unsigned char) (~(((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_13 = 2; i_13 < 12; i_13 += 1) 
                        {
                            arr_38 [i_8] [i_8] [i_8] [i_9] [i_10] [i_12] [i_13] = ((/* implicit */int) ((((int) var_8)) < (((/* implicit */int) arr_23 [i_13 - 2]))));
                            var_20 = ((/* implicit */short) var_2);
                        }
                        for (short i_14 = 3; i_14 < 12; i_14 += 4) 
                        {
                            arr_41 [i_8] [i_9] [i_10] [i_10] [i_12] [i_14 - 1] [i_14] = (+(((var_4) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) var_9)))));
                            var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) 9223372036854775807LL))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_8])) << (((/* implicit */int) var_10))))) : (((long long int) (unsigned short)6952))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) 4354992106908358296ULL))));
                            var_23 |= arr_11 [i_12] [12LL] [i_10];
                        }
                        arr_42 [i_8] [i_8] [(unsigned char)7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 4088952673640896811LL))) ? (((/* implicit */int) (!(arr_19 [i_8] [i_10] [i_12])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3847319587101349485ULL)))))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [(unsigned char)9] [i_9] [i_10] [(unsigned char)7] [i_9])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))));
                    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (signed char)15))) ? (((/* implicit */long long int) 7)) : (9223372036854775807LL)))) ? (((((/* implicit */_Bool) (+(arr_35 [i_9])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -150326846)) : (1754749915045047153ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7682179436242256228LL)) ? (var_0) : (((/* implicit */int) (unsigned char)239))))))) : (var_3));
                }
            } 
        } 
        var_26 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_6 [i_8] [i_8]) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_28 [i_8])) < (((/* implicit */int) (short)29376))))))))) - (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_8] [i_8] [i_8]))) != (2962728996471530512LL)))))));
        var_27 = (_Bool)1;
    }
    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 3) 
    {
        var_28 |= ((/* implicit */unsigned short) ((long long int) ((signed char) arr_10 [i_15])));
        var_29 = ((((((/* implicit */_Bool) ((unsigned int) (unsigned char)234))) ? (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_15]))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_15] [i_15] [i_15])) ? (((/* implicit */int) arr_17 [i_15])) : (547752741)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (short)31973)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_15 [i_15] [i_15])) ? (((/* implicit */unsigned long long int) arr_9 [i_15])) : (14599424486608202131ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))))));
    }
    var_30 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned int) var_2)), (6803295U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_10)), ((unsigned char)15))))))));
}
