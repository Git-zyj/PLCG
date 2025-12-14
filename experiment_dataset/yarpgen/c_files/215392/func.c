/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215392
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0]))))))) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((16383ULL) <= (16383ULL))))) : (-5464485800050000518LL)))));
                var_15 ^= ((/* implicit */unsigned int) ((long long int) ((var_0) & (((/* implicit */unsigned long long int) var_7)))));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(_Bool)1]))) : (min((((long long int) (signed char)127)), (((/* implicit */long long int) arr_2 [2ULL])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 3) 
        {
            {
                arr_12 [7ULL] [i_3] [12] = ((/* implicit */short) var_11);
                arr_13 [i_3] = ((/* implicit */unsigned long long int) arr_3 [i_2] [i_2]);
                var_17 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_2 [i_2])) ? (939775285994150842ULL) : (((/* implicit */unsigned long long int) (~(var_8))))))));
                var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2116))) : (0U)));
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((((/* implicit */long long int) (short)0)), (6434551094787088372LL)));
}
