/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28560
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
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_14 -= ((/* implicit */signed char) max((16257171650195327852ULL), (((/* implicit */unsigned long long int) (unsigned char)191))));
                    var_15 = ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) (short)-28215)))));
                    var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) (~(max((((/* implicit */int) var_9)), (-1609107168)))))), (((((/* implicit */_Bool) ((unsigned short) 18446744073709551610ULL))) ? (max((((/* implicit */long long int) (unsigned char)21)), (arr_0 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0]))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (unsigned char)180);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))) != ((~(((/* implicit */int) (short)-6188)))))))));
}
