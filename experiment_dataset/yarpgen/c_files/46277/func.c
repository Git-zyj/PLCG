/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46277
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
    var_14 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 242561824U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11516))) : (6U)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned short) ((((0U) >> (((/* implicit */int) (_Bool)1)))) >> (((min((arr_4 [i_0] [i_1] [i_1]), (arr_4 [12LL] [i_1] [i_2]))) - (7062974706374895015LL)))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)210)) : (((/* implicit */int) (unsigned char)11))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23520)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0]))))) ? ((+(var_5))) : (((/* implicit */int) ((arr_7 [(short)0] [12ULL] [(short)0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [2U] [(unsigned short)4] [i_0] [i_0]))))))))) ? ((~(arr_0 [2U] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) > (-1793867748))))))))));
        arr_9 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [(short)0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned short)3]))))))) / (min((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0]))))));
    }
    var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) (+(((/* implicit */int) (unsigned short)768))))))));
    var_19 = ((/* implicit */unsigned int) ((((var_7) != (((/* implicit */long long int) ((/* implicit */int) var_4))))) ? (min((max((-7217074847350624188LL), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
