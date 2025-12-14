/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20969
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_12 [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) min((((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_3 - 2])), (arr_6 [i_0] [i_1] [i_2])))) % (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (arr_9 [i_1]) : (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])))))), (((/* implicit */long long int) arr_4 [(unsigned char)10] [i_1] [i_3 + 2]))));
                            var_12 = ((/* implicit */unsigned long long int) arr_9 [i_3]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_13 = ((((((/* implicit */_Bool) arr_17 [i_6] [i_4] [i_6 - 2] [i_6 - 1] [i_4])) ? (arr_17 [i_6] [i_6] [i_6] [i_6 - 2] [i_1]) : (arr_17 [(_Bool)1] [i_6] [i_1] [i_6 - 2] [i_1]))) <= (min((arr_17 [i_6 + 1] [i_6] [i_6] [i_6 - 2] [i_1]), (arr_17 [(unsigned short)12] [i_6] [i_6] [i_6 - 2] [i_1]))));
                                var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5]))) > (arr_2 [i_0]))))));
                                var_15 = ((/* implicit */unsigned long long int) ((((((arr_6 [i_6 + 1] [i_0 - 1] [i_0]) + (2147483647))) >> (((arr_6 [i_6 + 1] [i_0 + 1] [i_0 + 1]) + (1550198009))))) > (((int) -7884939636698391005LL))));
                                arr_19 [i_0] [i_1] [i_0] [i_4] [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [(_Bool)1] [(_Bool)1] [i_4] [1LL] [9LL]))) + (((((/* implicit */long long int) 0)) % (-8718992574166844161LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (long long int i_8 = 3; i_8 < 9; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) 7884939636698391004LL);
                                arr_32 [i_0 + 3] [i_1] [i_8] [i_1] [i_0] [i_9] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])), (min((((/* implicit */unsigned long long int) ((var_10) ? (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))), (((unsigned long long int) var_6))))));
                                var_17 ^= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_3 [i_0 + 2]))))) : (((-7884939636698391001LL) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1])))))));
                                var_18 = min((((((/* implicit */long long int) ((arr_15 [i_0] [i_0] [i_7] [i_8] [i_9]) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_1] [i_1] [i_1] [i_8] [i_0])) : (((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */_Bool) 7884939636698391004LL)) ? (-9223372036854775797LL) : (((/* implicit */long long int) -84175561)))))), (((/* implicit */long long int) (!((!(var_10)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        {
                            arr_37 [i_0] [i_1] [i_10] [i_11] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) 7884939636698391000LL)))))))));
                            var_19 = ((/* implicit */short) arr_20 [i_0]);
                            var_20 = ((/* implicit */unsigned short) arr_34 [i_0 + 1] [i_0 + 3] [i_0 + 3] [i_0 + 2]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_12 = 2; i_12 < 13; i_12 += 2) 
    {
        for (unsigned char i_13 = 2; i_13 < 13; i_13 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_14 = 2; i_14 < 11; i_14 += 2) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 2) 
                    {
                        {
                            arr_49 [i_12] [i_12] [i_12 - 2] [i_12] = ((/* implicit */long long int) (((~(-7884939636698390975LL))) > (((/* implicit */long long int) (-(((/* implicit */int) arr_43 [i_12] [i_12 - 1] [i_13 - 1])))))));
                            arr_50 [i_12] [i_12 - 1] [i_13 - 2] [i_13] [i_14] [i_15] = ((/* implicit */short) (+((~((-(((/* implicit */int) (short)-1))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_16 = 2; i_16 < 13; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        {
                            arr_55 [(short)10] [(short)10] [(short)10] [i_17] [6LL] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3))))))) ? ((((_Bool)1) ? (((((/* implicit */_Bool) 9223372036854775788LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)49152)))) : (((/* implicit */int) arr_54 [i_12] [i_13 + 1] [i_12] [i_12])))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((15LL), (((/* implicit */long long int) arr_53 [13ULL] [i_13] [i_16 - 1] [i_17]))))))))));
                            arr_56 [i_12] [i_13] [i_16] [i_17] = ((/* implicit */int) ((((var_4) + (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_16 - 2] [i_16] [i_16 - 1] [i_16 - 2] [i_13]))))) | (((/* implicit */long long int) ((((/* implicit */int) arr_48 [i_16 + 1] [i_16] [i_16 - 1] [i_16] [i_16])) | (((/* implicit */int) arr_48 [i_16 - 1] [i_13] [i_12] [i_13] [i_12])))))));
                            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(-7884939636698391001LL))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
