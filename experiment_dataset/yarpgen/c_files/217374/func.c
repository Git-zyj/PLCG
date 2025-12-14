/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217374
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_14 |= ((((/* implicit */int) arr_0 [i_0] [i_0])) - (var_3));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_4 [i_1 - 2] [i_1])) : (((/* implicit */int) arr_4 [i_1 - 2] [i_1]))));
        var_16 = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1])) > (((/* implicit */int) arr_4 [i_1 - 2] [i_1]))));
    }
    for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            var_17 = ((/* implicit */short) (((-(((((/* implicit */int) arr_8 [i_2] [i_2])) << (((((/* implicit */int) var_6)) - (114))))))) * (((/* implicit */int) max(((!(((/* implicit */_Bool) var_9)))), (((((/* implicit */int) (short)31861)) >= (((/* implicit */int) (short)30603)))))))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (unsigned char)200)) + (((/* implicit */int) (unsigned short)4985)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_3] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((((/* implicit */int) (short)-32761)) + (2147483647))) >> (((((/* implicit */int) (short)-14348)) + (14367))))))) : (((/* implicit */int) min(((short)-30603), ((short)-30676))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    {
                        arr_17 [14ULL] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_14 [i_5] [i_4] [i_3] [i_2 - 1]);
                        var_19 = ((/* implicit */int) (((+(((((/* implicit */_Bool) (short)30600)) ? (14539992429908719541ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60551))))))) >> (((((((/* implicit */_Bool) ((short) (unsigned short)37572))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned short) (short)-676))))) - (66)))));
                        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)99))));
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */unsigned long long int) var_5);
    }
    for (short i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        var_22 = ((((/* implicit */_Bool) ((unsigned short) var_11))) ? ((((!(((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6]))));
        arr_22 [(unsigned char)13] = var_0;
    }
    var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) ? (min((var_3), (((/* implicit */int) var_8)))) : (((/* implicit */int) var_1)))) + (((((/* implicit */int) var_5)) | (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            {
                arr_29 [i_8] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_27 [i_7] [i_7] [i_7]))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 2; i_9 < 19; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_27 [i_9] [i_9] [i_9])))) + (2147483647))) << (((((((/* implicit */_Bool) arr_34 [i_8] [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_8])) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) arr_27 [i_9] [(short)11] [12LL])))) - (104)))));
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_33 [i_9] [i_9 + 2] [i_9] [i_9 + 1] [i_9]))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_11 = 1; i_11 < 18; i_11 += 1) 
                            {
                                arr_37 [i_7] [i_7] [i_8] [i_7] [i_11] [i_8] = ((/* implicit */unsigned long long int) var_3);
                                var_26 ^= ((short) arr_33 [i_9 - 2] [(short)8] [i_9 - 2] [i_11 + 1] [i_11 + 3]);
                            }
                            arr_38 [i_8] [i_8] [i_9] [i_8] = arr_23 [(short)6];
                            var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [(short)17])) > (((((/* implicit */int) var_0)) - ((((_Bool)1) ? (((/* implicit */int) (short)30603)) : (-2029165694)))))));
                        }
                    } 
                } 
                arr_39 [i_8] [i_8] [18LL] = ((/* implicit */unsigned char) max((3906751643800832074ULL), (((/* implicit */unsigned long long int) 4238692807U))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    for (short i_13 = 2; i_13 < 18; i_13 += 1) 
                    {
                        {
                            arr_45 [i_7] [(unsigned short)9] [i_8] = ((/* implicit */unsigned char) arr_42 [i_7] [(_Bool)1] [i_12] [i_7] [i_13]);
                            var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)30750))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1500570843903681750LL)))) > (0ULL))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_7] [7LL]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)51)))))));
            }
        } 
    } 
}
