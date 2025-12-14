/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224925
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
    var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)19853)))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_3))))) : (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_0 + 1] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-17)))))), ((~(1150669704793161728ULL))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-26))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19840)))))))) ? ((~(((/* implicit */int) ((signed char) var_4))))) : ((~((-(((/* implicit */int) (unsigned short)45682))))))));
                    var_15 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (unsigned short)10))))));
                    arr_11 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((2147483647) % (((/* implicit */int) var_9)))), ((+(-2147483635)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (var_5)))) ? ((+((-9223372036854775807LL - 1LL)))) : (var_0))) : (((long long int) (unsigned short)16021))));
                }
            } 
        } 
        var_16 = (-((+(var_3))));
    }
    var_17 = ((/* implicit */signed char) var_7);
    var_18 = ((/* implicit */unsigned short) ((short) var_0));
    var_19 += ((/* implicit */long long int) (~(((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)28))))) ^ (((((/* implicit */_Bool) 1552453294)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
}
