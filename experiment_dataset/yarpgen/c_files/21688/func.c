/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21688
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = min(((+(7406249305569989420LL))), (((/* implicit */long long int) min(((~(((/* implicit */int) var_1)))), (1)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) 18446744073709551611ULL);
                    var_11 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21513))) : (((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) : (2047LL))));
                    arr_10 [i_2] = ((/* implicit */_Bool) (-(-3357285383907958198LL)));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        arr_14 [i_0] [i_2] [i_3] [i_3 - 1] = ((/* implicit */signed char) (unsigned short)19769);
                        arr_15 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)65521);
                    }
                }
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((unsigned long long int) -2048LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10))))));
    var_13 = ((/* implicit */unsigned long long int) var_8);
    var_14 = ((/* implicit */_Bool) var_0);
}
