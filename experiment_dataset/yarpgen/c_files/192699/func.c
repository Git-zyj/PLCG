/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192699
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
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_16 *= ((/* implicit */short) var_6);
                    var_17 = 9U;
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) var_6);
                                var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_7 [i_0] [i_0 - 2] [i_0 + 2]), (arr_7 [i_0] [i_0 - 3] [i_0 - 2])))) << (((max((((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0 - 3])), (var_11))) - (2065766198)))));
                                var_19 = ((/* implicit */unsigned int) arr_5 [i_3] [i_3] [i_0 - 3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 3; i_5 < 9; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (short)-32755);
                            var_21 *= ((/* implicit */unsigned char) var_11);
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((short) var_6)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_9 = 1; i_9 < 11; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            arr_31 [i_6] [5U] [i_9 - 1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_25 [i_5 + 3] [i_5 + 1])), ((+(((((/* implicit */_Bool) arr_6 [(signed char)0] [(signed char)0] [i_9] [i_9])) ? (4227858432U) : (4227858432U)))))));
                            arr_32 [i_9 - 1] [i_6] [i_5] [i_9 + 1] = ((unsigned char) ((long long int) ((unsigned int) arr_27 [(signed char)8] [i_6] [i_6] [i_5])));
                            var_23 -= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) max((arr_20 [(unsigned short)0] [(unsigned char)0] [i_5] [i_5]), (((/* implicit */unsigned int) arr_30 [i_5 - 3] [3ULL] [i_9] [(unsigned char)11]))))), (((((/* implicit */_Bool) arr_10 [i_5] [11LL] [i_5])) ? (10733371004399900211ULL) : (((/* implicit */unsigned long long int) -8LL)))))) << (((67108871U) - (67108822U)))));
                            arr_33 [3U] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_15 [i_9 + 1] [i_5 - 1])), (var_1))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)253)) + (((/* implicit */int) (short)-27235)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) arr_15 [i_5] [i_5]);
                /* LoopNest 2 */
                for (unsigned short i_11 = 4; i_11 < 9; i_11 += 2) 
                {
                    for (unsigned char i_12 = 1; i_12 < 11; i_12 += 1) 
                    {
                        {
                            arr_39 [i_11] [i_6] |= ((/* implicit */signed char) arr_30 [i_5] [i_6] [i_5] [(_Bool)1]);
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_5))));
                            arr_40 [i_6] [i_6] [i_6] [3] [i_6] [i_6] = ((/* implicit */unsigned long long int) (((((+(((/* implicit */int) arr_26 [7U] [i_6] [i_11])))) + (2147483647))) << (((min((431802931), (((/* implicit */int) (_Bool)1)))) - (1)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
