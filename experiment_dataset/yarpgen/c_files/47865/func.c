/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47865
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
    for (short i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))) ? ((+(var_5))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_7)))))));
        var_10 = ((/* implicit */_Bool) max((var_10), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (min((((/* implicit */unsigned short) (unsigned char)181)), ((unsigned short)0))))))))));
        arr_4 [i_0] [i_0] = ((8524115234673633885ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)0), ((unsigned short)5))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (int i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_11 = ((((/* implicit */_Bool) (-(1584585399)))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))));
                        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (+(arr_6 [i_0] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0 - 2])) : (((9922628839035917731ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2])))))))))));
                        arr_11 [i_0 + 1] [i_0 + 1] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((arr_6 [i_0 - 3] [i_2] [i_2]) * (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((-(arr_10 [i_0] [i_0 - 2] [i_0] [i_3 + 3] [i_3] [i_3])))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 2; i_4 < 16; i_4 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((arr_6 [i_4 - 2] [i_4 - 2] [i_4 - 1]) & (arr_6 [i_4 - 2] [i_4 + 2] [i_4 - 1])));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (-(arr_15 [16ULL]))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        var_15 |= ((/* implicit */short) min(((unsigned short)2), (((/* implicit */unsigned short) ((signed char) 9922628839035917733ULL)))));
        var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(short)0] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) arr_10 [(short)16] [i_5] [i_5] [i_5] [i_5] [(short)16])) : (8524115234673633879ULL)))) ? ((~(((/* implicit */int) arr_18 [i_5] [i_5])))) : (((/* implicit */int) ((unsigned short) (+(var_9)))))));
        arr_20 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 7772822527119755657LL))))) & (((/* implicit */int) arr_7 [(unsigned short)8] [i_5] [(unsigned short)8] [(unsigned short)8]))));
    }
    var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (short)-13))))), ((-(-7772822527119755678LL)))))) & (((((((/* implicit */_Bool) 1004025688)) ? (((/* implicit */unsigned long long int) 697192311U)) : (8524115234673633871ULL))) >> (((min((var_9), (((/* implicit */unsigned long long int) var_3)))) - (917593307ULL)))))));
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) -7772822527119755674LL)), (min((min((8524115234673633885ULL), (((/* implicit */unsigned long long int) (signed char)-1)))), ((+(var_2))))))))));
}
