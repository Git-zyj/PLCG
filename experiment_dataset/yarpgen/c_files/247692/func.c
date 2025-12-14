/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247692
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
    var_11 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((((unsigned long long int) var_10)) << (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_10))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))))));
    var_13 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((min((arr_5 [i_2 + 2] [i_0 + 1]), (arr_5 [i_2 + 2] [i_0 - 1]))) >> (((((/* implicit */int) (short)-20494)) + (20512)))));
                    arr_8 [(short)8] [i_2] [i_1] [(short)8] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (unsigned char)161))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_15 += ((/* implicit */signed char) 5031118689900151650ULL);
                        var_16 -= ((/* implicit */signed char) arr_6 [i_3] [(unsigned char)0] [(unsigned char)0] [i_0]);
                        var_17 = ((/* implicit */signed char) var_5);
                        var_18 = ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)38262))))) : (arr_2 [i_2 - 2]));
                    }
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_4))));
                }
            } 
        } 
    } 
}
