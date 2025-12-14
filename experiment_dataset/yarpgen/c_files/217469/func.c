/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217469
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_6))));
                    arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) var_3);
                }
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    var_16 = ((/* implicit */signed char) (-((~(min((((/* implicit */unsigned long long int) var_11)), (var_9)))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */signed char) var_9);
                    arr_10 [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (-4539289540335639148LL))) : ((+(arr_5 [i_0] [i_0] [i_3] [i_1])))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(6872660576317166499ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-25))) <= (arr_5 [i_0] [i_1] [i_1] [i_3]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_4] [i_4] [i_6] = ((/* implicit */signed char) var_2);
                                var_18 = ((/* implicit */short) min((var_18), ((short)10052)));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */unsigned int) (short)24);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) max((var_20), ((+(((/* implicit */int) (_Bool)1))))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-21)) || (((/* implicit */_Bool) (signed char)-8))));
                            }
                        } 
                    } 
                }
                arr_28 [i_0] [i_1] = ((/* implicit */short) arr_26 [i_1] [i_0] [i_0] [i_0] [i_1] [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    for (short i_10 = 2; i_10 < 8; i_10 += 1) 
                    {
                        {
                            arr_34 [i_0] [i_1] [i_9] [i_10] = ((/* implicit */unsigned long long int) var_13);
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (-(var_0))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_19 [i_0] [i_0] [i_1] [i_9] [i_10 + 2]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 17; i_11 += 2) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    for (unsigned short i_14 = 1; i_14 < 16; i_14 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */int) arr_44 [i_11] [i_12] [i_12] [i_13] [i_14 + 1] [i_14]);
                            var_25 ^= ((/* implicit */short) ((long long int) ((((/* implicit */int) (short)-25)) != (((/* implicit */int) (signed char)80)))));
                        }
                    } 
                } 
                arr_45 [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (short)30239))))), (var_4)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11] [i_12])))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))));
    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2871296508U)) ? (6872660576317166499ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)33))))))));
}
