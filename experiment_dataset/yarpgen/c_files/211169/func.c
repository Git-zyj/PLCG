/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211169
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_7))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (arr_1 [(short)3] [11])))) ? (((long long int) 16579944329831283843ULL)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16579944329831283843ULL))))))))) ? (16579944329831283846ULL) : (arr_0 [0LL] [0LL])));
        var_15 = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)158))))), (min((10478122838602559566ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_8 [(_Bool)1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (max((arr_7 [i_1]), (((/* implicit */unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) max((6394195559872510885LL), (((/* implicit */long long int) (signed char)-109)))))))) ? ((+(12470063697140881021ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (short i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned char) arr_4 [i_1] [i_4 - 1]))) ? (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1])) : (max((arr_0 [i_4] [i_4]), (((/* implicit */unsigned long long int) var_7))))))));
                        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_2] [i_2]))) && ((!(((/* implicit */_Bool) var_0))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 4) 
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_4 + 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_14 [i_1] [i_1] [i_3] [i_5 + 1])), (((((/* implicit */_Bool) 8ULL)) ? (arr_12 [i_1] [i_2] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_3] [i_1])))))))) ? (arr_17 [i_5] [i_5] [i_5 - 2] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) arr_2 [i_3] [i_5]))));
                            var_18 += ((/* implicit */long long int) (unsigned char)104);
                        }
                        arr_19 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1]);
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (min((((/* implicit */unsigned long long int) (+(var_8)))), (min((((/* implicit */unsigned long long int) var_13)), (var_0)))))));
}
