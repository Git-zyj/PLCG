/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43102
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_14 ^= ((/* implicit */unsigned long long int) arr_14 [i_2 + 1] [6] [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1]);
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (+(min((arr_13 [i_0] [8ULL] [i_2] [i_3] [i_3] [i_2 + 1] [i_0]), ((~(((/* implicit */int) (_Bool)1)))))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) (signed char)-1);
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (long long int i_6 = 1; i_6 < 14; i_6 += 2) 
                    {
                        for (int i_7 = 3; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) var_8);
                                var_18 += ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) ((1782033682393541499ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (arr_2 [i_0]))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_19 [i_7] [i_6 - 1] [i_0] [i_0] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [(short)4] [i_1] [i_1] [i_6] [i_0] [i_7])))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && ((_Bool)1)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    for (int i_11 = 1; i_11 < 13; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_11] [i_11 + 1] [i_11 + 3] [13ULL] [i_11 - 1] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_8] [i_8] [i_8] [(unsigned char)9]))) : (((var_10) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54439)))))))) ? (((((/* implicit */int) arr_35 [i_9] [i_11 + 3] [i_9] [i_9] [8LL] [i_10])) + (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_6)))))) : (((/* implicit */int) (unsigned char)33)))))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)33)))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -1084556184)) + (0ULL)));
            }
        } 
    } 
}
