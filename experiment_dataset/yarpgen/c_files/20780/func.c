/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20780
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [17ULL] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (var_8))))))), (((unsigned int) max((var_12), (((/* implicit */unsigned int) arr_1 [(signed char)4])))))));
        arr_3 [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) -3755308628662312984LL))))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) arr_4 [i_1] [i_1]);
        arr_9 [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((unsigned int) -3755308628662312984LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) 20ULL)))) || (((/* implicit */_Bool) arr_6 [i_1])))))) : (((unsigned long long int) (!(((/* implicit */_Bool) -6715818539676390186LL)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_16 [i_3] = ((/* implicit */unsigned char) (signed char)-25);
            arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_11 [i_3] [i_2]);
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                arr_20 [i_3] [i_3] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) ((((arr_10 [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48183))))) & (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                arr_21 [(unsigned short)0] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_4]))));
                arr_22 [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */int) arr_4 [i_2] [i_4])) : (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_6 [i_2])))))));
                arr_23 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 1843341976U)))) ? (var_5) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (1843341978U)))));
            }
        }
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            arr_27 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (-(((max((var_10), (((/* implicit */long long int) var_3)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
            arr_28 [i_5] = ((/* implicit */signed char) (+(((min((arr_5 [(_Bool)1]), (((/* implicit */unsigned int) var_1)))) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_0))))))));
        }
        arr_29 [i_2] [i_2] = ((/* implicit */signed char) max(((+(min((((/* implicit */unsigned long long int) (unsigned short)17353)), (1627697931170725250ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_25 [i_2] [i_2])) && (((/* implicit */_Bool) arr_15 [i_2] [i_2])))) && ((!(((/* implicit */_Bool) arr_4 [i_2] [i_2])))))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 1; i_7 < 11; i_7 += 1) 
            {
                {
                    arr_36 [i_6] = min((max((((/* implicit */unsigned long long int) arr_19 [i_7 + 1] [i_7] [i_7 + 1] [(unsigned char)2])), (arr_25 [i_7 - 1] [i_7 - 1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [6LL] [i_7 + 1]))))));
                    arr_37 [i_2] [i_6] = ((unsigned char) (((!(var_3))) || (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_12 [4U] [(signed char)7] [i_6]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 2; i_8 < 10; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        arr_45 [i_10] [i_9] [i_8 + 1] [i_9] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)181))))) ^ ((+(((/* implicit */int) arr_13 [i_9]))))));
                        arr_46 [i_2] [i_2] [i_9] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_14 [i_9] [(unsigned short)8] [i_9]);
                    }
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        arr_49 [i_2] [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((6715818539676390186LL), (((/* implicit */long long int) (signed char)-45))))))) ? (((/* implicit */unsigned long long int) (((!(var_8))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [(unsigned char)6] [i_2]))))) : (((/* implicit */int) min((var_2), (((/* implicit */signed char) var_4)))))))) : (((max((((/* implicit */unsigned long long int) (signed char)127)), (9223372036821221376ULL))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_44 [i_2])))))))));
                        arr_50 [i_8] [i_9] = ((/* implicit */short) min(((!((_Bool)1))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2998337978633896720ULL)) ? (6870437696869489931ULL) : (((/* implicit */unsigned long long int) var_12))))) && (((((/* implicit */_Bool) (signed char)-28)) && (((/* implicit */_Bool) (unsigned char)181))))))));
                        arr_51 [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_4 [i_8 + 2] [i_8 - 1]), (((/* implicit */unsigned short) (!(var_11)))))))));
                    }
                    arr_52 [i_9] = ((/* implicit */unsigned short) (+(437380152U)));
                    arr_53 [i_2] [i_2] [i_9] [(unsigned char)0] = ((/* implicit */_Bool) arr_4 [i_2] [i_2]);
                    arr_54 [i_8] [i_8] &= ((/* implicit */short) (+((~(((/* implicit */int) arr_1 [i_8 + 1]))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
    {
        arr_57 [i_12] [i_12] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)963)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned short)19756)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_12])))));
        arr_58 [(unsigned char)5] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) 2026812035)) - (0U))) + (((/* implicit */unsigned int) min((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_4)))))))));
        arr_59 [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_12])) - ((-(((/* implicit */int) (short)-11279))))));
        arr_60 [(unsigned char)8] = ((/* implicit */int) max((((unsigned char) ((((/* implicit */_Bool) 2591637191U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-22237))))), (((/* implicit */unsigned char) var_3))));
    }
}
