/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50967
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
    var_14 -= ((/* implicit */short) (((+(((((/* implicit */int) var_3)) - (((/* implicit */int) var_0)))))) - (((/* implicit */int) ((unsigned short) ((int) var_1))))));
    var_15 = ((/* implicit */unsigned int) ((((max((var_1), (((/* implicit */unsigned long long int) var_13)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_3), (var_12)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((unsigned int) arr_0 [i_1 + 2] [i_1 + 1])))));
                        var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)58421)) % (((/* implicit */int) arr_0 [i_1 + 1] [i_1]))))));
                        var_18 = ((max((((/* implicit */unsigned long long int) 406170166)), (1997347855540201753ULL))) << (((((unsigned long long int) 1997347855540201753ULL)) - (1997347855540201702ULL))));
                        var_19 = ((/* implicit */short) (+((+(((/* implicit */int) max((arr_6 [i_1]), (var_3))))))));
                    }
                    var_20 *= max((((/* implicit */unsigned int) arr_10 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1] [i_1 + 1])), (max((((/* implicit */unsigned int) arr_8 [i_1 - 1] [i_0] [i_1] [i_1 - 1])), (max((arr_9 [i_0] [i_0] [i_2] [i_0]), (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_1] [i_0])))))));
                    var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 783854152U)) ? (1997347855540201753ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55536)))))));
                }
            } 
        } 
    } 
}
