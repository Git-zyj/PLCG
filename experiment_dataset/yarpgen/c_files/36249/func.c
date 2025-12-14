/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36249
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) (~((+(max((0LL), (((/* implicit */long long int) (unsigned char)162))))))));
                var_12 = ((/* implicit */int) (short)22875);
                arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))) | (((/* implicit */int) ((4294967295U) >= (3559404730U))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 9; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            {
                arr_13 [i_2 - 1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max(((short)0), ((short)-19)))) ^ ((~(((/* implicit */int) (short)-1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (3048146112U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76)))))) ? (((((/* implicit */_Bool) 4418196109635716912ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54127))) : (0LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)9))))) : (max((((long long int) 3337520805U)), (((/* implicit */long long int) min(((signed char)-41), (((/* implicit */signed char) (_Bool)1)))))))));
                arr_14 [i_2] = -1953409758132511953LL;
            }
        } 
    } 
}
