/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42031
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
    var_19 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) * (var_1)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (short)21456);
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((18446744071562067968ULL) + (((/* implicit */unsigned long long int) (((~(-20LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [(short)16] [i_1] [(short)16]) > (((/* implicit */long long int) ((/* implicit */int) (short)21475)))))))))))))));
                var_22 = ((/* implicit */long long int) (short)-21472);
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) * (var_4)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            {
                arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | (((((arr_6 [i_3]) & (arr_6 [(unsigned char)17]))) ^ (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)21472)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (18446744073709551612ULL)));
            }
        } 
    } 
}
