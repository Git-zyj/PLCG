/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1898
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
    var_12 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)9021))))))))));
    var_13 = ((/* implicit */signed char) max((max(((+(var_0))), (((/* implicit */int) min(((unsigned char)31), (((/* implicit */unsigned char) (_Bool)1))))))), (min((max((var_3), (((/* implicit */int) (short)-8998)))), ((-(((/* implicit */int) var_6))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-9022)) * (((/* implicit */int) arr_0 [i_0 - 3]))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)224))));
            arr_6 [i_0] [i_0 - 2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 1] [i_0 - 2])) >= (((/* implicit */int) (unsigned char)203))));
            var_14 = ((/* implicit */long long int) var_10);
        }
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) var_7);
        var_15 = ((/* implicit */_Bool) min(((-((-(3430853667U))))), (arr_9 [i_2])));
        arr_11 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(var_7)))))));
    }
}
