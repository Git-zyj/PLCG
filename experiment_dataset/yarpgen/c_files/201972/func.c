/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201972
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
    var_14 += ((/* implicit */int) var_6);
    var_15 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) ((signed char) min((((/* implicit */unsigned int) 2071940421)), (3856670462U))));
                            var_17 = ((/* implicit */signed char) ((_Bool) (~(((long long int) (unsigned char)135)))));
                        }
                    } 
                } 
                arr_10 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) : (((long long int) 0ULL))))) ? (((((/* implicit */_Bool) -9223372036854775798LL)) ? (arr_8 [i_1] [i_0 - 1]) : (arr_8 [i_1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_1)))))))));
            }
        } 
    } 
}
