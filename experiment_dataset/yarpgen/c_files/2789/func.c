/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2789
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
    var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) -1197091209)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    var_19 -= max((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-85)), ((unsigned short)28672)))), (min((max((((/* implicit */int) var_1)), (var_17))), (var_11))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) 700768033515982501ULL)) ? (((/* implicit */int) var_1)) : (var_11)));
                        arr_10 [18ULL] = ((/* implicit */unsigned int) var_0);
                    }
                    for (int i_4 = 1; i_4 < 22; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */int) 5877149893734205811ULL);
                        arr_14 [i_2] [i_2] |= ((/* implicit */unsigned int) (short)15442);
                    }
                    var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 31457280U)) ? (((/* implicit */unsigned long long int) var_11)) : (5877149893734205811ULL)));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)32767)) : (2147483647))))));
                                var_24 = ((/* implicit */int) (signed char)-1);
                                arr_19 [i_0] [23] [i_0] [i_5] [i_6] &= ((/* implicit */long long int) 84476248210860183ULL);
                                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 1ULL)) ? (1125899906842623ULL) : (12747624091853153418ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (var_12) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))));
    }
    for (int i_7 = 1; i_7 < 21; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                {
                    var_26 = ((/* implicit */long long int) var_5);
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (0ULL) : (((/* implicit */unsigned long long int) 0LL))))) ? (((((/* implicit */_Bool) min((var_17), (var_17)))) ? (var_3) : (12747624091853153436ULL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (var_16) : (min((((/* implicit */unsigned long long int) var_14)), (7405646708884555736ULL)))))))));
                }
            } 
        } 
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_5))));
    }
    /* vectorizable */
    for (short i_10 = 2; i_10 < 9; i_10 += 2) 
    {
        arr_33 [5LL] = ((/* implicit */short) var_15);
        arr_34 [i_10] = ((/* implicit */unsigned long long int) (short)25192);
    }
}
