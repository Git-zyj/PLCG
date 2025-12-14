/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244059
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        arr_8 [i_2] |= ((/* implicit */unsigned char) var_9);
                        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) arr_4 [i_3] [i_2] [i_2] [i_0]))));
                        var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */int) var_5)) / (((/* implicit */int) arr_4 [i_2] [i_1] [i_2] [i_1])))) : (1884522394)));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((unsigned int) var_4)))))));
                                arr_14 [i_1] [i_4] [i_0] [i_1] [i_0] = ((/* implicit */short) (((((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-1012)))) & (((/* implicit */int) (short)(-32767 - 1))))) & ((((~(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (signed char)(-127 - 1)))))));
                                arr_15 [i_2] [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_4] [i_0] [i_1] [i_0 - 1] [i_0]))) / (var_1)))) ? (((/* implicit */int) arr_11 [i_4] [i_0] [i_0])) : (arr_9 [5U] [(unsigned char)9] [10LL] [i_0])))));
                                arr_16 [i_0] [i_1] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((-1067720397) ^ (((/* implicit */int) var_4)))), (arr_13 [i_0] [(_Bool)0] [i_0])))) ? (((((/* implicit */int) (!(var_9)))) + (((/* implicit */int) (short)26765)))) : ((-((+(((/* implicit */int) (unsigned char)91))))))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_0 - 1])) << (((((/* implicit */int) arr_0 [i_0 - 1])) + (24853))))) : (((/* implicit */int) ((_Bool) (short)(-32767 - 1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */short) (!((_Bool)1)));
    /* LoopSeq 1 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_17 = ((/* implicit */signed char) var_2);
        /* LoopSeq 4 */
        for (unsigned short i_7 = 2; i_7 < 8; i_7 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (arr_3 [i_6] [i_6])));
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                arr_25 [i_6] [i_6] [i_6] [(_Bool)1] = ((/* implicit */_Bool) arr_4 [i_8] [i_8] [i_8] [i_7 + 1]);
                var_19 &= ((/* implicit */unsigned char) arr_23 [i_6] [i_6] [i_6] [i_6]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                {
                    var_20 |= ((/* implicit */int) var_6);
                    arr_28 [i_6] [i_7 - 2] [i_8] [i_9] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_7 - 1] [i_7 + 3])) & (((/* implicit */int) var_5))));
                }
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
                {
                    var_21 += ((short) (!(((/* implicit */_Bool) arr_12 [i_7 + 3] [6U] [11ULL] [11ULL] [11ULL] [6U] [i_10]))));
                    var_22 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_11)))))) ? (((((/* implicit */int) var_10)) - (((/* implicit */int) var_9)))) : (((/* implicit */int) var_10))));
                    arr_33 [10ULL] = (+(((/* implicit */int) (unsigned short)65525)));
                }
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        var_23 = var_11;
                        arr_39 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) arr_32 [i_6] [i_6] [i_8]);
                        var_24 = ((/* implicit */unsigned long long int) 3312467170405885963LL);
                    }
                    arr_40 [i_6] [i_11] [i_6] [i_8] [i_6] [i_6] = ((/* implicit */unsigned char) var_2);
                    var_25 *= ((/* implicit */_Bool) var_2);
                }
                var_26 += ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (17037310391059718725ULL))), (((/* implicit */unsigned long long int) arr_38 [i_7] [i_7] [i_8] [i_7] [i_7] [i_7 + 1] [i_7 + 2]))));
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) % ((+(((/* implicit */int) ((signed char) var_6)))))));
            }
            var_28 = ((/* implicit */short) var_4);
            /* LoopSeq 1 */
            for (short i_13 = 1; i_13 < 7; i_13 += 2) 
            {
                arr_43 [(_Bool)0] = ((/* implicit */long long int) 1718225572U);
                arr_44 [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
                var_29 = ((/* implicit */unsigned long long int) var_0);
            }
        }
        for (long long int i_14 = 2; i_14 < 9; i_14 += 4) 
        {
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 869502245)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))))));
            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_1))));
        }
        for (unsigned long long int i_15 = 4; i_15 < 10; i_15 += 2) /* same iter space */
        {
            arr_49 [i_6] = ((/* implicit */unsigned short) var_10);
            var_32 ^= ((/* implicit */unsigned short) (-(((arr_24 [i_6] [i_6]) + (var_11)))));
            var_33 |= ((/* implicit */unsigned long long int) var_0);
            var_34 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
        }
        for (unsigned long long int i_16 = 4; i_16 < 10; i_16 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */short) (+((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) var_2))))))));
            arr_53 [i_6] [i_6] = ((/* implicit */signed char) var_11);
        }
    }
}
