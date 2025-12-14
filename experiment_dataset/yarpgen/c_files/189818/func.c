/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189818
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
    var_20 = var_15;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) > (2046837226)));
        var_21 = ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) -1531382958482642697LL)));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_1 [i_0]))));
        arr_4 [i_0] = ((/* implicit */int) ((arr_2 [i_0]) > (arr_2 [i_0])));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_1] [i_1])), (arr_6 [i_1])))) > (-2510278669087779603LL)));
        var_23 &= (~(2510278669087779602LL));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_10 [i_2] [(unsigned char)4] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_9 [14ULL])), (arr_5 [i_2] [i_2])))) % (max((arr_8 [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_1]))))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_24 = ((/* implicit */int) min((min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49598))) ^ (2510278669087779602LL))), (max((((/* implicit */long long int) arr_15 [i_1] [i_2] [i_3] [i_4])), (arr_13 [i_2] [i_4]))))), (((/* implicit */long long int) (~(arr_12 [i_1]))))));
                        var_25 = ((/* implicit */unsigned long long int) -2510278669087779603LL);
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */short) min((var_26), ((short)-18)));
        var_27 = ((/* implicit */long long int) ((15ULL) / (((/* implicit */unsigned long long int) (~(arr_2 [i_1]))))));
    }
    var_28 |= ((/* implicit */int) 4887498346276844590ULL);
}
