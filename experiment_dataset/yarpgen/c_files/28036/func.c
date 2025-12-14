/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28036
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9056)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)9053)))), (var_2)))) : (1441308319484596837ULL)));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((long long int) var_4)))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_13 [i_0] [i_0] [(_Bool)1] [i_3] [(unsigned short)2]))));
                                var_21 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) (unsigned char)79)) ? (var_6) : (((/* implicit */unsigned int) var_11)))))) >> (((((((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_0] [i_3] [i_3 - 2])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_5 [i_4] [i_4 + 1] [(short)5])))) - (-2147483638))) + (35)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_6);
}
