/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190047
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
    var_18 |= ((/* implicit */unsigned char) (+(-3285553545182564282LL)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1 - 2] = ((/* implicit */unsigned short) arr_1 [i_1 + 1]);
                arr_6 [23] = ((/* implicit */unsigned short) ((min(((-(0ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [1LL]))))))) - (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (short)9925)))))))));
                var_19 &= var_7;
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (int i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            {
                var_20 ^= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */unsigned long long int) arr_0 [i_2])) : (16046713506161532717ULL))) ^ (min((((/* implicit */unsigned long long int) arr_12 [(short)13] [i_3])), (arr_11 [i_2])))))) ? (((((/* implicit */_Bool) 255LL)) ? (arr_1 [i_3 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) arr_11 [i_2])))))));
                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (-5397748132017899432LL) : (((/* implicit */long long int) arr_10 [i_2] [i_2])))), (((/* implicit */long long int) arr_7 [i_3 + 1]))))) ? (((/* implicit */int) (short)-9261)) : (((/* implicit */int) var_4))));
            }
        } 
    } 
}
