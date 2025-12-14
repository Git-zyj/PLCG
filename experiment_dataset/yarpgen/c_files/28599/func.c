/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28599
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */int) arr_6 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 + 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))), (((/* implicit */int) ((((/* implicit */_Bool) 18170715224166525853ULL)) || (((/* implicit */_Bool) 0)))))));
                var_20 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) arr_2 [i_0 + 1])))))))) & ((-(var_11)))));
            }
        } 
    } 
    var_21 += ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            {
                var_22 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_10 [i_2] [i_3])))) ? (var_0) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                arr_13 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_15))));
                var_23 &= ((/* implicit */unsigned char) arr_2 [i_3]);
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_24 [i_2] [i_3] [i_4] [i_4] [i_2] = ((/* implicit */int) (((((~(arr_5 [i_2]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2])))))))) ? (((/* implicit */long long int) var_0)) : (arr_3 [i_2] [i_5 + 1])));
                                arr_25 [i_2] [i_3] [i_4] [i_5] [i_6] [i_2] [i_2] = ((/* implicit */long long int) (~(276028849543025763ULL)));
                            }
                        } 
                    } 
                    var_24 ^= ((min((((-1072290365) / (arr_23 [i_4] [i_4] [i_3] [i_3] [i_2]))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) ^ (((/* implicit */int) (signed char)88)));
                    var_25 ^= ((/* implicit */short) arr_16 [i_2] [i_3] [i_4] [i_4]);
                }
            }
        } 
    } 
}
