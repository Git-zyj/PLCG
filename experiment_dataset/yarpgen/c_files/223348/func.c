/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223348
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_2 [i_0] [(short)3]))))))))));
                    var_10 -= ((/* implicit */short) (!(((((/* implicit */int) max(((unsigned short)63510), ((unsigned short)13914)))) >= ((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))));
                    arr_9 [i_2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) min((18446744073709551611ULL), (1ULL))))))));
                    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((arr_0 [i_2]), (((/* implicit */unsigned short) var_9))))) : (((/* implicit */int) var_3)))))))));
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8)))) : (((unsigned long long int) var_0))))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)37039)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
        arr_10 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))))));
    }
    var_13 *= ((/* implicit */short) ((max((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (short)23121)) : (((/* implicit */int) (unsigned short)32564)))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)119)))))) + (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) (short)-23113)) < (((/* implicit */int) (unsigned short)65201)))))))));
    var_14 = ((/* implicit */short) var_9);
}
