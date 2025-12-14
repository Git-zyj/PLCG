/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48577
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(((long long int) (-2147483647 - 1))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [13] [i_0] = ((/* implicit */signed char) (~(0LL)));
                arr_5 [11ULL] [11ULL] [i_0 + 2] = var_0;
                var_17 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)0]))) : (-7061798342521687351LL))))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)162)))));
                arr_6 [(signed char)11] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2367858974U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25973)))))) ? (((/* implicit */long long int) arr_1 [i_1] [i_0 - 1])) : (((-6812007912236143775LL) ^ (((/* implicit */long long int) 3130731888U))))));
                arr_7 [i_0 + 1] [i_1 + 1] [i_0 + 1] = ((/* implicit */unsigned int) (-(arr_1 [3LL] [i_1])));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (short i_4 = 2; i_4 < 19; i_4 += 4) 
            {
                for (long long int i_5 = 1; i_5 < 20; i_5 += 3) 
                {
                    {
                        arr_17 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_16 [i_3] [i_3] [(unsigned short)18] [i_3] [i_3] [i_3]), ((-2147483647 - 1))))) ? (((/* implicit */long long int) ((var_0) / (((/* implicit */int) var_3))))) : ((-(-1668864277257847495LL)))))) | (((min((9691976566530008583ULL), (((/* implicit */unsigned long long int) arr_12 [i_2] [i_2] [i_2] [i_2])))) + (arr_9 [i_3])))));
                        arr_18 [i_5 - 1] = ((/* implicit */unsigned char) arr_11 [i_2] [(signed char)19] [i_4]);
                    }
                } 
            } 
        } 
        arr_19 [i_2] [i_2] = ((/* implicit */unsigned char) (-((~(arr_13 [i_2] [i_2] [i_2])))));
    }
    for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        arr_23 [i_6] = arr_1 [i_6] [i_6];
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (int i_8 = 1; i_8 < 14; i_8 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((unsigned int) (signed char)-64)))));
                    /* LoopNest 2 */
                    for (short i_9 = 2; i_9 < 15; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 2; i_10 < 15; i_10 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) var_9);
                                var_20 ^= ((/* implicit */long long int) (~(((0U) - (((/* implicit */unsigned int) -793070547))))));
                                var_21 = ((/* implicit */int) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_7])))));
                                arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) 456700330U);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)24)) ? (-1) : (-2009723892)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_30 [i_6] [i_7] [i_8 - 1] [i_8]))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_3 [5])) : (arr_12 [i_8 + 1] [i_8 + 2] [i_7] [6]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_8])))))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) (((-((-(-5078430000090042818LL))))) & (((/* implicit */long long int) ((/* implicit */int) ((short) arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
    }
}
