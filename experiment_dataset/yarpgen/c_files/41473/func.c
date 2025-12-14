/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41473
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
    var_17 = ((/* implicit */int) (!((!(((/* implicit */_Bool) max(((short)7925), (((/* implicit */short) var_5)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(min(((-(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_6 [i_2]))))))));
                    var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)17854))));
                    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((~(1246795874))), ((+(((/* implicit */int) var_16))))))), ((-(max((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (short)5444))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (-((-(max((((/* implicit */long long int) (short)13404)), (var_7)))))));
    var_21 *= ((/* implicit */long long int) (!((_Bool)0)));
}
