/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234460
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
    var_15 ^= ((/* implicit */unsigned short) var_2);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_8))) <= (((/* implicit */int) var_7))));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)63197))))))) != (((((/* implicit */_Bool) (+(((/* implicit */int) (short)4421))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0 + 1]))))))));
                        arr_12 [i_0] [i_0] [(short)15] [i_3 + 1] = ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_0] [i_3 + 2]);
                        var_18 = ((/* implicit */unsigned int) min((var_18), (min((((/* implicit */unsigned int) max((arr_2 [i_2 + 1]), (((/* implicit */unsigned short) var_14))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4041841782U)) || (((/* implicit */_Bool) (unsigned short)2341))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16320))) : (arr_6 [i_0] [12] [i_2])))))))));
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_2)))))) ? (((/* implicit */int) (short)16302)) : (((/* implicit */int) (unsigned char)228)))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(var_1))) / (min((arr_6 [18U] [i_0] [i_0 - 1]), (((/* implicit */unsigned int) (short)-14290))))))) ? (arr_9 [i_0] [12U] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned char)0))))) * (((/* implicit */int) (!(((/* implicit */_Bool) 4041841782U))))))))));
        arr_14 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */short) (!(((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) var_11))))))), ((short)-16340)));
        arr_15 [i_0] [i_0] = (((~(((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0] [(_Bool)1])))) | (((((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0] [i_0 - 1])) & (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0])))));
    }
    var_20 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) min((var_8), (var_8)))))), (var_0)));
}
