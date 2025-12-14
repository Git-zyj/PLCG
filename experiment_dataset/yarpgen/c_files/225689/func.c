/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225689
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
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_14 += ((((/* implicit */int) (unsigned short)43246)) == ((+(224178432))));
                                var_15 = ((/* implicit */_Bool) max((var_15), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_6 [i_0] [(short)8]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))) < (((/* implicit */int) ((((/* implicit */int) arr_10 [i_4] [i_3])) <= (-786014139)))))))) <= (min((((/* implicit */long long int) arr_10 [i_0] [i_0 - 1])), (-4109585303518212461LL)))))));
                                var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_0] [i_3] [i_2] [20] [i_0]))))) <= (((unsigned int) arr_12 [i_0] [i_4] [(signed char)4] [i_2] [(short)16] [i_0])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_5 = 2; i_5 < 22; i_5 += 2) 
                {
                    var_17 -= ((/* implicit */unsigned short) (+(((2305843009196916736ULL) >> (((((/* implicit */int) (unsigned short)22290)) - (22248)))))));
                    var_18 ^= (+((+(((((-1104853088) + (2147483647))) >> (((arr_11 [i_0 + 1] [i_0] [(unsigned short)19]) - (2593294397U))))))));
                }
                for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    var_19 = ((/* implicit */unsigned long long int) (unsigned short)22290);
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (short)-31098))));
                }
                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 1360521060U)) * (((10627554278225829024ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_6 [16U] [i_1])))) ? (((arr_11 [i_0 + 1] [i_1] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0]))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_0 [(_Bool)1]))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_13);
    var_23 = (+(max((max((var_6), (((/* implicit */long long int) (unsigned char)0)))), (((/* implicit */long long int) 3149624620U)))));
}
