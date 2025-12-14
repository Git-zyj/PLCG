/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208696
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((max((var_8), (var_8))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((33554431LL), (var_7)))))))))))));
    var_15 = ((/* implicit */short) -6512143484496833082LL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    var_16 = ((unsigned short) (unsigned char)255);
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_2))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) (~(var_4)));
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (unsigned char)159))));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((~(arr_6 [i_4] [i_4]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))))))));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    var_21 = ((/* implicit */unsigned short) var_2);
                    var_22 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))) <= (((long long int) var_1))));
                    var_23 = ((/* implicit */unsigned long long int) ((unsigned char) arr_9 [i_0] [i_0] [i_0]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_24 ^= ((/* implicit */long long int) arr_18 [i_0] [i_3] [i_4] [i_5] [i_4]);
                        var_25 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)97)) << (((var_2) - (6072951972815345587LL)))));
                    }
                }
            }
            for (signed char i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
            {
                var_26 &= ((/* implicit */unsigned int) var_2);
                arr_23 [i_3] |= ((/* implicit */signed char) ((long long int) 7246565198865603338ULL));
            }
        }
        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_10 [i_0]))));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)122)) && (((/* implicit */_Bool) arr_20 [17LL] [i_8]))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_29 = ((/* implicit */long long int) (unsigned char)161);
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    {
                        var_30 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0]))));
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) var_0))));
                    }
                } 
            } 
            arr_36 [i_9] = ((/* implicit */unsigned int) ((unsigned short) arr_15 [i_0] [i_0] [i_0] [i_9]));
        }
    }
    for (unsigned long long int i_12 = 2; i_12 < 8; i_12 += 2) 
    {
        arr_40 [3LL] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_0)))))) % (var_10)));
        arr_41 [i_12] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_13 [i_12] [i_12] [i_12 + 1] [i_12])))), (((((/* implicit */int) arr_13 [i_12] [i_12] [i_12 + 1] [i_12 + 2])) <= (((/* implicit */int) arr_13 [i_12] [i_12] [i_12 + 1] [i_12]))))));
    }
    for (unsigned int i_13 = 2; i_13 < 22; i_13 += 2) 
    {
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)94)) != (((/* implicit */int) (unsigned char)94))))), ((+(((/* implicit */int) arr_44 [i_13]))))))) && (((/* implicit */_Bool) (-(((arr_42 [i_13]) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))))));
        var_33 += ((/* implicit */unsigned short) ((unsigned long long int) var_9));
        var_34 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) arr_45 [i_13] [i_13])), ((-(var_8))))), (min((((/* implicit */unsigned long long int) arr_45 [i_13] [i_13])), (var_8)))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
    {
        var_35 = ((/* implicit */signed char) ((long long int) ((((var_1) & (((/* implicit */long long int) arr_43 [i_14])))) << (((var_7) + (3408216640092562268LL))))));
        var_36 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_49 [i_14])) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_14] [i_14])))))))) % (((/* implicit */int) arr_46 [i_14]))));
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    arr_56 [i_15] = ((/* implicit */short) min((((/* implicit */unsigned char) var_9)), (max((((/* implicit */unsigned char) (signed char)115)), (min(((unsigned char)83), ((unsigned char)158)))))));
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 3) 
                        {
                            {
                                var_37 *= ((/* implicit */unsigned long long int) (unsigned char)97);
                                var_38 ^= max((min((var_10), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) arr_47 [i_14] [1U])));
                            }
                        } 
                    } 
                    var_39 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_45 [i_14] [i_14]))) < (((/* implicit */int) arr_49 [i_16])))))) == (((((((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_14] [i_15] [i_15] [i_16]))) * (var_10))) - (((3975769732U) & (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                }
            } 
        } 
        arr_61 [i_14] [i_14] = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (unsigned char i_19 = 2; i_19 < 15; i_19 += 4) 
    {
        var_40 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_0))) && (((/* implicit */_Bool) arr_60 [i_19] [i_19] [i_19] [i_19] [0ULL] [i_19]))))), (min((3595891681U), (((/* implicit */unsigned int) arr_25 [i_19] [i_19] [i_19]))))));
        var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)144)) ^ (((/* implicit */int) (unsigned char)125)))))));
        var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) (-(arr_24 [i_19] [i_19]))))));
        /* LoopNest 3 */
        for (long long int i_20 = 0; i_20 < 17; i_20 += 4) 
        {
            for (int i_21 = 0; i_21 < 17; i_21 += 1) 
            {
                for (signed char i_22 = 0; i_22 < 17; i_22 += 4) 
                {
                    {
                        var_43 ^= ((/* implicit */long long int) (unsigned char)94);
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_19])) && (((/* implicit */_Bool) ((((var_12) + (9223372036854775807LL))) << (((long long int) arr_1 [i_19])))))));
                        arr_72 [i_19] [i_20] [i_21] = ((/* implicit */_Bool) arr_59 [i_19 + 1] [i_19 + 2] [i_19 + 1] [i_19 + 1] [i_19 + 2]);
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) (~(arr_18 [i_19 - 1] [i_19] [i_22] [i_22] [i_22]))))));
                        var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) var_6))));
                    }
                } 
            } 
        } 
    }
}
