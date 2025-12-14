/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218697
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_2))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (short)30548)) ? (((var_7) << (((((/* implicit */int) (short)-30558)) + (30572))))) : (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_15 &= ((/* implicit */int) arr_1 [i_0] [(unsigned char)12]);
        var_16 += ((/* implicit */int) min(((short)30556), ((short)-21955)));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */int) ((unsigned char) ((arr_3 [i_1]) - (((/* implicit */unsigned long long int) -1126737376)))));
        var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (short)30561)) & (((/* implicit */int) (short)-30548)))))) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-30544))))) < (arr_3 [i_1]))))));
        var_18 = ((/* implicit */int) (short)-13549);
    }
    for (int i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-30544))) != (-7428134043635188535LL)));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)23471))) * (((((2835272514846045341LL) >> (((-7428134043635188535LL) + (7428134043635188555LL))))) ^ (((/* implicit */long long int) 255922131))))));
        var_19 = ((/* implicit */short) ((long long int) (~(((/* implicit */int) arr_6 [i_2])))));
    }
}
