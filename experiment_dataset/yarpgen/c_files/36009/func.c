/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36009
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1])) || (((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 12486503481059679659ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [(unsigned char)1] [i_0]))))))))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~(max((1071604506U), (((/* implicit */unsigned int) 1145428688)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned int i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_8 [i_1] [(unsigned char)0] [i_1] [i_1] [(unsigned char)0] [i_1]), (((((/* implicit */_Bool) arr_8 [(_Bool)1] [22LL] [i_3] [i_4 + 1] [(_Bool)1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (5960240592649871956ULL)))))) ? (5960240592649871956ULL) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)60))))) / (((5960240592649871956ULL) | (((/* implicit */unsigned long long int) 3223362769U)))))))))));
                        var_17 ^= ((/* implicit */int) arr_8 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_1] [i_2]);
                        arr_12 [i_1] [i_3] [i_4 + 2] |= (~(((/* implicit */int) (_Bool)1)));
                        var_18 -= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)-125))) != (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_4 [(short)0] [(short)0]))) >= (((((/* implicit */int) arr_4 [i_1] [i_2])) & (((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) 1071604518U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_1] [0ULL])) : (((/* implicit */int) (_Bool)1)))))))), (((signed char) arr_11 [i_1] [i_1] [i_1] [6] [i_2])))))));
        }
        for (int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((1071604486U), (((/* implicit */unsigned int) (short)14798)))))));
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((((min((348604303799261626ULL), (((/* implicit */unsigned long long int) (signed char)35)))) << (((min((var_13), (((/* implicit */unsigned long long int) (unsigned char)235)))) - (185ULL))))), (arr_8 [i_1] [i_1] [i_1] [i_5] [i_5] [i_5]))))));
        }
        for (unsigned short i_6 = 4; i_6 < 22; i_6 += 4) 
        {
            var_22 += arr_8 [i_1] [i_6] [i_6 - 4] [i_6] [i_1] [0U];
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                for (unsigned char i_8 = 1; i_8 < 23; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        {
                            var_23 |= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)20543))))) ? (arr_22 [i_1] [i_6] [i_7] [i_8 - 1] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6 - 1] [i_6]))))));
                            arr_28 [i_1] [i_1] &= ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_4 [i_1] [i_6 - 3]))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) 6762700027476384329ULL))));
            arr_29 [i_6] [i_6] [15ULL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18098139769910289990ULL)) || (((/* implicit */_Bool) (unsigned char)7))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_25 &= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_4))))));
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_2)) ? (((arr_25 [i_1] [i_1] [i_1] [(short)16] [2U] [i_1]) ? (arr_8 [i_1] [i_1] [i_1] [17U] [8ULL] [i_10]) : (arr_9 [16] [i_10] [23] [i_1] [i_1]))) : (((((/* implicit */_Bool) 4078590925U)) ? (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_1] [i_1] [9U])) : (731611700001335485ULL))))))))));
            var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_21 [i_1] [i_10]) < (arr_21 [i_10] [i_1]))))) : (((((/* implicit */unsigned int) ((int) 216376371U))) ^ (max((1590171375U), (((/* implicit */unsigned int) (short)7121))))))));
        }
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (~(((((/* implicit */_Bool) (-(arr_9 [18ULL] [18ULL] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))) : (min((((/* implicit */unsigned long long int) arr_27 [16LL])), (var_5))))))))));
        arr_33 [(unsigned char)23] &= ((/* implicit */signed char) var_9);
    }
    /* LoopSeq 1 */
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                for (unsigned char i_14 = 3; i_14 < 11; i_14 += 4) 
                {
                    {
                        var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1813201687)) ? (arr_2 [i_11]) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_11] [i_11] [i_13] [(unsigned char)21])) ? (((/* implicit */int) arr_4 [i_14] [i_13])) : (arr_6 [i_11] [i_13]))) * (((/* implicit */int) max(((short)-27186), (((/* implicit */short) var_3))))))))));
                        var_30 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_13] [i_12])) << (((1813201673) - (1813201644)))))) | (((((/* implicit */_Bool) arr_8 [i_11] [i_12] [i_12] [i_13] [i_13] [i_14 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_1 [10ULL] [i_11])))))), (((((((/* implicit */_Bool) -2101092964)) ? (((/* implicit */unsigned long long int) 526986094468197879LL)) : (var_13))) & (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-25655)), (var_7))))))));
                    }
                } 
            } 
        } 
        var_31 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */long long int) (short)7129)), (arr_19 [i_11] [i_11] [7ULL]))) : (((/* implicit */long long int) ((/* implicit */int) (short)7129)))))) && (((/* implicit */_Bool) (-(arr_16 [i_11] [i_11] [i_11]))))));
    }
    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_3))));
    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25656))) : (var_6))), (((unsigned int) (_Bool)1))))) ? (min((((long long int) (signed char)3)), (((/* implicit */long long int) ((((/* implicit */_Bool) -1836641191650572706LL)) && (((/* implicit */_Bool) var_11))))))) : (((/* implicit */long long int) (((((-(((/* implicit */int) var_4)))) + (2147483647))) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) var_0)))) - (101)))))))))));
}
