/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216716
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) << (((var_7) - (458385795U))))))));
    var_11 = ((/* implicit */signed char) var_7);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))));
                    var_13 ^= ((/* implicit */long long int) (~(((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
                    var_14 ^= max((((max((((/* implicit */unsigned int) var_2)), (arr_0 [i_2 - 1]))) / (max((arr_5 [17ULL] [i_1 + 1] [i_2 - 1] [i_2 - 1]), (((/* implicit */unsigned int) var_4)))))), (((/* implicit */unsigned int) arr_2 [i_0])));
                    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(max((((/* implicit */int) arr_2 [i_0])), (1645675849)))))) % (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_6))), (((((/* implicit */_Bool) (short)24883)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 1]))) : (var_3)))))));
                }
            } 
        } 
        var_16 = ((/* implicit */int) ((_Bool) var_6));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_9 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(_Bool)1])) ? (arr_0 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69)))))) : ((~(5ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_3])))) : (var_3));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_3] [i_3] [i_3])) * (((/* implicit */int) var_8))));
    }
    for (signed char i_4 = 2; i_4 < 21; i_4 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 17179607040ULL)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (unsigned short)65535)))) <= (((/* implicit */int) arr_11 [i_4 - 2]))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) <= (((/* implicit */int) var_8)))))));
        arr_12 [i_4] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((var_8) ? (arr_10 [i_4]) : (((/* implicit */unsigned long long int) var_1)))) : ((~(var_3))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned long long int) max((max((-1645675837), (((/* implicit */int) arr_11 [i_4])))), ((~(((/* implicit */int) (_Bool)1))))))) : (((min((16892135692360456376ULL), (((/* implicit */unsigned long long int) (unsigned short)44984)))) | (((/* implicit */unsigned long long int) 890855405U))))));
        var_21 = (!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_10 [i_4 + 2])))));
    }
}
