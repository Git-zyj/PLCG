/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195462
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
    var_15 = ((/* implicit */unsigned long long int) var_11);
    var_16 -= ((/* implicit */long long int) ((((/* implicit */int) var_4)) > (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_8))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                {
                    var_17 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 17364652015880806796ULL)) ? (((long long int) 281773468)) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) / (((/* implicit */long long int) max((0U), (1129399259U))))));
                    var_18 = ((/* implicit */unsigned char) arr_7 [i_0 + 3] [i_1] [i_0 + 3] [i_1]);
                    var_19 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                    var_20 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_11)) & (9058343815197014770ULL))), (((/* implicit */unsigned long long int) (~(var_11)))))))));
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */short) var_9);
}
