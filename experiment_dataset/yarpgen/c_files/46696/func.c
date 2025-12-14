/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46696
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_3 [i_1 + 2]) && (((/* implicit */_Bool) (unsigned short)0)))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) (short)-2048);
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-28))))), (((short) ((((/* implicit */_Bool) (signed char)-120)) || (((/* implicit */_Bool) var_0)))))));
    var_15 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_11)), (((unsigned int) var_8)))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (-1LL)))) ? (511) : (((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((arr_11 [i_2] [i_2]), (((/* implicit */unsigned int) ((var_10) <= (((/* implicit */unsigned long long int) 1332126618U)))))))) <= (((((/* implicit */_Bool) ((-6387916992068157324LL) % (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [(short)17]))) % (arr_5 [i_2] [i_2])))) : (((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (4ULL)))))));
                var_17 -= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6025995177835339090ULL)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) (unsigned short)56478))))) | (((((/* implicit */_Bool) 4294967295U)) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
            }
        } 
    } 
}
