/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223539
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_1] = ((/* implicit */signed char) arr_2 [i_0] [i_1]);
                    arr_8 [(short)3] [i_1] [i_2] = ((/* implicit */unsigned int) var_7);
                    var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_1 [i_1] [i_1 - 1])) ? (var_13) : (((/* implicit */int) arr_1 [i_1] [i_1 + 2]))))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(arr_3 [i_0] [i_0] [i_1]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) 942844773320380717LL)) ? (((/* implicit */int) (short)-24261)) : (((/* implicit */int) arr_1 [i_2] [i_1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((arr_2 [i_2] [i_2]), (((/* implicit */long long int) arr_0 [i_0]))))))) : (var_4)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) max((var_1), (((/* implicit */unsigned int) ((var_13) & (((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))))))));
    var_19 ^= ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_15)) : (6512850609819370170LL)))), (((((/* implicit */_Bool) 65536)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))) : (494818370323299824ULL)))))));
    var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((signed char) max((var_5), (((/* implicit */unsigned long long int) 268434944LL)))))), (18446744073709551615ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            {
                arr_17 [i_3] = ((/* implicit */signed char) (-(arr_14 [i_3])));
                var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((17U) * (((/* implicit */unsigned int) arr_9 [(signed char)20]))))) ? (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned long long int) 13U)) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_12 [(_Bool)1]))))))) ? (((int) ((((/* implicit */_Bool) arr_14 [16LL])) ? (((/* implicit */unsigned long long int) 4294967270U)) : (var_9)))) : (((/* implicit */int) arr_10 [i_3]))));
            }
        } 
    } 
}
