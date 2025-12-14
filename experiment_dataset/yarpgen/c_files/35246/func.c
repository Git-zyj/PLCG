/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35246
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) 9216323760779969201ULL);
                arr_6 [i_1] [i_1] = var_11;
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) 9216323760779969201ULL))))), (((((/* implicit */_Bool) var_13)) ? (950840303) : (((/* implicit */int) (_Bool)1))))));
                            var_19 |= ((/* implicit */unsigned int) arr_10 [i_1] [(unsigned short)10] [i_2]);
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */long long int) (((+(max((-950840274), (((/* implicit */int) var_16)))))) >> (((var_9) - (1432855783)))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((-950840273) | (950840303)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_13), (((/* implicit */short) var_1)))))) : (((var_8) >> (((((/* implicit */int) var_3)) - (52205)))))))));
    var_22 = ((/* implicit */_Bool) var_15);
}
