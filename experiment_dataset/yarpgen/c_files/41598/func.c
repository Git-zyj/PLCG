/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41598
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
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_12 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)27)) / (1906054400)));
                        var_13 = ((/* implicit */int) ((((unsigned int) max((15527650368500368792ULL), (((/* implicit */unsigned long long int) arr_0 [i_3]))))) * (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)54550)))))));
                        var_14 *= ((/* implicit */unsigned short) ((unsigned int) var_1));
                    }
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1879773809)) ? (((unsigned int) -318443749435282968LL)) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_8 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 2])))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_1);
    var_17 = var_2;
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_4 = 3; i_4 < 18; i_4 += 2) /* same iter space */
    {
        arr_13 [i_4] = ((((/* implicit */int) arr_11 [i_4 - 2])) >> (((((/* implicit */int) arr_11 [i_4 - 3])) - (14820))));
        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [15LL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1023))) : (arr_12 [i_4 - 3] [i_4 - 3])));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_19 += ((/* implicit */unsigned short) ((65534LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1006)))));
            arr_16 [i_5] [3] [i_5] = ((/* implicit */short) arr_12 [i_5] [i_4]);
        }
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            arr_20 [i_6] [i_6] = arr_12 [i_4] [i_6];
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (unsigned short)44004))));
        }
    }
    for (long long int i_7 = 3; i_7 < 18; i_7 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */int) ((long long int) ((_Bool) -2217543058909646066LL)));
        arr_24 [i_7] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_17 [i_7] [6U] [i_7])))) ? (max(((~(-2217543058909646063LL))), (((/* implicit */long long int) var_5)))) : (max((var_10), (arr_15 [i_7 - 1] [i_7])))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-20639)) ? (var_7) : (((/* implicit */int) var_8))))) % (((((/* implicit */_Bool) 16552476161554461125ULL)) ? (2217543058909646066LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60)))))))))));
    }
    for (long long int i_8 = 1; i_8 < 17; i_8 += 1) 
    {
        arr_27 [i_8] = ((/* implicit */unsigned short) -2752867531379400964LL);
        var_23 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_8 + 1])))))) <= (min((((/* implicit */unsigned long long int) (short)20637)), (min((((/* implicit */unsigned long long int) (short)-1918)), (18446744073709551615ULL)))))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max(((_Bool)1), (((_Bool) -5798849651631386409LL)))))));
                    var_25 = ((/* implicit */short) ((((-6350409802101690058LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21525))))) != (2217543058909646057LL)));
                    arr_34 [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) arr_18 [i_8]);
                    var_26 = ((/* implicit */unsigned int) (unsigned short)21510);
                }
            } 
        } 
    }
    for (long long int i_11 = 0; i_11 < 18; i_11 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            var_27 = ((/* implicit */long long int) arr_1 [i_11] [i_11]);
            var_28 ^= ((/* implicit */long long int) arr_14 [i_11]);
            arr_41 [i_12] [i_12] = max((max((((/* implicit */long long int) (~(arr_32 [i_12] [i_12] [i_12] [7U])))), (arr_6 [i_12] [i_12] [(unsigned char)15] [i_11]))), (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1003)) & (((/* implicit */int) arr_39 [i_12]))))), (var_10))));
        }
        for (long long int i_13 = 2; i_13 < 17; i_13 += 1) 
        {
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (-(7378636679855932312ULL)))) ? (max((arr_23 [i_13 - 2]), (arr_23 [i_13 - 2]))) : (arr_7 [i_11] [i_11] [i_11]))))));
            arr_44 [i_11] [2U] = ((/* implicit */_Bool) (short)-24639);
        }
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) 1296648974)) ? (((((/* implicit */_Bool) arr_7 [i_11] [i_11] [i_11])) ? (((/* implicit */long long int) arr_32 [i_11] [i_11] [i_11] [i_11])) : (var_10))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) -30015548)), (3440248792U)))))))));
        var_31 = ((/* implicit */unsigned short) var_11);
        var_32 = min((((/* implicit */long long int) var_11)), (arr_6 [i_11] [i_11] [i_11] [i_11]));
        arr_45 [i_11] [i_11] = ((unsigned int) arr_21 [i_11]);
    }
    var_33 = ((/* implicit */_Bool) var_7);
}
