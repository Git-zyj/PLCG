/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48098
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
    var_17 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [(unsigned char)13] [i_4])) ? (min((8365620591416181809ULL), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1 - 1] [i_0] [i_4] [(short)15])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                                var_19 &= ((/* implicit */unsigned short) (unsigned char)13);
                                var_20 = ((/* implicit */_Bool) ((((7252102441784757314LL) ^ (arr_7 [(short)9] [(short)9] [i_2] [14LL] [i_2] [i_4]))) ^ (((/* implicit */long long int) var_4))));
                                var_21 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_6 [9LL] [12LL] [12LL] [i_0] [i_1 + 1])))) ^ ((~(((((/* implicit */_Bool) 10081123482293369808ULL)) ? (arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */int) var_16))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [i_1])))) != (-5019710924843494798LL)));
            }
        } 
    } 
}
