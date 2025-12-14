/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243650
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
    for (short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_6 [(_Bool)1] [i_1] [9] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */short) var_6);
                        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) -1))));
                        arr_10 [i_0] [i_0] [15] [i_3 - 3] = ((/* implicit */unsigned char) ((_Bool) ((long long int) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) (short)1355))))));
                        var_13 = ((/* implicit */_Bool) var_0);
                    }
                    for (short i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((unsigned long long int) var_2));
                        var_15 = ((/* implicit */short) (+(((int) arr_1 [i_0]))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_6 = 4; i_6 < 17; i_6 += 3) 
        {
            var_16 ^= ((/* implicit */long long int) ((arr_13 [i_6 - 1] [i_6 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6 - 1] [i_6])))));
            var_17 = ((/* implicit */_Bool) ((arr_15 [i_5] [i_6 + 1]) ? (arr_13 [(signed char)17] [i_6 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6] [i_6 - 2])))));
        }
        /* vectorizable */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_18 -= ((signed char) (~(((/* implicit */int) arr_15 [i_5] [i_5]))));
            var_19 = ((/* implicit */_Bool) (+(var_0)));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_20 -= ((/* implicit */_Bool) (~(18446744073709551585ULL)));
                        arr_24 [i_5] [14ULL] [i_9] = ((/* implicit */unsigned int) ((arr_20 [i_8 + 4] [i_7 - 1] [i_8]) ? ((+(((/* implicit */int) var_2)))) : ((-(((/* implicit */int) var_5))))));
                    }
                } 
            } 
        }
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_21 &= ((/* implicit */unsigned int) min(((((+(18446744073709551585ULL))) * (max((30ULL), (((/* implicit */unsigned long long int) arr_26 [i_10 - 1] [i_5] [i_5])))))), (max((((((/* implicit */_Bool) var_10)) ? (14045476602080335414ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((signed char) 31ULL)))))));
            var_22 = ((((/* implicit */long long int) ((/* implicit */int) max(((short)-30247), (((/* implicit */short) (unsigned char)3)))))) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? (((arr_26 [i_5] [i_10] [(signed char)4]) + (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_10]))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)32329), ((unsigned short)2047))))))));
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                arr_30 [i_11] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (_Bool)1)), (1725960666U)));
                arr_31 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) arr_29 [i_10] [5LL] [i_10 - 1] [i_5])))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)1347)), ((unsigned short)2027))))));
                arr_32 [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (+(var_1))))) || (((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5] [3U]))));
            }
        }
        arr_33 [i_5] = ((/* implicit */unsigned int) arr_15 [i_5] [i_5]);
    }
    for (unsigned int i_12 = 3; i_12 < 19; i_12 += 1) 
    {
        arr_37 [i_12 - 2] [i_12] = ((/* implicit */signed char) (short)30236);
        var_23 = ((/* implicit */unsigned int) (+(((unsigned long long int) 140737354137600ULL))));
    }
}
