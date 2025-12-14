/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236079
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */int) (unsigned short)40500)), (var_15))), (((/* implicit */int) arr_2 [i_2 + 2]))))) ? (((/* implicit */long long int) 1977847403)) : (max((min((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])), (arr_5 [i_0] [i_0] [i_2] [i_0]))), (((/* implicit */long long int) ((short) 18446744073709551615ULL)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_18 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35474)) ? (arr_5 [i_0] [6LL] [i_0] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33813)))))) ? (max((arr_5 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) -380906623)))) : (((((/* implicit */_Bool) arr_2 [16])) ? (5358684594138005365LL) : (((/* implicit */long long int) -1475243977)))))));
                                var_19 |= ((/* implicit */unsigned short) 9216413730847274985LL);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_2 + 1] = ((/* implicit */signed char) var_7);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (short)-22086))) ? (((((/* implicit */_Bool) min((arr_16 [i_5]), (((/* implicit */unsigned short) var_9))))) ? (arr_15 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23507))))) : (((/* implicit */long long int) var_4))));
        var_21 = ((/* implicit */int) arr_4 [i_5] [i_5] [i_5]);
    }
    for (int i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        var_22 += (~(((var_0) & (min((arr_17 [i_6]), (((/* implicit */int) var_5)))))));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            var_23 = ((int) ((long long int) 13899798703062796864ULL));
            arr_23 [i_7] = arr_15 [i_6] [i_7];
        }
        var_24 += ((/* implicit */long long int) min((max((arr_14 [i_6]), (((/* implicit */int) (unsigned short)36427)))), (((/* implicit */int) var_6))));
        var_25 = arr_19 [i_6] [(short)0] [i_6];
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 2) 
    {
        arr_26 [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_8 + 3]))));
        var_26 = ((/* implicit */int) var_8);
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (short)10233))));
    }
    var_28 = ((/* implicit */int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_9 = 3; i_9 < 17; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    {
                        arr_40 [i_9] [i_12] = ((/* implicit */long long int) arr_39 [i_9 - 1] [i_9 + 2] [i_9 - 3] [i_9 - 1] [i_9 - 2] [i_9 + 2]);
                        arr_41 [6ULL] [6ULL] [i_11] [i_11] [i_11] = ((/* implicit */int) (~(3438925867629396394LL)));
                    }
                } 
            } 
        } 
        arr_42 [i_9] = ((/* implicit */unsigned short) arr_32 [i_9]);
    }
    for (unsigned long long int i_13 = 2; i_13 < 15; i_13 += 4) 
    {
        arr_46 [i_13] [i_13] = ((/* implicit */unsigned long long int) var_2);
        arr_47 [i_13] = ((/* implicit */signed char) var_2);
        var_29 &= ((/* implicit */unsigned long long int) ((var_15) / ((+(((/* implicit */int) (unsigned short)24730))))));
    }
    var_30 = ((/* implicit */long long int) var_12);
}
