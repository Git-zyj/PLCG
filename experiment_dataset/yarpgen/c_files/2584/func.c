/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2584
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */short) arr_7 [i_0] [i_0] [i_2]);
                    arr_8 [i_2] [i_1] = ((/* implicit */long long int) (signed char)-1);
                    var_11 = ((/* implicit */unsigned short) max((((long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))) : (262136ULL)))), (((/* implicit */long long int) var_5))));
                    arr_9 [i_0] [i_2] [i_0] = ((/* implicit */long long int) (+((-((-(var_2)))))));
                    var_12 = (short)-25119;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            {
                var_13 -= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_14 [i_3] [i_3])))) >> (((var_1) - (7599429106876525623LL)))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        {
                            var_14 = arr_14 [i_3 + 2] [i_3 - 1];
                            var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [8LL] [i_6])) / (((/* implicit */int) var_7))))) ? (((((/* implicit */unsigned long long int) -9124265372926900570LL)) * (arr_16 [14U] [14U] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */int) var_6)) : (-1139057849)))))) : (((/* implicit */unsigned long long int) (~(arr_21 [i_3 + 2] [i_3 + 2] [(unsigned short)4] [i_3 + 1] [i_3 + 1]))))));
                            var_16 = ((/* implicit */int) arr_15 [i_3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_9 = 1; i_9 < 21; i_9 += 1) 
                            {
                                var_17 = ((/* implicit */unsigned char) (+(((unsigned long long int) arr_16 [i_7] [i_3 + 2] [i_9 + 3]))));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) -655034599))));
                            }
                            var_19 -= ((/* implicit */unsigned int) (signed char)14);
                        }
                    } 
                } 
            }
        } 
    } 
}
