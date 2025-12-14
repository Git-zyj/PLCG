/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232618
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
    var_10 = ((/* implicit */int) ((((min((((/* implicit */unsigned int) (unsigned char)3)), (3U))) % (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (3589756662U))))) <= (((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))) : (13U)))));
    var_11 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_12 = (unsigned short)37312;
        var_13 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (unsigned char)7)) - (((/* implicit */int) ((short) arr_1 [i_0]))))));
        var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [(unsigned char)16]))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)177)), (var_9)));
        arr_5 [6U] [16LL] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)239)), (var_3)))), (arr_2 [i_1])))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */unsigned int) var_0)))))))) ^ (((/* implicit */int) ((((long long int) -9197640078646157707LL)) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (4294967292U) : (((/* implicit */unsigned int) var_9))))))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_15 *= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64001)) || (((/* implicit */_Bool) 20U)))))));
        arr_9 [18ULL] = ((/* implicit */unsigned char) arr_7 [i_2]);
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    {
                        arr_21 [i_2] [i_3] = ((/* implicit */unsigned int) var_5);
                        arr_22 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)98))));
                        arr_23 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)69)) && (arr_14 [i_2])));
                    }
                } 
            } 
        } 
    }
}
