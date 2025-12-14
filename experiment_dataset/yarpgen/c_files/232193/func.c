/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232193
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((_Bool) var_17));
        var_19 = ((/* implicit */unsigned long long int) (unsigned short)9706);
        var_20 = ((/* implicit */unsigned long long int) (unsigned short)9727);
    }
    /* LoopNest 2 */
    for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            {
                var_21 = var_4;
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)55841), ((unsigned short)65528)))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 14673807380802053269ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)9697))))) ^ (arr_2 [i_1 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69)))));
                var_23 &= ((/* implicit */short) max((11039063282981748663ULL), (((/* implicit */unsigned long long int) (unsigned short)16))));
                var_24 = ((/* implicit */unsigned int) (unsigned short)55829);
                var_25 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) (unsigned short)13651)) : (((((/* implicit */_Bool) (unsigned short)55829)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_12))))))));
            }
        } 
    } 
}
