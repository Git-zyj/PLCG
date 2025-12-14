/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211681
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((short) 7764458857986064471LL));
        var_10 = ((/* implicit */unsigned short) ((signed char) ((short) arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        var_11 = ((/* implicit */short) (~(5212208807605364242ULL)));
        var_12 += ((/* implicit */short) ((((/* implicit */unsigned int) arr_0 [i_1 + 1] [i_1 - 3])) < (var_2)));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_13 -= ((/* implicit */short) ((((((/* implicit */int) arr_7 [i_2])) <= (((/* implicit */int) arr_7 [i_2])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) - (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_2])), ((unsigned char)71)))))));
        arr_8 [i_2] = arr_6 [i_2];
        var_14 -= ((/* implicit */short) var_1);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            var_15 += ((/* implicit */short) (+(((/* implicit */int) (short)32704))));
            var_16 |= ((/* implicit */int) arr_9 [16] [i_3]);
        }
        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            var_17 = ((((/* implicit */_Bool) ((long long int) var_1))) ? (((((/* implicit */_Bool) arr_9 [i_4] [(unsigned short)5])) ? (((((/* implicit */_Bool) 537589355092168179ULL)) ? (var_8) : (var_8))) : (((/* implicit */int) arr_12 [i_2] [i_4])))) : (((((/* implicit */int) arr_13 [i_2])) ^ (((/* implicit */int) ((short) var_8))))));
            var_18 ^= ((/* implicit */unsigned char) 1427056184U);
            arr_15 [(unsigned char)18] [i_4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_4]))) : (var_2))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)28463)))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52954))) : (187451062U))))) : (((/* implicit */int) var_5))));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_6 [i_4]))))) >> (((min((4228604601U), (((/* implicit */unsigned int) arr_6 [i_4])))) - (20662U)))))))));
        }
    }
    var_20 = var_3;
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((signed char) 4079368116U))) : (((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned short)65535))))))) || (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (unsigned short)56881))))))));
}
