/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200127
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
    var_16 = ((/* implicit */_Bool) min((min((min((var_4), (((/* implicit */short) var_11)))), (((/* implicit */short) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_9))))))), (((/* implicit */short) var_8))));
    var_17 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) (short)-1));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(((/* implicit */int) (((((_Bool)1) ? (969413192U) : (((/* implicit */unsigned int) 470603643)))) >= (((((/* implicit */_Bool) arr_4 [14ULL] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_1] [i_1])))))))))));
                            var_19 = ((/* implicit */_Bool) min((min((arr_8 [i_0 - 1] [i_1] [i_2] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (470603629) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 601817657101711803ULL)) ? (1952575477) : (((/* implicit */int) (short)15032)))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0 - 1] [i_1])) >> (((12065029935377473482ULL) - (12065029935377473480ULL))))) % (var_12)))), (((((/* implicit */_Bool) ((short) arr_8 [i_1] [(unsigned char)0] [i_1] [i_0]))) ? (((999075873U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15714))))) : (var_6)))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) var_2)), (((var_11) ? (var_12) : (arr_7 [i_0] [10] [i_1] [i_0]))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_4 = 3; i_4 < 10; i_4 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) (unsigned short)47643);
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 4) 
            {
                for (unsigned char i_7 = 2; i_7 < 12; i_7 += 4) 
                {
                    {
                        arr_23 [i_4] [i_4 + 1] [i_4] [i_6 + 1] [i_6 + 2] [i_7 + 1] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                        arr_24 [i_4] = ((/* implicit */unsigned int) min((((short) arr_0 [i_6] [i_7 + 1])), (min((arr_15 [i_4 - 1]), (arr_15 [i_4 - 3])))));
                    }
                } 
            } 
        } 
        arr_25 [6U] |= ((/* implicit */_Bool) (unsigned short)1792);
        var_22 = ((/* implicit */unsigned long long int) ((int) ((unsigned short) arr_4 [i_4 - 1] [i_4])));
    }
    for (unsigned long long int i_8 = 3; i_8 < 7; i_8 += 3) 
    {
        arr_28 [i_8] = ((/* implicit */unsigned long long int) arr_22 [(unsigned char)4]);
        arr_29 [i_8] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_8 + 3] [i_8 + 3])) * (((/* implicit */int) arr_0 [i_8 + 3] [i_8 - 1]))))), (min((((/* implicit */unsigned long long int) arr_0 [i_8 + 2] [i_8 - 2])), (arr_26 [i_8 - 2])))));
    }
    var_23 = ((/* implicit */unsigned short) var_1);
}
