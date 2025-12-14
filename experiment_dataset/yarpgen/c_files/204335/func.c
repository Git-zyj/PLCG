/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204335
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((short) var_12));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((unsigned int) arr_9 [i_0] [i_0] [i_2])))));
                        var_14 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
                        var_15 ^= ((/* implicit */unsigned int) ((int) var_5));
                    }
                    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))))))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_4])) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (unsigned char)0))));
                    }
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (unsigned char)62))));
                }
            } 
        } 
        var_19 ^= ((/* implicit */short) arr_9 [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    {
                        arr_24 [i_8] [i_7] [i_6] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_5] [i_7])) ? (((/* implicit */int) arr_5 [i_5] [i_8])) : (((/* implicit */int) var_3))));
                        arr_25 [i_5] [i_5] [i_5] [i_7] [i_8] &= 1981260485445050697ULL;
                        var_20 = arr_21 [i_6] [i_8];
                        arr_26 [i_5] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_5] [i_6])) ? (4248204909U) : (((/* implicit */unsigned int) var_12))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_0))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_5] [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_5] [i_5])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_3))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_6 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_9 + 1] [i_9 + 2]))))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5]))) : (arr_11 [i_5] [i_5] [i_5] [i_5]))))));
        var_26 *= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (5851763212040944222ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5])))));
    }
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (6741418521046490186ULL))))));
    var_28 = var_7;
}
