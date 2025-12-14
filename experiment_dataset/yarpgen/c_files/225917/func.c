/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225917
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
    var_10 = ((/* implicit */long long int) (-(((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])), (0)))), ((-(5490329062522897441ULL)))));
                                arr_15 [i_0] [i_1] [1ULL] [i_0] [(_Bool)1] = ((/* implicit */long long int) var_3);
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_3])) ? (3937169585457012878LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_3] [i_0])))))) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2 - 1] [i_2 - 2])))), (((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_3])) ? ((-(arr_10 [i_0] [i_0]))) : (((/* implicit */int) ((var_9) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                            }
                        } 
                    } 
                } 
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_3))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((1023238961040038330ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
