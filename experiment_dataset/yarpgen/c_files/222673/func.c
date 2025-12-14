/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222673
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
    var_12 = ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) >> (((/* implicit */int) min(((unsigned short)25471), (((/* implicit */unsigned short) (_Bool)1))))))) >> (((/* implicit */int) (unsigned char)0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] [1U] = ((/* implicit */unsigned int) (unsigned short)5073);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_13 = ((/* implicit */int) ((arr_5 [i_1 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-32747)))));
            var_14 += ((/* implicit */unsigned long long int) 494808257);
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 11; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 3; i_4 < 9; i_4 += 2) 
                    {
                        {
                            arr_14 [(signed char)8] [i_1] [i_2] [i_4] [i_0] [i_1 + 2] = 4288295960U;
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
                            var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_4 - 2] [i_4 - 3])) * (((/* implicit */int) arr_11 [i_4 + 2] [i_4 - 2]))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                for (unsigned int i_7 = 3; i_7 < 12; i_7 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_8 = 1; i_8 < 10; i_8 += 3) 
                        {
                            var_16 ^= ((/* implicit */unsigned short) 3969553763U);
                            var_17 ^= ((/* implicit */int) arr_11 [(short)8] [i_5]);
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)85)) ^ (2091561084)));
                        }
                        for (unsigned short i_9 = 1; i_9 < 12; i_9 += 4) /* same iter space */
                        {
                            arr_31 [i_5] [i_5] [(unsigned short)7] [i_0] [i_5] = 524287ULL;
                            var_19 &= ((/* implicit */unsigned long long int) 6LL);
                        }
                        for (unsigned short i_10 = 1; i_10 < 12; i_10 += 4) /* same iter space */
                        {
                            var_20 = ((arr_16 [i_0] [i_6] [i_0]) && (arr_16 [i_0] [7ULL] [i_10 - 1]));
                            arr_34 [i_0 + 1] [i_0 + 3] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */short) 1146022716U);
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_33 [1ULL] [i_5] [i_5] [i_5]))));
                        }
                        arr_35 [6] [6] [i_0] [6] = ((/* implicit */signed char) 3103334951U);
                        arr_36 [i_0] = (_Bool)0;
                        arr_37 [i_0 + 2] [i_0] [(short)6] = (_Bool)1;
                    }
                } 
            } 
            var_22 = ((/* implicit */_Bool) ((9223372036854775807LL) << (((2431845861813092137ULL) - (2431845861813092137ULL)))));
            /* LoopNest 3 */
            for (unsigned short i_11 = 1; i_11 < 12; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned short i_13 = 3; i_13 < 12; i_13 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) arr_7 [i_0] [i_11]);
                            var_24 = arr_22 [10ULL] [i_0] [i_0 - 1] [i_13 - 2] [(signed char)3];
                            arr_46 [i_12] [i_12] [i_0] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (unsigned short)61281);
                        }
                    } 
                } 
            } 
            var_25 = (~(arr_21 [i_0]));
        }
        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_16 = 3; i_16 < 9; i_16 += 1) 
                {
                    for (signed char i_17 = 0; i_17 < 13; i_17 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) 888823409U);
                            arr_56 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 1713124706U);
                            var_27 = ((/* implicit */int) arr_8 [i_16] [i_16] [i_16] [i_16 - 2]);
                            arr_57 [i_14] [i_15] [i_15] [i_0] [i_17] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_17]);
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
            }
            arr_58 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))));
        }
    }
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-14708)) == (((/* implicit */int) (short)1))));
    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (_Bool)0))));
    var_31 = ((/* implicit */int) (short)-1);
}
