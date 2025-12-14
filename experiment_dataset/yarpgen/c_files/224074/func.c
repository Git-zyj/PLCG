/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224074
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
    var_14 = ((/* implicit */int) var_3);
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((min((var_4), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_2)))) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))))))))));
    var_16 += ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_7)) ? (min((var_6), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1229190840)))) ? ((~(((/* implicit */int) var_7)))) : (((-26426934) % (1229190840)))))) ? ((~(((int) var_6)))) : (max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))), (((/* implicit */int) arr_0 [i_0]))))));
        var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : ((+(max((arr_1 [i_0] [i_0]), (((/* implicit */int) var_10))))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((unsigned long long int) arr_2 [i_1]);
        arr_6 [i_1] |= ((/* implicit */int) var_5);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) var_4);
        arr_10 [(unsigned char)4] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11989)) ? (((/* implicit */unsigned int) 1074891618)) : (3854895306U)))) ? (((/* implicit */int) ((_Bool) 11048157361700772990ULL))) : (((/* implicit */int) var_0))));
        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) var_1))));
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3])) ? (var_4) : (((/* implicit */unsigned long long int) arr_7 [i_3]))))) ? (arr_7 [i_3]) : (((/* implicit */int) ((_Bool) arr_3 [i_3] [i_3])))))) ? (max((((((/* implicit */_Bool) (short)-11976)) ? (3854895307U) : (((/* implicit */unsigned int) arr_1 [i_3] [i_3])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * ((-(((/* implicit */int) var_7))))))) ? (((/* implicit */int) (((~(((/* implicit */int) arr_11 [i_3] [i_3])))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(unsigned short)8] [i_3])) && (((/* implicit */_Bool) var_0)))))))) : (((((var_8) / (((/* implicit */int) var_12)))) / (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    arr_20 [i_3] [i_3] [i_3] |= ((/* implicit */int) max((var_6), (((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_3] [i_3])))));
                    arr_21 [i_3] [i_3] |= ((/* implicit */short) arr_4 [i_4] [i_5]);
                    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_15 [i_5]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_4]))))) ? (((((/* implicit */int) arr_15 [23LL])) | (((/* implicit */int) arr_15 [i_4])))) : (((int) arr_15 [i_4]))));
                }
            } 
        } 
        arr_22 [i_3] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (min((((/* implicit */unsigned int) (unsigned short)14)), (2156880565U)))));
        var_22 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_3] [i_3])) * (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) 1782658278U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3649086752U))))), (((/* implicit */unsigned int) var_8))));
    }
}
