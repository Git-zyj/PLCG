/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50694
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
    var_14 = ((/* implicit */int) var_6);
    var_15 = ((/* implicit */int) var_9);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 += ((/* implicit */short) ((unsigned int) ((((long long int) arr_0 [i_0])) >> (((((/* implicit */int) var_8)) - (62884))))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_12)) & (((/* implicit */int) arr_0 [i_0]))))))) ? ((~((~(((/* implicit */int) (unsigned char)106)))))) : (((max((-1475131709), (((/* implicit */int) var_9)))) << (((((arr_3 [i_0]) | (((/* implicit */int) arr_1 [i_0])))) + (1027262828))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [2])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_6 [(unsigned char)2])))) : (((/* implicit */int) ((-636560931) <= (((/* implicit */int) arr_2 [i_1])))))))) ? (((/* implicit */int) ((short) min((var_6), (((/* implicit */unsigned int) arr_2 [i_1])))))) : (min((((/* implicit */int) max((var_12), (((/* implicit */signed char) arr_5 [i_1]))))), ((-(var_10)))))));
        var_19 = (-(((((/* implicit */_Bool) ((int) arr_6 [i_1]))) ? ((+(((/* implicit */int) arr_0 [i_1])))) : (((((/* implicit */int) var_1)) - (var_10))))));
        arr_7 [(signed char)6] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) ((_Bool) ((((((/* implicit */int) (short)-11986)) + (2147483647))) >> (((((/* implicit */int) (short)-12003)) + (12013))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (var_13)))) ? (((long long int) 142252858683516912LL)) : (((((/* implicit */_Bool) 13384371938971291486ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39199))) : (0LL)))))));
        var_20 ^= ((/* implicit */unsigned short) (((~(((arr_3 [i_1]) | (((/* implicit */int) var_11)))))) / (((((/* implicit */int) arr_6 [(unsigned char)9])) * (((/* implicit */int) ((_Bool) arr_0 [i_1])))))));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        var_21 *= var_1;
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            for (unsigned int i_4 = 1; i_4 < 18; i_4 += 1) 
            {
                {
                    arr_16 [i_2] [i_2] [i_2] &= min((((/* implicit */long long int) arr_0 [(signed char)22])), (((long long int) var_10)));
                    var_22 = ((/* implicit */signed char) ((short) arr_10 [i_3]));
                    arr_17 [i_2] [i_3] [i_3 + 1] = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */unsigned char) ((var_13) <= (var_13)))), (arr_12 [i_3] [i_4]))))));
                    arr_18 [i_3] = ((/* implicit */int) arr_13 [(unsigned char)14] [(unsigned char)14] [19ULL]);
                }
            } 
        } 
    }
}
