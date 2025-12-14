/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227290
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
    var_10 ^= ((/* implicit */unsigned short) 4294967295U);
    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (var_8)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        arr_11 [i_2] [i_2] [16U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967289U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (signed char)72)) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15)))))));
                        var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) << (((((/* implicit */int) var_6)) - (96)))));
                        var_13 |= ((/* implicit */unsigned long long int) (_Bool)1);
                        var_14 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_0))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_9))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 2; i_4 < 24; i_4 += 2) 
        {
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_6 [i_0] [0U]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_9 [4U] [19ULL] [i_0] [i_0])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))));
            var_16 -= (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0])));
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4 + 1] [(signed char)7])) ? (((/* implicit */unsigned long long int) arr_9 [i_4 + 1] [i_0] [(unsigned short)17] [(short)3])) : (18446744073709551615ULL)));
            var_18 = ((/* implicit */unsigned long long int) (~((((_Bool)1) ? (610929738493863374LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                arr_20 [24ULL] [24ULL] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) var_6)))) << (((/* implicit */int) (_Bool)1))));
                var_19 -= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_5] [i_5] [14ULL])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_9)))));
            }
            arr_21 [i_0] [i_5] = ((/* implicit */unsigned short) ((unsigned char) var_5));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_0] [i_5])) : (((/* implicit */int) var_6))));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))));
            var_22 -= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) != (((var_7) ? (7872552381436516856LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
        }
        for (short i_7 = 1; i_7 < 23; i_7 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                arr_26 [(unsigned char)19] [(unsigned char)19] [i_8] [(unsigned char)19] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)7))));
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    arr_31 [6LL] [i_8] [i_8] [i_0] = ((/* implicit */long long int) ((arr_9 [i_0] [i_7 - 1] [6ULL] [i_9]) % (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                    var_23 = ((/* implicit */short) var_4);
                    var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (-(((/* implicit */int) var_9)))))));
                }
                for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (((_Bool)1) ? (-821682405) : (((/* implicit */int) (unsigned char)94)))))));
                    var_27 += ((((var_7) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_10]))))) != (((((/* implicit */_Bool) var_9)) ? (18138781617962739912ULL) : (((/* implicit */unsigned long long int) arr_0 [i_7 - 1] [i_7 - 1])))));
                }
                var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4294967292U)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) 6372116626049363802LL)))))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                var_29 = ((/* implicit */unsigned long long int) ((9223372036854775807LL) >> (((((/* implicit */int) var_2)) - (52021)))));
                var_30 = ((/* implicit */unsigned long long int) (!(var_5)));
            }
            for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                arr_39 [4] = ((/* implicit */signed char) ((var_5) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3488163977182387195LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))))));
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_12] [i_7 + 1])) ? (((/* implicit */int) (unsigned short)8410)) : (((/* implicit */int) arr_37 [(signed char)18] [i_7 + 1] [i_7 + 1]))));
            }
            for (unsigned short i_13 = 1; i_13 < 22; i_13 += 3) 
            {
                arr_44 [i_0] [i_0] [i_0] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29878)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (4294967279U)))) && ((_Bool)1)));
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (+(4294967264U)))) ? (((((/* implicit */_Bool) 536868864U)) ? (arr_9 [i_0] [i_0] [i_7 + 1] [i_7]) : (3U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 35U)))))))));
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)86)) - (((/* implicit */int) arr_3 [i_7 + 1])))))));
                arr_45 [i_0] [i_0] = ((/* implicit */signed char) (~(-4739065233807897009LL)));
            }
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_0] [i_7 + 1] [i_7 + 2])) ? (arr_25 [i_0] [i_7 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_19 [i_7])) : (((/* implicit */int) var_1)))))));
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_7 + 2] [i_7 + 2] [i_7 + 2])) - (((var_7) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))));
        }
        /* LoopSeq 2 */
        for (short i_14 = 1; i_14 < 22; i_14 += 2) 
        {
            arr_49 [i_0] [i_14 - 1] [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (-5865652917080794516LL))))));
            arr_50 [i_0] [i_14] [i_14] = ((/* implicit */unsigned short) (!(arr_13 [i_14 + 3] [i_14 + 2] [i_14 + 3])));
            var_36 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
        }
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 3354149122U)) : (-3844434663420616020LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            arr_53 [19ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_15 - 1] [(unsigned char)10])) | (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (10U)));
        }
        arr_54 [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_3 [i_0]));
    }
}
