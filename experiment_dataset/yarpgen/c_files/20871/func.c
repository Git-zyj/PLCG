/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20871
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
    var_20 *= ((/* implicit */unsigned int) ((unsigned short) var_12));
    var_21 = (_Bool)1;
    var_22 |= ((/* implicit */_Bool) var_11);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_1 [i_0 - 1]), (((/* implicit */unsigned short) (_Bool)1))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_1] |= ((/* implicit */short) ((1048560U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_24 = (_Bool)1;
                        arr_11 [i_1] [i_2 - 1] [i_2] [i_2 - 1] |= ((/* implicit */signed char) 0ULL);
                        arr_12 [0ULL] [i_1] [i_2] [i_2] = ((/* implicit */short) arr_5 [i_3] [i_3 + 1] [i_3] [i_3 + 3]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 1; i_5 < 16; i_5 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) arr_14 [(short)3]);
                            var_26 = ((/* implicit */unsigned int) arr_1 [i_5]);
                        }
                        for (long long int i_6 = 1; i_6 < 16; i_6 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [i_4 + 1] [i_2] [i_4] [i_4 - 3]))));
                            var_28 = (~(((/* implicit */int) arr_5 [i_0 + 1] [i_2 - 1] [i_4] [i_6 + 1])));
                        }
                        for (long long int i_7 = 1; i_7 < 16; i_7 += 4) /* same iter space */
                        {
                            arr_23 [i_2] [i_4 + 1] [i_2] [i_2] [i_2] = 18446744073709551615ULL;
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (+(((unsigned int) arr_14 [i_0])))))));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (~(((/* implicit */int) (short)-1)))))));
                            var_31 = ((/* implicit */long long int) (-(192392095U)));
                        }
                        var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        var_33 -= ((/* implicit */unsigned long long int) (unsigned char)12);
                        var_34 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (234081683U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21)))))));
                    }
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) (signed char)8))))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned int i_8 = 1; i_8 < 15; i_8 += 3) 
        {
            arr_27 [i_8] = ((/* implicit */unsigned int) (short)1);
            arr_28 [i_0] [12] &= (_Bool)1;
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 17; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                var_36 = ((/* implicit */int) ((short) arr_29 [i_0] [i_0]));
                var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) 18218145997803936439ULL))));
                var_38 = ((/* implicit */short) (unsigned short)18378);
                var_39 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_10] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1]))));
            }
            arr_34 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)2040))))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)2))));
        }
        for (short i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
        {
            arr_38 [i_0] [i_0] [i_11] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-1))));
            var_40 += ((/* implicit */_Bool) arr_29 [i_0 - 1] [i_0 - 1]);
        }
        for (short i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
        {
            var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)21)) ^ (((/* implicit */int) (short)0))));
            arr_43 [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */int) (_Bool)1);
        }
    }
    /* vectorizable */
    for (unsigned int i_13 = 4; i_13 < 14; i_13 += 1) 
    {
        var_42 = ((/* implicit */signed char) (+(((/* implicit */int) arr_36 [i_13 - 2] [i_13 - 3] [i_13 - 3]))));
        arr_47 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_13 + 2] [i_13] [i_13 - 4] [i_13 - 2] [6] [i_13 - 2] [i_13])) ? (((/* implicit */int) arr_4 [i_13 - 1])) : (((/* implicit */int) arr_16 [i_13 - 3] [i_13 - 1] [i_13 + 1] [i_13 - 4] [4LL] [i_13] [i_13]))));
    }
    for (int i_14 = 2; i_14 < 22; i_14 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) ((signed char) (signed char)26))) : ((~(((/* implicit */int) ((short) (_Bool)1)))))));
            arr_53 [i_15] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_49 [i_14] [i_14 - 2])) + (((/* implicit */int) arr_49 [14] [i_14 - 1]))))), (((arr_48 [i_14 - 1]) + (arr_48 [i_14 + 2])))));
            var_44 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-((-(((/* implicit */int) (_Bool)1))))))), (max(((~(arr_48 [i_15]))), (206618071U)))));
            var_45 &= ((((/* implicit */int) min(((_Bool)1), (arr_50 [i_14 - 2])))) * (((/* implicit */int) arr_49 [i_14] [i_15])));
            arr_54 [i_14] [i_15] [i_14] = ((/* implicit */_Bool) (+((-(arr_51 [i_15])))));
        }
        /* vectorizable */
        for (signed char i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
        {
            arr_57 [i_16] [i_14] = ((/* implicit */unsigned int) 2305842974853955584ULL);
            var_46 = (+(((/* implicit */int) arr_49 [i_14 + 1] [i_14 - 2])));
            var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) var_17))));
            var_48 = ((/* implicit */unsigned int) 16140901098855596031ULL);
            var_49 = ((/* implicit */long long int) ((_Bool) 0U));
        }
        arr_58 [i_14] [i_14] = ((/* implicit */_Bool) 18446744073709551615ULL);
    }
}
