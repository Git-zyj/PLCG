/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212187
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
    var_15 = ((/* implicit */unsigned int) var_14);
    var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) var_12))))) ? ((((_Bool)1) ? (((/* implicit */long long int) 152825141)) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min(((~(((/* implicit */int) (short)-4334)))), (((/* implicit */int) ((unsigned short) (unsigned short)42254))))))));
        var_19 = ((/* implicit */unsigned int) var_4);
    }
    for (unsigned int i_1 = 3; i_1 < 16; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        arr_12 [i_1] [i_2] |= ((/* implicit */int) var_4);
                        var_20 |= ((/* implicit */short) max((((/* implicit */long long int) (unsigned short)23288)), (arr_0 [i_2])));
                    }
                } 
            } 
        } 
        arr_13 [i_1] [i_1] = ((_Bool) ((var_10) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1])))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), ((-(var_13)))))) ? (var_13) : (var_13)));
}
