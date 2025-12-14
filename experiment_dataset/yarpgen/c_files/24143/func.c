/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24143
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
    var_10 = ((((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)0)))), (((int) (_Bool)1))))) ? ((((-(((/* implicit */int) var_0)))) * (max((((/* implicit */int) (unsigned char)124)), (var_8))))) : (((/* implicit */int) ((unsigned char) (unsigned char)126))));
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_7 [22] [(_Bool)1] [(unsigned char)9] [13] = ((/* implicit */unsigned char) (_Bool)1);
                    var_12 = ((/* implicit */unsigned char) -449391370);
                    arr_8 [(unsigned char)16] [i_1] [i_1] = min((max((max((947258477), (((/* implicit */int) (unsigned char)138)))), (((arr_4 [10] [i_1]) % (((/* implicit */int) var_3)))))), (((/* implicit */int) (_Bool)0)));
                    arr_9 [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_5 [18] [i_1] [i_0])))) ? (max((((((/* implicit */int) arr_1 [4] [(_Bool)1])) | (arr_2 [i_1]))), (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))) : (((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) || (((/* implicit */_Bool) arr_2 [i_1]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)11] [i_2])))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) (~((-2147483647 - 1))));
}
