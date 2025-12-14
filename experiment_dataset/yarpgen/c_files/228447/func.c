/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228447
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) (unsigned short)21109)), (317866786U))), (2564557563U)));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) (short)15785))))) >= (min((((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_2))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-15788)), (4294967292U)))))))))));
                var_19 = max((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (536346624)))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (0U) : (15U)))), ((-(var_2))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        var_20 += ((/* implicit */signed char) 4U);
        var_21 ^= max(((-(((var_14) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)185)) ^ (((/* implicit */int) (unsigned char)254))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (signed char)99)))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2]))) : (4294967295U)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                var_23 = ((/* implicit */unsigned long long int) var_0);
            }
            for (unsigned short i_5 = 2; i_5 < 20; i_5 += 1) 
            {
                arr_18 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9381)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3]))) : (var_16)));
                arr_19 [17ULL] [i_3] [i_5] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1346131025122699302ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_16 [i_3])))) : (((((/* implicit */_Bool) 4294967277U)) ? (8438549172975763617LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-15)))))));
                var_24 = (~(arr_17 [i_3] [i_5 - 2] [i_5]));
                var_25 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) || (((/* implicit */_Bool) arr_14 [i_2] [i_2] [(_Bool)1] [i_5])))))));
            }
            for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (_Bool)1))));
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 542178328U)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (short)-22957))));
                arr_23 [i_3] = (+(arr_16 [i_3]));
            }
            arr_24 [i_3] = ((/* implicit */int) var_8);
        }
        for (long long int i_7 = 1; i_7 < 20; i_7 += 2) 
        {
            var_28 = ((/* implicit */short) arr_17 [9] [i_7] [10ULL]);
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) 1936499794)) ? (((/* implicit */unsigned long long int) var_8)) : ((((!(((/* implicit */_Bool) 3485601248083689931LL)))) ? (max((11ULL), (((/* implicit */unsigned long long int) 4393751543808LL)))) : (((/* implicit */unsigned long long int) arr_16 [(short)4]))))));
                var_30 = ((/* implicit */long long int) (short)15810);
            }
            for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                var_31 = ((/* implicit */short) var_0);
                /* LoopSeq 1 */
                for (int i_10 = 4; i_10 < 22; i_10 += 2) 
                {
                    var_32 += ((/* implicit */unsigned long long int) (+(836001398U)));
                    arr_39 [15ULL] = ((/* implicit */unsigned short) arr_21 [i_2] [i_10]);
                    arr_40 [i_10] [i_7] [i_7] = 18446744073709551613ULL;
                }
                /* LoopSeq 2 */
                for (int i_11 = 3; i_11 < 23; i_11 += 2) 
                {
                    arr_43 [i_2] [i_9] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_28 [i_7 + 3]), (((/* implicit */int) arr_38 [i_11 - 3] [0U] [i_11] [i_11 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : ((-(max((836001396U), (((/* implicit */unsigned int) (_Bool)1))))))));
                    var_33 = ((/* implicit */unsigned long long int) ((((_Bool) ((((/* implicit */_Bool) var_16)) ? (8438549172975763640LL) : (((/* implicit */long long int) arr_10 [i_7 - 1] [i_9] [i_7 - 1]))))) ? (min((((/* implicit */long long int) ((((var_3) + (2147483647))) << (((((var_1) + (1501415292))) - (27)))))), (var_2))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) << (((((/* implicit */int) min(((unsigned char)180), ((unsigned char)200)))) - (171))))))));
                    arr_44 [5] [i_7] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_7)), (4654216547439091085LL)));
                    arr_45 [i_2] [i_11] [11] [i_11 - 1] [i_9] = ((/* implicit */unsigned long long int) arr_11 [i_2]);
                    var_34 += ((/* implicit */long long int) arr_34 [i_11 + 1] [i_9] [i_7] [i_2]);
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_35 = arr_12 [i_9] [i_7 + 3];
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (signed char)3))));
                    var_37 = ((/* implicit */unsigned short) arr_37 [i_2]);
                }
                var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((_Bool) var_14)) && (((/* implicit */_Bool) var_15)))))));
                var_39 = ((/* implicit */short) var_0);
            }
        }
        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                for (int i_15 = 3; i_15 < 21; i_15 += 2) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        {
                            arr_59 [i_2] [i_13] [i_14] [i_15] [i_16] = ((/* implicit */unsigned char) max((((/* implicit */int) var_12)), ((~(((/* implicit */int) (unsigned char)0))))));
                            var_40 -= ((/* implicit */unsigned short) (short)14562);
                            var_41 += ((/* implicit */_Bool) 0LL);
                            var_42 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_22 [i_14])), (var_11)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((arr_38 [i_2] [i_2] [i_15] [i_16]), (((/* implicit */unsigned short) arr_7 [i_13] [(short)13]))))))) >= (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)15190)) * (((/* implicit */int) (unsigned char)71))));
        }
    }
}
