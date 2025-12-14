/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40922
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
    var_18 = (!(((/* implicit */_Bool) var_5)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((unsigned long long int) (~(var_10))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) ((unsigned long long int) var_7));
                        arr_14 [i_4] [i_3] [i_3 - 2] [i_3] [(signed char)14] = ((/* implicit */unsigned int) ((long long int) ((signed char) arr_5 [i_2])));
                    }
                } 
            } 
            var_21 *= ((/* implicit */unsigned int) ((signed char) (short)-16643));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    {
                        var_22 -= ((/* implicit */short) ((unsigned int) var_1));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_1] [i_1])))))));
                    }
                } 
            } 
        }
        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)992))));
            var_25 &= ((/* implicit */unsigned long long int) (~(arr_5 [i_1])));
            arr_24 [i_1] [12] [i_1] &= ((/* implicit */unsigned long long int) ((signed char) var_11));
        }
        var_26 = ((/* implicit */short) (~(((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1]))));
        arr_25 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -9223372036854775785LL))));
    }
    var_27 &= ((/* implicit */signed char) var_3);
}
