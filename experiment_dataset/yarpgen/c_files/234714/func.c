/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234714
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)-4311))) | (6215271750893043781LL)));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (11759736781429940258ULL)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_19 -= max(((unsigned short)18270), (arr_9 [18ULL] [18ULL] [i_2] [i_1] [i_0]));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (var_9)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((max((4961820475963461956ULL), (((/* implicit */unsigned long long int) (short)-32342)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-(2762416323U)))) : (-5626880521355930983LL)))))))));
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */unsigned long long int) (+(192661920442910688LL)));
    var_23 = ((/* implicit */int) min((((/* implicit */long long int) (((_Bool)0) ? ((+(((/* implicit */int) (short)-21208)))) : (((/* implicit */int) (unsigned short)18270))))), (max((((/* implicit */long long int) (unsigned char)2)), (var_6)))));
}
