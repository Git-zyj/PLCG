/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215215
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
    var_16 |= ((/* implicit */unsigned long long int) (unsigned short)42688);
    var_17 = ((/* implicit */unsigned short) ((var_2) < (((((/* implicit */_Bool) ((long long int) 930267221))) ? (((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (unsigned short)2942)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) var_3))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned short) (unsigned char)187)), ((unsigned short)3))))) ? (((((/* implicit */int) max(((unsigned char)183), (((/* implicit */unsigned char) (signed char)86))))) & ((~(var_8))))) : (((int) max((((/* implicit */unsigned short) arr_4 [7ULL] [i_0] [7ULL])), (arr_8 [i_0]))))));
                    var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((1482367731) % (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [11ULL])))))) : (((unsigned long long int) (unsigned char)92))))));
                }
            } 
        } 
    } 
}
