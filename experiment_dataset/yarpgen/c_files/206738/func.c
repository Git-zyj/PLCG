/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206738
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
    var_10 = var_6;
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) (unsigned char)54));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (_Bool)1))));
            var_12 = ((/* implicit */_Bool) ((unsigned int) var_4));
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((var_8) <= (var_9)));
            arr_7 [i_0] = ((/* implicit */unsigned char) -2613218225860703913LL);
        }
        for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_13 [i_0] [i_2] [i_3] &= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((((/* implicit */long long int) var_7)), (-2613218225860703897LL))))));
                arr_14 [i_0] [i_2] = ((/* implicit */signed char) var_6);
            }
            arr_15 [i_2] = ((/* implicit */signed char) max((var_9), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (var_3))))))));
            var_13 = ((/* implicit */unsigned char) var_0);
            var_14 = ((/* implicit */short) ((((/* implicit */int) max((var_1), (((/* implicit */short) var_5))))) <= (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_5))))));
            arr_16 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) max((((-2613218225860703897LL) <= (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((_Bool) var_5)))))));
        }
        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max((min(((~(var_0))), (((/* implicit */unsigned long long int) min(((short)-32), (((/* implicit */short) var_5))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-27052)), (max((2613218225860703897LL), (((/* implicit */long long int) var_5))))))))))));
            var_16 = ((/* implicit */signed char) ((unsigned char) ((long long int) min((var_0), (((/* implicit */unsigned long long int) var_9))))));
        }
        var_17 ^= ((/* implicit */unsigned long long int) max((min(((+(var_4))), (((/* implicit */long long int) max((var_1), (((/* implicit */short) (signed char)-62))))))), (((/* implicit */long long int) (_Bool)1))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
    {
        arr_25 [i_5] = ((((/* implicit */int) (unsigned char)29)) << (((var_3) - (2806683447U))));
        arr_26 [i_5] = ((/* implicit */int) var_4);
    }
}
