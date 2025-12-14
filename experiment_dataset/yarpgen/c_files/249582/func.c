/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249582
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
    var_20 ^= ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) (_Bool)1);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (var_14) : (3777237908745192982ULL)));
                    arr_10 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) max(((+(min((var_13), (var_13))))), (((/* implicit */long long int) (_Bool)1))));
                    arr_11 [i_0] [i_0] [(unsigned char)2] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_22 = ((/* implicit */long long int) max((var_22), ((+(((long long int) var_17))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        {
                            arr_17 [i_3] [i_0] [i_3] [5] = ((/* implicit */unsigned long long int) var_19);
                            var_23 += ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (1685346213604422986ULL)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)58))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) 3777237908745192960ULL)) && (((/* implicit */_Bool) 3777237908745192966ULL))));
                            arr_25 [i_0] [i_1] [9ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)58))));
                        }
                    } 
                } 
            }
        } 
    } 
}
