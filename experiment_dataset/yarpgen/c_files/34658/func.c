/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34658
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min(((-(var_2))), (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118))) * (185128451U))), (((unsigned int) (signed char)-10))))))))));
                var_21 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((((/* implicit */int) arr_0 [i_0] [(_Bool)1])) >= (((/* implicit */int) var_5)))))))));
                var_22 = var_3;
                var_23 |= ((/* implicit */_Bool) (~(((/* implicit */int) max((((_Bool) var_10)), (var_14))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) var_14);
                            var_25 = ((/* implicit */unsigned char) ((17743424946764601435ULL) % (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) var_4)) + (var_19)))))));
                            var_26 = ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */int) max((((_Bool) (signed char)36)), (var_14)))) << (((((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1)))))) + (4245532679866485474LL))))))));
            }
        } 
    } 
}
