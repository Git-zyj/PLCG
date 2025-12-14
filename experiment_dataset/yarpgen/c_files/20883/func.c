/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20883
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) ? (max((((/* implicit */unsigned long long int) 219305526U)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0] [i_0]) : (var_1)))) || (((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0]))))))));
        var_13 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) (unsigned char)112)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_14 = ((max((((/* implicit */int) var_0)), (((((/* implicit */int) (unsigned char)156)) >> (((/* implicit */int) (_Bool)0)))))) > (((/* implicit */int) (((-(var_7))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned char)147)))) | (((/* implicit */int) var_0))));
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (signed char)127)) : (arr_7 [i_2])));
            var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1]))));
        }
        /* vectorizable */
        for (short i_3 = 4; i_3 < 10; i_3 += 1) 
        {
            var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)171)) & (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) (unsigned char)112))));
            var_17 -= ((/* implicit */short) (~(var_7)));
            arr_12 [i_3] [(signed char)5] [i_1] = ((/* implicit */unsigned char) (~(var_1)));
            var_18 = ((/* implicit */unsigned char) ((_Bool) arr_11 [i_3 + 3] [i_3 + 3] [i_3]));
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((-(var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) (unsigned short)13834))))))))));
        var_20 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((((/* implicit */_Bool) arr_15 [i_4])) && (((/* implicit */_Bool) (unsigned short)51701)))))))));
        var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4]))) : (arr_16 [i_4])))) ? ((-(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4])))))) ? (((/* implicit */int) ((unsigned char) arr_16 [i_4]))) : (((/* implicit */int) (unsigned char)43))));
        var_22 *= ((/* implicit */_Bool) ((((min((var_7), (((/* implicit */unsigned long long int) -670867955)))) * (((/* implicit */unsigned long long int) -670867941)))) - (max((((/* implicit */unsigned long long int) 4053191141U)), (arr_14 [i_4])))));
    }
    var_23 &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((min((((/* implicit */unsigned int) (short)-20055)), (3500333038U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 10092321762746460875ULL)))))))))));
    var_24 = ((/* implicit */unsigned char) (-(min(((+(4294967295U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)88)))))))));
}
