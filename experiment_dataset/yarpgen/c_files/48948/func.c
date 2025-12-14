/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48948
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)1)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 1920U)) || (((/* implicit */_Bool) var_12)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53167))) : (var_12))))))) : (((/* implicit */int) ((signed char) (_Bool)1)))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [(unsigned short)6] [i_2] = ((int) (+(arr_0 [i_2])));
                    var_14 *= max((4294965375U), (((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_6 [i_0] [i_1 - 2]))));
                }
            } 
        } 
        var_15 += ((/* implicit */_Bool) arr_2 [i_0 - 1]);
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (max((((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_0])) >> (((((/* implicit */int) arr_10 [i_0])) - (188))))) != (((int) 1920U))))), (max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) (unsigned short)31352)) ? (4294965375U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1] [i_3] [i_3])))))))))));
                    var_17 += ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_4 [i_0 - 1]))))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned char) var_4);
}
