/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226082
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
    var_17 = ((/* implicit */signed char) (((~(((/* implicit */int) max(((unsigned char)30), ((unsigned char)235)))))) % (max((var_14), ((~(((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((arr_0 [(short)4] [(short)4]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)37))))) ? ((-(((/* implicit */int) (unsigned char)30)))) : (max((arr_1 [i_0]), (((/* implicit */int) (_Bool)1))))))))))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                for (int i_3 = 1; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [i_1 - 1] [i_1] = ((/* implicit */short) (+(arr_5 [i_0] [i_0] [i_1] [i_2 + 2])));
                        arr_10 [i_0] [i_1] [i_2] [i_3 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)235))))) ? (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) / (arr_0 [i_0] [i_0])))), (((arr_8 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_15))))))) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = (-(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (arr_5 [(_Bool)1] [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [10ULL] [10ULL]))));
    }
    var_19 = ((/* implicit */unsigned int) max((var_1), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_12)))) && (((/* implicit */_Bool) ((unsigned short) var_14))))))));
}
