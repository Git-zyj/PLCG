/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237585
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_10 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)32481)) != (((((/* implicit */_Bool) (unsigned short)33081)) ? (((/* implicit */int) min((var_0), (var_5)))) : (((/* implicit */int) (signed char)-62))))));
                    var_11 = ((/* implicit */unsigned long long int) min((var_11), ((+((+(((((/* implicit */_Bool) 2046ULL)) ? (1206144073460706441ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33062)))))))))));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0 + 1]))))) ? (min((((/* implicit */long long int) (unsigned short)33085)), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37115)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33062)) ? (((/* implicit */int) (unsigned short)64512)) : (((/* implicit */int) (unsigned short)32474))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37130))) : (var_3)))) ? (max((((((/* implicit */_Bool) (unsigned short)21457)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21377))) : (var_3))), (((/* implicit */unsigned long long int) min((3355713737U), (var_7)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)60))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)1035)) : (((/* implicit */int) (unsigned short)32485)))))))));
    var_14 = ((/* implicit */unsigned long long int) var_0);
}
