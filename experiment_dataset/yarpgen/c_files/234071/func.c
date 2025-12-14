/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234071
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) var_12);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_16)) - (((/* implicit */int) arr_1 [i_0]))))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            arr_5 [i_0] [i_1 - 1] = ((/* implicit */long long int) arr_1 [i_0]);
            var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) -2124199658328544419LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_1 + 1]))));
            arr_6 [i_1] [i_0 - 1] = ((/* implicit */short) ((unsigned char) arr_0 [i_0 + 1]));
        }
        for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
            var_21 = ((/* implicit */unsigned long long int) var_0);
        }
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (int i_6 = 1; i_6 < 18; i_6 += 4) 
                {
                    {
                        var_22 -= ((/* implicit */short) ((var_7) ? ((-(arr_0 [i_5]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(unsigned char)17])))))));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_12 [i_5] [i_4] [i_6]))));
                    }
                } 
            } 
        } 
        var_24 = 2124199658328544418LL;
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-2171)) ? (arr_19 [i_3] [i_7] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-2171))))));
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_10 = 2; i_10 < 17; i_10 += 1) 
                    {
                        arr_28 [i_3] [i_7] [i_8] [i_3] [i_9] [i_3] [(unsigned char)5] = ((/* implicit */long long int) arr_9 [i_8]);
                        var_26 = ((/* implicit */unsigned char) ((short) (-(-6))));
                    }
                    arr_29 [i_3] [i_3] [i_3] [5U] [5U] = ((/* implicit */long long int) arr_27 [i_9] [i_8] [i_8] [i_3] [i_3]);
                    arr_30 [i_9] [i_3] [(unsigned short)18] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned char) var_16)))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((unsigned char) arr_8 [i_3])))));
                    var_28 = ((/* implicit */unsigned long long int) ((int) var_5));
                }
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_39 [i_3] [i_7] [i_3] = ((/* implicit */short) (unsigned short)65535);
                            arr_40 [i_12] [i_12] [i_3] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2171)) >> (((/* implicit */int) (unsigned short)0))));
                            var_29 = ((/* implicit */unsigned short) var_10);
                        }
                    } 
                } 
            }
            arr_41 [i_3] [i_7] = ((/* implicit */int) arr_15 [i_3] [i_3] [i_7] [i_7] [i_7]);
        }
    }
    for (int i_14 = 0; i_14 < 16; i_14 += 4) 
    {
        arr_44 [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) arr_1 [i_14]))))) ? (((((/* implicit */_Bool) (unsigned char)35)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2149))))) : (((((/* implicit */_Bool) -2124199658328544443LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_5)))))) ? (((/* implicit */int) (short)-2171)) : (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))) >= ((-(var_5))))))));
        var_30 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((((/* implicit */int) var_16)) + (2147483647))) << (((((-2154720037993751406LL) + (2154720037993751415LL))) - (9LL))))) : (((/* implicit */int) ((1430318488519051305LL) != (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_14] [i_14])))))))));
    }
    for (long long int i_15 = 0; i_15 < 24; i_15 += 2) 
    {
        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((long long int) 922780449)))));
        arr_49 [i_15] [i_15] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)60623))));
        arr_50 [(short)9] = ((/* implicit */long long int) ((short) (unsigned short)7996));
        arr_51 [i_15] [i_15] = ((((long long int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_2))))) << ((((-(arr_46 [i_15]))) - (2213224367810202532ULL))));
    }
}
