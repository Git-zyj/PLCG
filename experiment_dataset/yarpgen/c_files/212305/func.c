/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212305
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                for (short i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_1 [i_1]) <= (((/* implicit */unsigned int) arr_8 [i_0]))))) >> (((-8853682865940756937LL) + (8853682865940756937LL)))));
                        var_10 = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_0]))));
                        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)12579)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (arr_10 [i_0] [i_4] [10U]) : (((/* implicit */int) var_1)))) + (((/* implicit */int) var_1))));
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)33207)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_2))));
        }
        arr_18 [i_0] [i_0] = ((/* implicit */_Bool) (-(arr_0 [i_0])));
        var_13 = ((/* implicit */long long int) (unsigned char)124);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */_Bool) arr_2 [i_5]);
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                {
                    arr_27 [i_5] [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)131)), (var_8)))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_1)))))));
                    var_14 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_14 [i_5] [i_6])))), (((/* implicit */int) arr_14 [19LL] [19LL]))))), ((+((-9223372036854775807LL - 1LL))))));
                }
            } 
        } 
        arr_28 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (((long long int) (-(11683174399379124004ULL)))) : (((/* implicit */long long int) arr_24 [i_5] [i_5] [i_5]))));
    }
    var_15 = ((/* implicit */_Bool) (signed char)83);
    var_16 -= ((/* implicit */long long int) var_9);
    /* LoopSeq 3 */
    for (unsigned short i_8 = 2; i_8 < 21; i_8 += 2) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_8 + 1] [i_8 + 1] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))) : (((unsigned long long int) arr_7 [(signed char)20] [i_8 + 1]))));
        arr_32 [i_8 - 1] = ((/* implicit */signed char) ((((_Bool) 6545898797665187657LL)) ? ((+((+(16385131636356934610ULL))))) : (((((/* implicit */_Bool) arr_15 [i_8] [(_Bool)1] [(unsigned char)9])) ? (((((/* implicit */_Bool) arr_31 [i_8 - 2] [i_8])) ? (((/* implicit */unsigned long long int) arr_31 [i_8] [i_8])) : (16385131636356934610ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_33 [(unsigned char)20] = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_8]))))) >= (((/* implicit */int) (short)16800)))) ? ((((_Bool)1) ? (((/* implicit */int) (short)32286)) : (((/* implicit */int) (unsigned char)124)))) : (arr_8 [i_8])));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            for (int i_10 = 2; i_10 < 21; i_10 += 1) 
            {
                {
                    arr_41 [i_9] [i_8 + 1] [i_10] [i_9] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                    var_18 = ((/* implicit */unsigned short) arr_5 [i_10]);
                }
            } 
        } 
    }
    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) (signed char)83);
                    /* LoopSeq 2 */
                    for (signed char i_14 = 2; i_14 < 23; i_14 += 2) 
                    {
                        arr_54 [i_11] [i_11] [i_11] [i_11] [(signed char)0] [i_14] = ((/* implicit */int) (unsigned short)53848);
                        arr_55 [i_11] [i_12] = (!(((/* implicit */_Bool) 9223372036854775807LL)));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_47 [i_11]))));
                        var_21 = ((/* implicit */unsigned short) arr_43 [i_11]);
                    }
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 21; i_15 += 4) 
                    {
                        arr_60 [i_13] |= ((/* implicit */unsigned char) arr_51 [i_15 + 3] [i_15 + 4]);
                        var_22 = (_Bool)0;
                        var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_15 + 1]))) / (arr_51 [i_15 - 1] [i_15 - 1])));
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */int) min((-5964030027658345628LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)132)))))) ? (var_9) : (((/* implicit */int) arr_44 [i_11] [i_11])))))));
        var_25 = ((/* implicit */unsigned int) arr_57 [i_11] [i_11] [i_11] [(unsigned char)5]);
    }
    for (short i_16 = 0; i_16 < 14; i_16 += 3) 
    {
        var_26 *= ((/* implicit */unsigned short) min((arr_35 [(signed char)12] [i_16] [i_16]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6545898797665187658LL)) ? (529558413U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38977)))))) ? (((/* implicit */int) (unsigned char)124)) : (((int) (signed char)-118)))))));
        arr_64 [i_16] = ((/* implicit */unsigned long long int) (unsigned char)206);
    }
    /* LoopNest 2 */
    for (unsigned int i_17 = 0; i_17 < 18; i_17 += 3) 
    {
        for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 2) 
        {
            {
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (-9223372036854775807LL - 1LL)))));
                var_28 = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)38977)) <= (((/* implicit */int) (_Bool)0))))), (((int) arr_35 [i_17] [i_17] [i_17])))));
            }
        } 
    } 
}
