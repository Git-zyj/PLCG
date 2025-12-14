/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243038
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
    var_18 = ((/* implicit */int) ((min((min((0ULL), (((/* implicit */unsigned long long int) (signed char)116)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_15)))))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16)))))));
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)0)), (var_14)));
    var_20 = var_6;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_21 ^= (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_4)) - (2669)))))));
                            var_22 *= ((/* implicit */long long int) ((unsigned short) (_Bool)1));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) : (var_15)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (var_8)))) ? (((/* implicit */unsigned int) var_7)) : (min((((/* implicit */unsigned int) (_Bool)1)), (var_8))))))));
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) min((((2988573970992782681LL) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_9))))))))));
            }
        } 
    } 
}
