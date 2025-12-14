/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191977
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
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1 - 1] = var_7;
                arr_7 [i_0 - 1] [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0 + 1] [i_1]);
                var_17 *= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -7220903833587089360LL)) ? (((/* implicit */int) (short)20395)) : (900911927)))) + (var_13));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) (short)-8679);
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_3 = 1; i_3 < 21; i_3 += 3) 
        {
            for (unsigned int i_4 = 3; i_4 < 21; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    {
                        arr_21 [i_2] [i_4 - 2] = ((/* implicit */unsigned int) arr_18 [i_3] [i_3 + 1] [i_4 - 3] [i_2]);
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            arr_24 [i_2] [i_4] [i_5] [i_6] = ((/* implicit */int) var_16);
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47))) / (716419951U)));
                            arr_25 [i_2] [i_3] [i_4 - 2] [i_5] [i_6] [i_6] = ((/* implicit */short) var_16);
                            var_20 *= ((/* implicit */short) ((((/* implicit */unsigned int) -242872288)) & (716759871U)));
                        }
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)1360)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (arr_9 [i_2])));
        /* LoopSeq 4 */
        for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            arr_28 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_2] [i_2])) + (((/* implicit */int) (_Bool)1)))))));
            var_22 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-16)) | (((/* implicit */int) (short)29))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        {
                            arr_37 [i_2] [i_9] [i_7] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_3)), (arr_29 [(short)3] [i_2] [i_8] [i_9])));
                            arr_38 [i_10] [i_8] [i_9] [(_Bool)1] [i_8] [i_2] &= ((/* implicit */short) -5663389232624069523LL);
                            var_23 = ((/* implicit */short) ((var_7) < (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_2])), (arr_29 [i_10] [i_2] [i_10] [i_10])))) ? (max((var_9), (((/* implicit */unsigned int) var_5)))) : (((((/* implicit */_Bool) (unsigned char)69)) ? (588863905U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111)))))))));
                            arr_39 [i_2] [i_10] = ((/* implicit */short) ((unsigned char) var_6));
                            arr_40 [i_2] [i_2] [i_8] [i_8] [i_8] [i_7] [i_9] = ((/* implicit */short) ((4161148159940966181LL) <= (0LL)));
                        }
                    } 
                } 
            } 
            arr_41 [i_2] = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) (unsigned char)70)))));
        }
        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            var_24 -= arr_17 [i_2] [i_2] [i_11];
            arr_44 [i_11] [i_11] [i_11] &= ((/* implicit */short) (unsigned char)53);
        }
        for (int i_12 = 0; i_12 < 22; i_12 += 2) /* same iter space */
        {
            var_25 *= ((/* implicit */unsigned char) var_4);
            arr_48 [8U] [i_2] [i_2] = ((/* implicit */int) ((((var_14) ? (((/* implicit */long long int) ((/* implicit */int) (short)9184))) : (16744448LL))) <= (((/* implicit */long long int) ((/* implicit */int) var_5)))));
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                for (long long int i_14 = 3; i_14 < 21; i_14 += 4) 
                {
                    {
                        arr_55 [i_2] [i_12] [i_12] |= ((/* implicit */int) arr_50 [i_2] [i_12]);
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (+(3578547345U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-14027))))) : (((((/* implicit */_Bool) arr_17 [i_14 + 1] [i_12] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_14 - 2] [i_14] [i_2]))) : (arr_29 [i_14 - 1] [i_12] [i_12] [i_14 + 1])))));
                        arr_56 [i_2] [i_12] [i_2] [i_14 - 1] |= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_46 [i_12] [i_14 + 1]), ((short)-7928)))) ? (min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) (signed char)15)) ? (3578207424U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                    }
                } 
            } 
            arr_57 [i_2] [i_2] = ((/* implicit */unsigned char) ((1094620429462063739ULL) > (((/* implicit */unsigned long long int) var_8))));
            var_27 = ((/* implicit */short) var_8);
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 22; i_15 += 2) /* same iter space */
        {
            var_28 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) (signed char)-35)))));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3578207422U)) ? (((/* implicit */int) (short)20299)) : (((/* implicit */int) (signed char)15))));
            var_30 &= ((/* implicit */short) ((((/* implicit */_Bool) ((short) (signed char)-127))) ? (arr_36 [i_15] [i_2] [i_15] [i_2] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
        }
    }
    var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (max((16756496330886709534ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_11)))))))) <= (((unsigned long long int) (signed char)-4))));
}
