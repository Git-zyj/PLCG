/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216096
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) var_8)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) min(((+((+(((/* implicit */int) (short)7556)))))), (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned short)35401))))))));
    }
    var_10 = ((/* implicit */unsigned long long int) ((unsigned int) var_0));
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 1) 
    {
        for (unsigned char i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    arr_14 [i_3] [i_3] = ((/* implicit */long long int) (-(((min((((/* implicit */unsigned int) (unsigned char)233)), (var_3))) & (min((((/* implicit */unsigned int) var_5)), (var_9)))))));
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned char)231), ((unsigned char)27)))) ? (((int) arr_10 [i_1] [i_1 + 1] [i_2] [i_3])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)254))))) ? ((~(((/* implicit */int) (signed char)116)))) : (((((/* implicit */int) var_7)) ^ (arr_5 [i_1])))))));
                    var_12 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_8 [i_2 - 1] [i_2])), (((((/* implicit */_Bool) max(((unsigned char)7), ((unsigned char)23)))) ? (min((((/* implicit */unsigned int) (signed char)97)), (arr_9 [i_1] [i_2] [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (arr_5 [i_2]))))))));
                    arr_15 [i_3] [i_2] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */short) arr_2 [i_1 + 1])), ((short)-21464))))));
                }
            } 
        } 
    } 
}
