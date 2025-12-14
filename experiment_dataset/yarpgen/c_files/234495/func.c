/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234495
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((short) (((+(((/* implicit */int) arr_0 [i_0] [i_0])))) < (((/* implicit */int) ((var_12) >= (((/* implicit */int) var_2))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            var_14 |= ((/* implicit */signed char) arr_1 [i_1]);
            var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        }
    }
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), ((-(var_7))))))));
    var_17 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((int) arr_6 [i_2] [i_2])) * ((+(((/* implicit */int) arr_6 [i_2] [i_2])))))))));
        var_19 = ((((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (var_10))) == (((((/* implicit */int) arr_5 [i_2])) / (((/* implicit */int) var_5))))))) * (((((((/* implicit */int) arr_6 [i_2] [i_2])) ^ (((/* implicit */int) arr_5 [i_2])))) & (((/* implicit */int) ((_Bool) arr_6 [i_2] [i_2]))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (max((((((/* implicit */int) arr_5 [i_2])) & (((/* implicit */int) var_5)))), (((((/* implicit */int) arr_6 [i_2] [i_2])) ^ (var_12))))) : ((((((~(((/* implicit */int) arr_5 [i_2])))) + (2147483647))) << (((/* implicit */int) arr_5 [i_2]))))));
        arr_7 [i_2] = ((/* implicit */short) var_12);
    }
    for (unsigned char i_3 = 4; i_3 < 24; i_3 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_1))));
        arr_11 [i_3] = ((/* implicit */unsigned int) ((unsigned char) 681901242));
        var_22 &= ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_10 [i_3 - 4])))) + (((((/* implicit */int) ((((/* implicit */int) arr_10 [i_3])) >= (((/* implicit */int) arr_9 [i_3 - 4]))))) >> (((((/* implicit */int) var_0)) | (((/* implicit */int) arr_10 [i_3 + 1]))))))));
        var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) * (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (((arr_8 [i_3] [i_3 - 2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3])))))))));
    }
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (var_6))))));
}
