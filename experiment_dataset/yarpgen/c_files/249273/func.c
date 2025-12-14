/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249273
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
    var_19 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (((!(((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) var_18)))))) ? (((/* implicit */int) min((arr_1 [i_1] [i_2]), (arr_1 [i_1] [i_0])))) : (min(((~(((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) arr_5 [(signed char)16] [(signed char)3])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_0] [(short)12] [i_0] = ((/* implicit */short) var_16);
                                var_21 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)28))) | (arr_4 [i_0] [i_1])))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_6)) >> (((((/* implicit */int) (signed char)-1)) + (19))))))));
                                var_22 |= min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_4 [i_2] [i_3]))) : (((/* implicit */long long int) min((873326893U), (((/* implicit */unsigned int) (short)-32431))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [10U] [(short)4] [(short)4] = ((/* implicit */int) arr_2 [i_0]);
                    arr_14 [12ULL] = ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
                    var_23 *= ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) (short)9894))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 2; i_6 < 22; i_6 += 4) 
        {
            {
                var_24 = ((/* implicit */signed char) (~(35765244U)));
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (+(((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) arr_19 [i_5 - 1])) - (149))))))))));
            }
        } 
    } 
}
