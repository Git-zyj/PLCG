/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199162
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
    var_19 ^= var_3;
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2613827831U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((-5637971436382610780LL), (((/* implicit */long long int) (unsigned char)166))))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) (short)-26717))) * (0LL)))))));
    var_21 = ((/* implicit */_Bool) var_5);
    var_22 -= ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_23 += ((/* implicit */short) min((((/* implicit */int) ((unsigned char) (short)24101))), ((-(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)-24102))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((((unsigned long long int) (signed char)(-127 - 1))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -769335789)))))))) ? (((/* implicit */int) min(((unsigned char)24), (((/* implicit */unsigned char) (_Bool)0))))) : (min((769335789), (((/* implicit */int) (short)30273))))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 769335789)) ? (arr_6 [(short)9] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) min((min(((~(-1685490423728912803LL))), (((/* implicit */long long int) arr_0 [i_0 - 1] [i_0 - 1])))), (((/* implicit */long long int) (-((~(374028745U))))))));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (short)7077))));
    }
}
