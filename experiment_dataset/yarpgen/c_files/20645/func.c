/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20645
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
    var_17 = ((/* implicit */short) (-(((/* implicit */int) max((min((((/* implicit */short) var_15)), ((short)-4307))), (((/* implicit */short) var_1)))))));
    var_18 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)72))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_19 = (~(max((((/* implicit */unsigned long long int) 0U)), (arr_10 [i_4] [i_1] [i_1] [i_1 + 2] [i_1] [i_0 + 1]))));
                                arr_13 [i_3] [i_1] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (short)24767)) + (((/* implicit */int) (unsigned short)14509))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((((/* implicit */long long int) ((/* implicit */int) (((-(4294967285U))) > (((/* implicit */unsigned int) -1221794638)))))) + (-3257247390099978048LL));
                var_21 = ((/* implicit */unsigned short) max(((~(3712229180290890660LL))), (min((21LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-124)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) 4294967295U))));
    var_23 += ((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_15))));
}
