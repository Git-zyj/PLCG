/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23655
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
    var_17 += ((/* implicit */unsigned long long int) ((var_15) > (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_10))))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((8638470863064681172LL) >> (((8638470863064681165LL) - (8638470863064681126LL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (signed char i_3 = 4; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)61793)) | (((/* implicit */int) (unsigned short)61802))))) : (((var_16) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (min((((/* implicit */int) arr_0 [i_0 + 1])), (var_15))) : (((((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_14))))) >> (((((var_14) ? (((/* implicit */int) (unsigned short)3733)) : (((/* implicit */int) arr_3 [i_3 - 1])))) - (30046)))))));
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)3735)) >= (((/* implicit */int) var_5)))))) & (857843897200983701ULL)))) ? (min((max((15280522932700824784ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((_Bool) 7152427368357694421LL));
        var_22 |= ((/* implicit */signed char) max((min((((/* implicit */int) var_9)), (min((((/* implicit */int) (_Bool)0)), (302949973))))), (((/* implicit */int) (_Bool)0))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (unsigned short)0))))))) ? (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) var_8))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_5 [5U] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)18] [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_13) <= (-8638470863064681173LL))))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */int) (short)10481)) : (-302949988)))) * (((((/* implicit */_Bool) (unsigned short)61793)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_2)))))));
    }
}
