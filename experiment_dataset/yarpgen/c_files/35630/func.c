/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35630
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1 - 2] = ((/* implicit */_Bool) var_2);
                    var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_7 [i_1] [(signed char)9])) : (((/* implicit */int) var_7)))))));
                }
            } 
        } 
        var_11 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 2; i_3 < 8; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                var_12 = ((/* implicit */unsigned char) arr_11 [i_3]);
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            arr_20 [i_6] [(_Bool)1] [(unsigned short)6] [i_3 - 2] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                            var_13 |= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [5LL] [i_3 + 1] [i_0])) : (((/* implicit */int) arr_5 [(unsigned char)0] [i_3 - 2] [i_4 - 1]))))) ? ((((_Bool)1) ? (27ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))))))));
                            var_15 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_5] [6ULL]))) ^ (18446744073709551588ULL)))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) ((signed char) var_4));
            }
            /* LoopNest 2 */
            for (unsigned short i_7 = 3; i_7 < 9; i_7 += 2) 
            {
                for (short i_8 = 3; i_8 < 7; i_8 += 4) 
                {
                    {
                        var_17 *= ((/* implicit */short) ((2989978468U) == (((/* implicit */unsigned int) 1397216527))));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 1; i_9 < 7; i_9 += 4) 
                        {
                            arr_32 [i_8] [(_Bool)1] [3LL] [i_7] [i_3 - 2] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_7] [i_9 + 2])) - (((/* implicit */int) var_2))));
                            arr_33 [i_3 + 1] [(_Bool)1] [(_Bool)1] [(signed char)5] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) (_Bool)1))))) ? (arr_8 [i_3] [i_8 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [2ULL] [(_Bool)1] [i_7 - 3] [i_9 - 1] [i_9])))));
                        }
                        var_18 = ((/* implicit */int) ((long long int) (~(((/* implicit */int) arr_11 [i_3])))));
                        var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4145431917495042897ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24830)))))) ? (arr_18 [i_8 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [9U])) & (((/* implicit */int) arr_23 [i_0] [i_0])))))));
                    }
                } 
            } 
            var_20 = arr_16 [i_3] [i_3 - 2] [i_0] [i_0];
        }
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                var_21 -= ((/* implicit */unsigned short) var_4);
                arr_40 [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_31 [i_11] [i_10] [i_11] [i_11] [i_0]))));
            }
            arr_41 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((~(arr_38 [i_0] [(short)2])))));
        }
    }
    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)44925))))), (((unsigned short) var_3)))))));
    /* LoopNest 2 */
    for (short i_12 = 3; i_12 < 12; i_12 += 2) 
    {
        for (int i_13 = 0; i_13 < 13; i_13 += 3) 
        {
            {
                arr_48 [i_13] = arr_47 [i_12];
                var_23 = ((/* implicit */signed char) ((unsigned char) arr_45 [i_12]));
            }
        } 
    } 
}
