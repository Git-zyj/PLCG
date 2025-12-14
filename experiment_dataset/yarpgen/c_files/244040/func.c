/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244040
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) 805306368)) : (((((/* implicit */_Bool) ((var_7) + (805306368)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((+(18U))))))))));
                    var_14 = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            {
                var_15 |= ((/* implicit */signed char) (-(((int) (-(4294967278U))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_0))));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_6 [0LL] [i_4] [i_5])), (var_9)))) ? (((var_3) << (((var_3) - (4209574314272388379LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4))))));
                        }
                    } 
                } 
                arr_16 [i_3] [i_4] [i_4] |= ((/* implicit */_Bool) var_3);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 1; i_7 < 8; i_7 += 2) 
    {
        for (long long int i_8 = 1; i_8 < 10; i_8 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_7 [i_7 - 1]))), (max((((/* implicit */unsigned long long int) max((805306368), (((/* implicit */int) (signed char)-30))))), (((unsigned long long int) var_2)))))))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (int i_10 = 1; i_10 < 9; i_10 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) var_6))) - (var_4)))));
                            var_20 ^= ((/* implicit */unsigned char) arr_6 [i_7 + 1] [(signed char)8] [i_9]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
    {
        for (int i_12 = 1; i_12 < 13; i_12 += 3) 
        {
            {
                var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_4 [i_11])))) - (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) (~(min((var_5), (((/* implicit */int) arr_3 [i_11] [(_Bool)1] [i_12]))))))) : (max((var_3), (((/* implicit */long long int) arr_27 [i_11]))))));
                var_22 &= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            }
        } 
    } 
}
