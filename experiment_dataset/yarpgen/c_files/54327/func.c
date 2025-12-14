/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54327
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
    var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_6)))))));
    var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] [(signed char)15] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-1)) & (((/* implicit */int) (_Bool)0))));
        arr_4 [i_0] = ((/* implicit */_Bool) 4611404543450677248LL);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) (((+(arr_6 [14] [i_1 - 2]))) == (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) / (arr_6 [i_0 - 2] [i_1 - 1])))));
            arr_8 [i_0] [14U] [(_Bool)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)22724))));
            arr_9 [i_0] [i_0] |= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (short)-18488))))));
        }
        for (int i_2 = 4; i_2 < 19; i_2 += 4) 
        {
            arr_12 [18U] = ((/* implicit */long long int) ((unsigned short) arr_1 [7ULL]));
            arr_13 [20] [(unsigned short)11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_6 [i_2] [(unsigned short)11]), (((/* implicit */long long int) (_Bool)1))))))))));
        }
        arr_14 [i_0] [6] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) (signed char)31))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (480U))) : (min((((/* implicit */unsigned int) (unsigned short)49079)), (arr_11 [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)8191)) ? (((/* implicit */int) (unsigned char)1)) : (-1026201949))))));
    }
    var_18 = ((/* implicit */_Bool) var_2);
}
