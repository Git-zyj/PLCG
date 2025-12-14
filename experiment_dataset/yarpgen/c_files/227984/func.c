/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227984
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
    var_12 = ((/* implicit */unsigned long long int) var_10);
    var_13 += ((/* implicit */short) 3790176011197850739ULL);
    var_14 &= ((/* implicit */short) (unsigned short)24737);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)40796)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((var_2), (((/* implicit */signed char) var_8))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))) ^ (((/* implicit */int) ((_Bool) ((var_3) ? (((/* implicit */int) (short)26046)) : (var_9)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) min((var_16), (max((min((((/* implicit */short) var_8)), (arr_3 [i_1] [i_0]))), (((short) arr_4 [i_0] [i_0]))))));
                    var_17 *= ((short) ((((/* implicit */unsigned long long int) var_11)) | (((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62)))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_3 [i_3] [i_0])))) | ((-(((/* implicit */int) var_5)))))) ^ ((~(((/* implicit */int) min((var_7), (var_8))))))));
                        arr_13 [i_0] [i_1] [i_0] [i_3] = 2147483647;
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_4] [i_2] [i_1] [i_0])) / (min((((/* implicit */int) var_4)), (arr_11 [i_2] [i_1])))))) ? (((/* implicit */int) ((signed char) ((unsigned char) 1362058059)))) : (((/* implicit */int) (unsigned short)0))));
                        var_20 += ((/* implicit */short) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0)));
                        var_21 |= ((/* implicit */_Bool) (+(((int) arr_4 [i_2] [i_2]))));
                        arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_12 [i_0] [i_0] [i_1] [i_2] [i_4]))) * (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))));
                        var_22 = ((/* implicit */short) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_5 [i_2] [i_1] [i_2])))))));
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))) : (arr_4 [i_0] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])) || (arr_14 [i_2] [i_2] [i_2] [i_5])))) : (((int) 6361758803348206617LL)))) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_17 [i_0] [i_5 - 1] [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) ((unsigned short) arr_9 [i_5] [i_5 + 1] [i_5] [i_5] [i_5])))))));
                        var_24 &= ((/* implicit */long long int) ((((unsigned long long int) ((int) var_11))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (~(var_9))))))));
                        arr_19 [i_0] [i_0] [i_2] = ((/* implicit */int) ((unsigned short) ((min((((/* implicit */long long int) (signed char)-62)), (3919973944579746223LL))) < (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-87), ((signed char)-90))))))));
                        arr_20 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */_Bool) ((((int) arr_17 [i_1] [i_1] [i_5 + 1] [i_5 - 1])) >> ((((~(((/* implicit */int) arr_3 [i_1] [i_5 - 1])))) + (19785)))));
                        var_25 = ((/* implicit */long long int) ((min(((-2147483647 - 1)), (((/* implicit */int) ((short) var_5))))) + (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) var_6);
        arr_21 [i_0] [i_0] &= ((/* implicit */signed char) var_0);
    }
}
