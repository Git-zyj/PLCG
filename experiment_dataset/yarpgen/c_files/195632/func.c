/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195632
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_3))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)31757)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4095U))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_11 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) / (-1116501815)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (_Bool)1))))))) : (arr_1 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9819)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)31757))) >= (arr_1 [i_0] [i_0]))))) : (((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0])))));
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (+(((int) arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) ((arr_1 [i_0] [i_0]) > (arr_1 [i_0] [i_0])))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 3247777476105322058ULL))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_0 [i_1] [i_1])))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-31781)))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (((_Bool)1) || ((_Bool)1))))));
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) (signed char)-107))));
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) arr_7 [i_2] [i_2]))));
            var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_10 [i_2])))) ? (((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_1 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((7398160960513959545ULL) & (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2]))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) arr_0 [i_2] [i_2])) : (((/* implicit */int) arr_11 [(_Bool)1]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) - (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (2281103265764571856ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [2ULL])) <= (((/* implicit */int) arr_11 [(signed char)22]))))))));
        arr_13 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-22870)) * (((/* implicit */int) (short)7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24692))))) : ((+(((/* implicit */int) arr_12 [18ULL]))))));
        arr_14 [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)0))));
    }
}
