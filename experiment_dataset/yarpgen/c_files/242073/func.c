/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242073
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */int) 1327397559U);
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-12513)) > (((/* implicit */int) (signed char)96)))) ? (var_17) : (((int) (unsigned short)1319))))) || (((/* implicit */_Bool) ((int) var_6)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 4294967295LL))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((var_10) & (((/* implicit */long long int) arr_3 [i_0 + 1] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) 267688573)) & (var_14))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) ((unsigned long long int) max(((signed char)-101), ((signed char)-120))));
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 21; i_6 += 2) 
                        {
                            {
                                arr_24 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)87)) ? (var_10) : (((/* implicit */long long int) var_16))));
                                arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 1ULL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) - (-267688573)));
}
