/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203940
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
    var_20 = ((((/* implicit */_Bool) ((min((1048575U), (((/* implicit */unsigned int) var_18)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */_Bool) ((4262838704U) * (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) != (-8975306775578770890LL))))) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((32128592U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12977))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))));
    var_21 = ((/* implicit */int) ((unsigned int) var_7));
    var_22 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_9 [6LL] [i_2] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                        arr_10 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1385355388U)) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) (unsigned short)65535))))) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967290U)) != (((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45987)))))));
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) & (var_3)));
    }
    var_23 = ((/* implicit */unsigned int) ((min((((/* implicit */int) (short)-607)), (((16383) + (var_19))))) == (((/* implicit */int) var_16))));
}
