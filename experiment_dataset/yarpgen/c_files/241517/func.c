/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241517
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) (+(min((((/* implicit */long long int) min((var_4), (((/* implicit */int) (unsigned char)0))))), ((+(arr_0 [i_0] [(_Bool)0])))))));
        var_16 = ((/* implicit */unsigned char) (+(max((((/* implicit */int) arr_1 [i_0] [i_0])), (((var_4) + (((/* implicit */int) arr_1 [i_0] [(unsigned char)3]))))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))), (4111355720872649960ULL))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((min((((/* implicit */long long int) ((((/* implicit */int) (short)-26963)) + (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) -5752174399236787354LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [10ULL] [i_1]))) : (arr_0 [i_1] [i_1]))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))))))));
        var_19 &= ((/* implicit */long long int) (+(max((max((((/* implicit */unsigned int) var_12)), (var_13))), (((/* implicit */unsigned int) arr_3 [i_1]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (unsigned char i_5 = 1; i_5 < 15; i_5 += 4) 
                {
                    {
                        arr_17 [i_2] [i_4] [(signed char)8] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) var_4))), ((~(arr_11 [i_2])))))) != (max((((long long int) var_6)), (((/* implicit */long long int) (+(arr_12 [i_4] [i_4]))))))));
                        var_20 ^= ((/* implicit */unsigned long long int) ((min((min((arr_8 [(unsigned char)15] [i_3]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_16 [i_2] [i_3] [i_4] [i_5] [i_4]))))))) >= (max((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_13 [i_2])), ((short)0)))), (var_11)))));
                        var_21 = min((((/* implicit */long long int) var_12)), (((((min((var_0), (((/* implicit */long long int) (_Bool)1)))) + (9223372036854775807LL))) << (((min((((/* implicit */unsigned int) (short)22185)), (var_13))) - (22185U))))));
                        arr_18 [i_2] = ((/* implicit */long long int) (-(min((((var_5) ^ (((/* implicit */unsigned long long int) -860417523274856565LL)))), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) var_9)))))))));
                    }
                } 
            } 
        } 
        arr_19 [(_Bool)1] [i_2] = ((/* implicit */short) min((((/* implicit */long long int) ((var_13) % (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (max((arr_15 [i_2] [i_2] [i_2] [7ULL]), (0LL)))));
    }
    var_22 = var_9;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_6 = 3; i_6 < 23; i_6 += 1) 
    {
        arr_23 [i_6 + 2] [i_6] = ((/* implicit */short) (+(((/* implicit */int) arr_22 [i_6] [i_6 - 3]))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (_Bool)1))));
        arr_24 [i_6] [i_6 + 1] = ((/* implicit */_Bool) arr_20 [i_6 - 1]);
    }
    for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        var_24 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_21 [7])) ? (((/* implicit */unsigned long long int) min((arr_0 [i_7] [i_7]), (((/* implicit */long long int) arr_26 [(unsigned short)0] [i_7]))))) : (var_5)))));
        var_25 = ((/* implicit */long long int) var_2);
        arr_27 [i_7] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_26 [i_7] [i_7])), (13491069642510424904ULL)));
        var_26 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67))))), (((/* implicit */unsigned long long int) min((5804880305161741506LL), (268435455LL)))))) / (((/* implicit */unsigned long long int) var_2))));
    }
    for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        arr_30 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_8] [(unsigned short)23]))))) || (((/* implicit */_Bool) ((unsigned char) arr_0 [i_8] [i_8])))));
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_11))));
    }
    var_28 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_6)) : (4111355720872649960ULL)))) ? (((var_2) & (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((signed char) -5752174399236787354LL))))));
}
