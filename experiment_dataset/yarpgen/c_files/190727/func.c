/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190727
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_12))))) % (((/* implicit */int) ((unsigned char) var_8))))))));
    var_17 = var_6;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 7; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((unsigned char) ((((/* implicit */int) ((unsigned char) var_14))) % (((/* implicit */int) var_2)))))));
                    var_19 += ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (unsigned char)3))) >= (((((/* implicit */int) (unsigned char)62)) % (((/* implicit */int) (unsigned char)220))))));
                    arr_6 [i_0] [i_1] [i_0] [i_0] = ((unsigned char) ((unsigned char) arr_4 [i_2 - 2] [i_2 - 1] [i_2 + 2]));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)133)) ^ (((/* implicit */int) (unsigned char)255)))) >= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_3])) <= (((/* implicit */int) var_9))))) >= (((/* implicit */int) ((unsigned char) var_8)))))))))));
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)136)) % (((/* implicit */int) ((unsigned char) (unsigned char)11))))) >= (((((/* implicit */int) ((unsigned char) (unsigned char)28))) % (((/* implicit */int) ((unsigned char) arr_9 [i_3])))))));
    }
}
