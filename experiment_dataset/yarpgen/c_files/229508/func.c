/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229508
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] |= ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */int) (unsigned char)72)), (((var_1) / (((/* implicit */int) (unsigned short)22978)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_16 [i_4] [1ULL] [i_2] [i_1] [i_0 + 2] = ((/* implicit */_Bool) var_3);
                                arr_17 [i_2] |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((arr_1 [i_1] [i_0]), (((/* implicit */int) ((signed char) arr_10 [i_0])))))), (max((((/* implicit */unsigned long long int) ((long long int) arr_10 [i_1]))), (((arr_0 [6ULL] [i_4]) << (((arr_5 [i_0] [i_3] [i_4]) - (5630842849573487030LL)))))))));
                                var_15 = var_14;
                                var_16 ^= ((/* implicit */_Bool) ((long long int) ((short) arr_5 [i_0] [i_3] [i_4])));
                            }
                        } 
                    } 
                    arr_18 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-126))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                var_17 -= ((/* implicit */long long int) arr_22 [(signed char)14]);
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5)) ? (arr_19 [i_6]) : (arr_19 [i_6 - 1])));
                var_19 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((int) arr_19 [i_5]))), (max((((/* implicit */long long int) (_Bool)1)), (-4547261918869878425LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5])) ? (arr_24 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) && (((/* implicit */_Bool) (+(var_0)))))))));
                arr_25 [i_5] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1652739438U)) ? (((/* implicit */unsigned long long int) 4547261918869878433LL)) : (8377245119034868325ULL)))) ? (min((((/* implicit */unsigned long long int) ((unsigned short) 2147483647))), (((unsigned long long int) arr_22 [18U])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (4547261918869878445LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5])))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) : (((arr_19 [i_6]) - (((/* implicit */unsigned long long int) var_2))))))));
                var_20 = ((/* implicit */int) ((unsigned int) ((unsigned short) arr_20 [i_6 - 1])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        for (signed char i_8 = 1; i_8 < 13; i_8 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) (+(4547261918869878462LL)));
                var_22 = ((/* implicit */unsigned int) ((arr_3 [i_7] [i_8]) ? ((~(arr_19 [i_8 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((4547261918869878445LL) < (((/* implicit */long long int) (+(var_7))))))))));
            }
        } 
    } 
}
