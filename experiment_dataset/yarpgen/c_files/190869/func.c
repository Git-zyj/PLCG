/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190869
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
    var_16 = ((((/* implicit */int) var_15)) != (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (0ULL)))))));
    var_17 = ((/* implicit */short) var_5);
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_8)), (((((((/* implicit */_Bool) var_13)) ? (var_13) : (var_5))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (var_10)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) (+(var_13)));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                arr_10 [7] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0 + 1])) && (((/* implicit */_Bool) arr_9 [i_0 - 1]))))), (max((arr_9 [i_0 + 1]), (arr_9 [i_0 - 1])))));
                var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)));
                arr_11 [(unsigned short)12] &= ((/* implicit */long long int) 0ULL);
            }
            var_21 = ((/* implicit */long long int) ((((arr_0 [i_0 - 1]) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))))) : (arr_1 [i_0 + 1] [i_1 - 1]))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_1] [i_1] [i_0]), (((/* implicit */unsigned short) var_15)))))) % (((((/* implicit */_Bool) var_9)) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            arr_12 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_1 - 1]))) >= (arr_1 [i_0 + 1] [i_0 - 1])))), (var_0)));
        }
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    {
                        arr_22 [i_6] [i_5] [i_4] [i_3] = ((/* implicit */short) 0ULL);
                        arr_23 [(unsigned short)16] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_3] [i_4])))) * (((/* implicit */int) var_7))));
                    }
                } 
            } 
            arr_24 [i_3] [(signed char)5] = ((/* implicit */short) ((arr_4 [i_3] [i_3]) < (((/* implicit */int) var_1))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                for (short i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            arr_36 [i_3] [i_7] [i_8] [(short)8] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_8] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (5ULL)))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_13 [i_10] [i_7])))))))));
                            var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_4 [i_10] [14ULL]))));
                        }
                        var_24 = ((/* implicit */signed char) (+((~(var_5)))));
                    }
                } 
            } 
            arr_37 [i_3] [i_3] = ((/* implicit */short) ((arr_9 [i_7]) >= (((/* implicit */long long int) var_9))));
        }
        for (int i_11 = 0; i_11 < 24; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                for (unsigned char i_13 = 3; i_13 < 23; i_13 += 4) 
                {
                    {
                        arr_45 [i_13] [i_13 - 1] = ((/* implicit */_Bool) arr_16 [i_13] [(unsigned short)10]);
                        arr_46 [i_11] [i_11] [i_13] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_3] [i_11] [i_12]))));
                        var_25 = ((/* implicit */long long int) ((short) arr_35 [i_12] [i_12] [i_12] [i_13 - 3] [i_13 - 1] [i_13 - 3] [i_13 - 2]));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((short) 16ULL))) : (((/* implicit */int) arr_27 [i_11] [i_3] [i_3]))));
        }
        arr_47 [i_3] = ((/* implicit */signed char) ((((-765631766) + (2147483647))) << (((18446744073709551581ULL) - (18446744073709551581ULL)))));
        arr_48 [i_3] = ((/* implicit */short) ((long long int) ((int) 0)));
    }
}
