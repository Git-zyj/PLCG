/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237916
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_11 ^= ((/* implicit */_Bool) ((1636397725) + (((/* implicit */int) (_Bool)1))));
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (var_1)));
                    }
                    var_13 = ((arr_1 [i_0 + 2]) == (((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])));
                }
            } 
        } 
        var_14 ^= ((/* implicit */short) ((((arr_1 [i_0]) - (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))) == (((((/* implicit */int) arr_3 [i_0] [i_0])) / (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_4 [i_4 + 1] [i_4 - 1]) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) ((arr_7 [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) arr_2 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4]))) : (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_4] [i_4 + 1])) >> (((arr_10 [i_4 + 2]) - (3408339269U))))))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                for (unsigned char i_7 = 3; i_7 < 13; i_7 += 1) 
                {
                    {
                        arr_18 [i_5] = ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_7] [i_6] [i_5] [i_4 + 1])))) + (((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (var_6))) / (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_4] [i_4 - 1] [i_7 + 1])) | (((/* implicit */int) arr_8 [i_4] [i_4 - 1] [i_7 - 3]))))))))));
                    }
                } 
            } 
        } 
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) arr_5 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4])) ? (var_1) : (arr_5 [i_4 + 2] [i_4 - 1] [i_4] [i_4]))) : (((((/* implicit */int) arr_16 [i_4 + 2] [i_4] [i_4] [12])) << (((((/* implicit */int) (signed char)-120)) + (134)))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */int) ((arr_12 [i_4 + 2]) != (arr_12 [i_4 + 2])))) == (((/* implicit */int) ((var_9) == (arr_12 [i_4 - 1])))))))));
        var_18 ^= ((((/* implicit */_Bool) ((((arr_10 [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_4]))))) % (((/* implicit */unsigned int) ((((/* implicit */int) (short)25827)) | (((/* implicit */int) (unsigned short)32243)))))))) ? (((((/* implicit */_Bool) 1214296136U)) ? (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25828))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) arr_13 [i_4] [i_4] [i_4])) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((var_7) << (((((/* implicit */int) arr_6 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4])) - (23071)))))));
    }
    var_19 = ((var_8) != (((/* implicit */unsigned int) var_7)));
}
