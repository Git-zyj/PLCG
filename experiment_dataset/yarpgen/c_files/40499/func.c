/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40499
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        {
                            arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (-2147483647 - 1);
                            arr_14 [i_4] [i_3] [i_2] [i_1 - 1] [i_0 - 2] = ((/* implicit */unsigned short) arr_8 [i_0]);
                        }
                    } 
                } 
            } 
            arr_15 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
        }
        for (unsigned short i_5 = 2; i_5 < 19; i_5 += 4) /* same iter space */
        {
            arr_19 [i_5 - 1] = ((((var_1) >= (((var_5) + (((/* implicit */long long int) var_2)))))) ? (arr_7 [i_5 + 1] [i_5 + 1] [i_0] [i_0 - 2]) : (var_5));
            arr_20 [i_5] [i_0] = ((/* implicit */signed char) ((unsigned short) var_4));
        }
        arr_21 [i_0] [i_0 - 1] = ((/* implicit */signed char) ((long long int) ((int) (short)-23077)));
    }
    var_12 = ((/* implicit */long long int) ((int) (((+((-9223372036854775807LL - 1LL)))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) > (var_3))))))));
    var_13 = ((/* implicit */long long int) -2147483620);
}
