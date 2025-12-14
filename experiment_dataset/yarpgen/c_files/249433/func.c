/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249433
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
    var_14 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((int) var_6))) % (min((var_6), (((/* implicit */unsigned int) (unsigned short)60823)))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)73)), ((unsigned char)97))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_15 -= ((/* implicit */unsigned int) max((((((unsigned int) 4131813324U)) != (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), ((!(((/* implicit */_Bool) max((8924650083286451371LL), (((/* implicit */long long int) (unsigned char)151)))))))));
                    var_16 = var_10;
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_0] [i_2]))));
                    var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (_Bool)1)), (-8924650083286451382LL)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) var_8);
    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) - (2147483647)));
}
