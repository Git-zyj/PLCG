/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245014
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned int) 10ULL);
                    var_14 = ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) (unsigned char)138))))) & (var_4))) & (((/* implicit */unsigned long long int) arr_7 [(signed char)6])));
                    arr_11 [i_1] = ((/* implicit */int) var_9);
                    var_15 = ((/* implicit */short) ((unsigned char) ((arr_6 [i_0] [i_1] [i_2]) ^ (((/* implicit */int) var_11)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((min((var_7), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47038))) : (var_9)))))))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            var_17 |= ((/* implicit */long long int) ((min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)112))))), (((((/* implicit */int) (signed char)14)) ^ (((/* implicit */int) arr_13 [(_Bool)1])))))) > (((/* implicit */int) arr_19 [i_3] [i_4] [14] [i_6]))));
                            arr_22 [i_5] = ((/* implicit */unsigned int) var_7);
                        }
                    } 
                } 
                var_18 = arr_20 [i_4] [i_4] [i_3] [i_3];
            }
        } 
    } 
    var_19 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
}
