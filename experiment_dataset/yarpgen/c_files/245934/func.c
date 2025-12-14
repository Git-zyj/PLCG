/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245934
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
    var_13 = ((/* implicit */unsigned char) (-(var_12)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(var_8)))), (min((((/* implicit */unsigned long long int) ((4294967289U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))))), (max((arr_1 [(unsigned char)12] [i_0]), (((/* implicit */unsigned long long int) -7825315013709287403LL))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] [(unsigned char)3] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) & (15867400940745270369ULL)))));
            arr_7 [i_0 + 1] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) max(((_Bool)0), ((_Bool)1))))), (var_8)));
        }
    }
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211))) > (2852899808U))) || (((/* implicit */_Bool) var_1))))) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10)))) << (((((/* implicit */int) var_7)) - (69)))))));
    var_15 = var_11;
}
