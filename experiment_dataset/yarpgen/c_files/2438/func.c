/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2438
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
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */int) var_11)), (min((((/* implicit */int) (!(((/* implicit */_Bool) 18120376009693620114ULL))))), ((-(((/* implicit */int) var_4))))))));
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_10)), (18120376009693620114ULL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) ((unsigned long long int) ((((((/* implicit */_Bool) 18120376009693620134ULL)) ? (((/* implicit */int) (short)-14439)) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0])))) / (((/* implicit */int) arr_1 [i_0] [i_0 + 1])))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_15 = ((((/* implicit */int) (unsigned short)65472)) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 3]))))));
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-78);
        }
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            arr_7 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)14461))));
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-14439)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14442))) : (-5672852508746918325LL)));
            var_16 = ((/* implicit */int) arr_3 [i_0 + 2]);
        }
        /* vectorizable */
        for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) arr_16 [i_0 - 4] [i_0 - 4] [i_4] [i_0 - 2] [i_3 - 1]);
                            var_18 -= ((/* implicit */unsigned long long int) (~(-5672852508746918311LL)));
                            arr_21 [i_0] [i_0] [i_4] [i_5] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_6]))));
                        }
                    } 
                } 
                var_19 -= ((/* implicit */unsigned short) ((unsigned char) (short)480));
                var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0 - 1]))));
            }
            for (short i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                arr_24 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_9 [i_0 - 3]))));
                arr_25 [i_0] [i_3 + 1] [i_7] [i_7] = ((/* implicit */short) (~(((/* implicit */int) (short)12))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (-(326368064015931501ULL))))));
            }
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (-((-(2641343255U))))))));
            var_23 = ((/* implicit */unsigned char) var_8);
            /* LoopSeq 1 */
            for (short i_8 = 1; i_8 < 19; i_8 += 3) 
            {
                var_24 = ((/* implicit */int) (+(-5672852508746918312LL)));
                var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-14454))) / (((((/* implicit */_Bool) -6402006406339077726LL)) ? (((/* implicit */long long int) arr_16 [i_0] [i_0 - 3] [12] [i_3] [i_0 - 3])) : (-5672852508746918325LL)))));
            }
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        {
                            arr_38 [(unsigned char)4] [i_11] [3] [i_11] [i_0] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned long long int) arr_33 [i_0 + 2] [i_9 - 2] [i_9] [i_10] [i_3 + 1])) : (326368064015931490ULL)));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (1744159427U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_3 + 1])))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [i_3] [i_9]))) : (5672852508746918315LL))))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) -3415060676013479143LL))));
                        }
                    } 
                } 
            } 
        }
    }
}
