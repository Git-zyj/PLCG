/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227760
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
    var_20 = ((/* implicit */unsigned int) max((var_20), ((((!(((/* implicit */_Bool) var_7)))) ? (min((116617205U), (((/* implicit */unsigned int) ((-1827392424) | (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_21 &= ((/* implicit */unsigned long long int) (((_Bool)1) ? (1050700741) : (((/* implicit */int) (unsigned short)65521))));
        var_22 = ((/* implicit */int) max((var_22), (max((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), ((~(((/* implicit */int) (unsigned short)44346))))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)54562)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26583))) : (arr_0 [i_0] [i_0])));
        var_24 = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) arr_1 [i_0] [15ULL])) ? (((/* implicit */int) arr_2 [i_0])) : (var_9))) - (((((/* implicit */int) var_0)) * (((/* implicit */int) arr_3 [i_0]))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) - (((((/* implicit */long long int) ((/* implicit */int) var_11))) | (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) - (arr_1 [5ULL] [i_1])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) min(((~((~(((/* implicit */int) arr_3 [i_1])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((1804543376276253696LL) - (((/* implicit */long long int) arr_0 [i_1] [i_1]))))))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    var_26 = ((/* implicit */signed char) var_18);
                    var_27 ^= ((/* implicit */short) arr_13 [i_4] [i_2]);
                }
            } 
        } 
    } 
}
