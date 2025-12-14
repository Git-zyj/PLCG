/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242755
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
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((268435455) << (((268435437) - (268435434)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) var_10);
                            var_16 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (signed char)127)) ? (268435465) : (((/* implicit */int) (short)16859)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_4 = 2; i_4 < 16; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            var_17 = ((/* implicit */short) (unsigned char)134);
            var_18 ^= ((/* implicit */unsigned short) arr_12 [(signed char)10] [(signed char)10]);
        }
        var_19 -= var_3;
        arr_15 [i_4] = ((/* implicit */signed char) max((2814596824U), (((/* implicit */unsigned int) (short)14676))));
    }
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
    {
        arr_19 [i_6] [i_6] = ((/* implicit */unsigned int) ((unsigned short) 4294967295U));
        arr_20 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_17 [i_6]), (arr_17 [i_6])))) ? (arr_4 [i_6] [i_6] [i_6]) : (2100937303)));
        arr_21 [i_6] = var_12;
        arr_22 [i_6] [i_6] = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)16)), (-268435417)));
    }
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned char) arr_2 [i_7] [(short)16]);
        var_21 = ((/* implicit */unsigned long long int) arr_16 [i_7] [i_7]);
    }
    for (short i_8 = 3; i_8 < 21; i_8 += 3) 
    {
        arr_29 [i_8] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_4 [i_8] [i_8 + 3] [i_8])) - (((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))) : (((((/* implicit */_Bool) 3139109813U)) ? (((/* implicit */unsigned long long int) 4611686017890516992LL)) : (arr_27 [i_8] [i_8])))))));
        var_22 = ((/* implicit */unsigned short) (((!(arr_2 [i_8] [(short)4]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)8)), (var_7)))) ? (((/* implicit */int) arr_3 [(unsigned char)16])) : (((/* implicit */int) (unsigned short)42638)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 3) 
        {
            var_23 ^= ((/* implicit */int) 68719476735ULL);
            /* LoopSeq 3 */
            for (int i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                arr_34 [i_10] [i_9] [i_10] [i_10] = ((/* implicit */int) (signed char)9);
                arr_35 [i_8] [i_8] [i_10] [i_9] = ((/* implicit */short) var_10);
            }
            for (short i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                arr_38 [i_9] [i_9] [i_11] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_4 [i_8 - 3] [i_9 - 1] [i_9 + 3])) > (max((13U), (((/* implicit */unsigned int) (unsigned char)34))))));
                var_24 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_37 [i_8 - 3] [i_9 - 2] [(unsigned char)22]))));
                var_25 = ((/* implicit */short) 3327781660637251961LL);
            }
            for (unsigned int i_12 = 3; i_12 < 23; i_12 += 1) 
            {
                arr_43 [i_8 - 1] [i_9] = ((/* implicit */int) arr_30 [i_9] [i_12]);
                arr_44 [i_9] [i_9] = ((/* implicit */unsigned char) min(((~(var_10))), (((/* implicit */int) var_1))));
                arr_45 [i_8] [i_8 - 1] [i_9] [15LL] = ((/* implicit */unsigned short) arr_7 [i_8] [i_9] [i_12]);
                arr_46 [i_8 + 2] [i_9 - 1] [(short)8] [i_9] = (short)32761;
            }
            arr_47 [i_8] [i_8 - 2] [i_9] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_8] [i_8 - 3] [i_9] [i_9 - 2]))) % (arr_1 [(_Bool)1] [i_8 - 3])))) ? (var_11) : (((unsigned long long int) arr_36 [i_8 + 3])))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-46)) + (2147483647))) << (((((((((/* implicit */_Bool) (signed char)91)) ? (-1752959027) : (((/* implicit */int) (signed char)4)))) + (1752959040))) - (13))))))));
        }
        var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) 802633211)) - (-1501390849238055197LL)));
    }
}
