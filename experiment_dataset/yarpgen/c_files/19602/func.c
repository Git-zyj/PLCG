/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19602
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_16 [(_Bool)1] [i_0] [i_1 + 1] [i_2] [i_3] [(short)6] [i_4] |= ((/* implicit */_Bool) -2144908159492617248LL);
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((arr_7 [i_0] [i_3]) ? (2578864786138228395ULL) : (arr_4 [i_3] [i_0]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (var_16))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] |= ((/* implicit */_Bool) var_6);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (long long int i_8 = 3; i_8 < 11; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(7070580897103171819LL))))));
                                var_21 = ((/* implicit */_Bool) (~(var_11)));
                                arr_30 [i_5] = (~(((((/* implicit */_Bool) arr_26 [(_Bool)1] [i_6] [i_8 - 1] [i_8 - 2] [i_8] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        {
                            var_22 ^= ((/* implicit */long long int) ((unsigned short) 2144908159492617247LL));
                            arr_35 [i_5] [i_6] [i_5] [i_11] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)55865)) << (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_33 [i_5] [i_6] [i_10] [i_10] [i_11]))) - (93ULL)))))) & ((+((~(var_9)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                    {
                        for (short i_14 = 1; i_14 < 11; i_14 += 3) 
                        {
                            {
                                arr_44 [i_5] [i_13] [i_12] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) -2144908159492617248LL)) ? (min((max((var_0), (((/* implicit */unsigned long long int) var_16)))), ((((_Bool)1) ? (arr_14 [i_5] [i_5] [i_12] [i_13] [i_14]) : (((/* implicit */unsigned long long int) -2144908159492617272LL)))))) : (var_9)));
                                arr_45 [i_5] [i_5] [i_5] [2] [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) arr_52 [i_5] [i_6] [i_5]);
                            var_24 = ((/* implicit */unsigned short) var_16);
                            var_25 ^= ((/* implicit */short) var_3);
                        }
                    } 
                } 
                arr_53 [i_5] [i_6] = (~(var_15));
            }
        } 
    } 
}
