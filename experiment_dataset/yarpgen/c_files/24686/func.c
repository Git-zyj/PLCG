/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24686
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) (-(((arr_0 [i_0] [i_0]) + (arr_0 [(unsigned short)20] [i_0])))));
        arr_2 [i_0] = ((/* implicit */int) var_10);
        var_15 = ((/* implicit */unsigned short) (-(var_9)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) ^ (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 2]))));
            /* LoopSeq 2 */
            for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_3 + 1])) == (((/* implicit */int) arr_4 [i_3 + 2]))));
                arr_10 [(unsigned short)2] [(unsigned short)5] [(unsigned char)13] [i_3 - 1] = ((/* implicit */unsigned long long int) var_2);
            }
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (unsigned char)169))));
                arr_14 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) arr_8 [(unsigned char)13] [i_2] [i_2] [i_1])))) : (((((((/* implicit */int) (signed char)-103)) + (2147483647))) >> (((/* implicit */int) (unsigned short)1))))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(9223372036854775807LL))))));
                var_20 = ((/* implicit */signed char) (+((+(var_13)))));
            }
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        {
                            var_21 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70))) + (var_0));
                            var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) -1LL)))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((var_10) | (((/* implicit */unsigned int) arr_21 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))));
                            var_24 = ((((/* implicit */_Bool) arr_5 [i_5] [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_1])));
                            var_25 = ((/* implicit */unsigned char) ((int) ((signed char) var_9)));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) ((var_6) + (((/* implicit */long long int) ((/* implicit */int) arr_19 [(_Bool)1] [(_Bool)1] [i_1 - 1] [i_1 - 1])))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_8] [(_Bool)1])) || (((/* implicit */_Bool) arr_12 [4ULL] [4ULL] [4ULL]))))) >> (((3879759386675703844LL) - (3879759386675703827LL)))));
                        arr_30 [(unsigned short)16] [(unsigned short)16] [i_8] [i_10] = ((arr_27 [i_8] [i_1 - 1] [i_1 - 1]) >= ((~(((/* implicit */int) arr_26 [i_1] [(short)13] [i_1] [i_1])))));
                    }
                } 
            } 
            arr_31 [12LL] [i_8] &= ((/* implicit */short) ((((/* implicit */_Bool) -1LL)) ? (arr_15 [i_1 - 1] [i_1 - 1] [i_1]) : (arr_25 [12ULL] [i_1 + 1])));
        }
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_12 = 2; i_12 < 14; i_12 += 2) 
            {
                for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        {
                            arr_45 [9ULL] [(unsigned char)16] [9ULL] [i_11] [i_11] [i_1] = ((/* implicit */unsigned short) var_5);
                            var_28 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)4095))))) << (((((/* implicit */int) (signed char)-13)) + (37)))));
                            arr_46 [i_1] [i_1] [i_1] [10LL] [i_1] [5] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_11] [i_11]))));
                            arr_47 [i_1] [i_1] [i_1] [(unsigned char)11] [(unsigned char)11] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) ^ (var_13)));
                        }
                    } 
                } 
            } 
            arr_48 [i_1] [i_11 - 1] &= ((/* implicit */_Bool) ((unsigned short) var_10));
        }
        var_29 = ((/* implicit */signed char) (unsigned char)3);
        arr_49 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % ((+(((/* implicit */int) arr_24 [(unsigned short)4]))))));
    }
    var_30 = ((/* implicit */long long int) var_3);
    var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) (_Bool)1)))));
}
