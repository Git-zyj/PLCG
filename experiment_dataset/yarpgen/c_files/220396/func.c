/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220396
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
    var_13 = min((min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)98)))), (min((var_11), (((/* implicit */unsigned int) var_6)))))), (min((((/* implicit */unsigned int) min((var_6), (var_6)))), (max((var_7), (((/* implicit */unsigned int) var_5)))))));
    var_14 &= ((/* implicit */unsigned int) min(((_Bool)0), ((_Bool)1)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((min((((/* implicit */unsigned char) (_Bool)1)), (var_3))), (((/* implicit */unsigned char) min((arr_2 [i_0]), (arr_0 [i_0]))))))), (max((((/* implicit */unsigned int) max(((unsigned char)120), (((/* implicit */unsigned char) (_Bool)1))))), (max((((/* implicit */unsigned int) (_Bool)0)), (0U)))))));
                var_16 = min((min((min((4294967295U), (((/* implicit */unsigned int) (_Bool)0)))), (min((2439132859U), (((/* implicit */unsigned int) var_3)))))), (min((1349355220U), (((/* implicit */unsigned int) (_Bool)1)))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (min((max((max((var_2), (((/* implicit */unsigned int) arr_1 [i_0])))), (((/* implicit */unsigned int) max((arr_1 [i_1]), (var_12)))))), (((/* implicit */unsigned int) min((min(((unsigned char)23), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) min(((signed char)-45), ((signed char)38)))))))))));
                var_18 = max((min((min((2390642403U), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) min((((/* implicit */signed char) arr_4 [i_0] [i_0] [i_1])), ((signed char)22)))))), (((/* implicit */unsigned int) max((((/* implicit */signed char) max((var_1), ((_Bool)1)))), (max((arr_1 [i_0]), (arr_1 [i_1])))))));
            }
        } 
    } 
}
