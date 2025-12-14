/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225454
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_6))));
                            var_14 = ((/* implicit */int) arr_0 [i_2]);
                            arr_12 [i_1] [(short)1] [i_1] [(short)1] [(short)1] = ((/* implicit */long long int) (~(((var_5) ? (var_7) : (((/* implicit */unsigned long long int) var_2))))));
                        }
                    } 
                } 
                arr_13 [2LL] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) (unsigned char)241))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) <= (((((/* implicit */_Bool) min(((unsigned char)176), ((unsigned char)80)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176))) : (var_11)))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (unsigned char)3))));
                            arr_20 [i_0] [i_5] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_10))) % (((/* implicit */int) var_12))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((var_2) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((var_0) ^ (var_2)))) : (var_3)));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) && (arr_5 [i_1] [i_5] [i_6])));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (!(var_9))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (((((/* implicit */_Bool) (unsigned char)252)) ? (var_6) : (var_11))))), (var_11)));
    var_21 = ((/* implicit */long long int) var_7);
    var_22 ^= ((/* implicit */unsigned char) ((var_7) < (min((((/* implicit */unsigned long long int) (+(var_1)))), (((var_11) / (((/* implicit */unsigned long long int) var_10))))))));
}
