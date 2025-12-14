/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206300
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (((unsigned long long int) arr_0 [i_0] [i_0]))))));
        var_11 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((9092737457322110589LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-6)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_0 [i_0] [(unsigned short)10])))));
        arr_3 [5ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((max(((unsigned char)7), (var_0))), ((unsigned char)248))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_12 += var_0;
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((unsigned long long int) max(((-(((/* implicit */int) (unsigned char)249)))), (((((/* implicit */int) (unsigned char)240)) * (((/* implicit */int) (unsigned char)237))))))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */long long int) ((_Bool) var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [0LL]))) : (arr_4 [6LL])));
    }
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    arr_16 [i_2] [(unsigned short)0] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), (var_0)))) ? (((/* implicit */int) arr_8 [i_3] [(signed char)0])) : (((/* implicit */int) var_2)))), (max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_13 [7LL] [i_3])) : (((/* implicit */int) var_0))))))));
                    var_15 = ((/* implicit */_Bool) arr_11 [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_16 ^= ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (unsigned char)8)));
}
