/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235874
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)28)) / (((/* implicit */int) var_13))))))) || (((/* implicit */_Bool) min(((unsigned char)249), (arr_2 [i_0]))))));
                    var_21 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) max((arr_6 [i_0]), (arr_2 [i_0])))))), (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_8))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_22 = var_4;
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) var_10)))))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((var_19), ((unsigned char)249)))) ? (((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) : ((-(((/* implicit */int) (unsigned char)186)))))), (((/* implicit */int) (unsigned char)224)))))));
    var_25 = var_19;
}
