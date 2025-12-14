/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30032
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
    var_17 = var_0;
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 - 1]))))) ? (((/* implicit */int) ((short) ((arr_3 [i_1 + 2]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)7936)))))) : (((/* implicit */int) min((arr_1 [i_0 + 1]), (((/* implicit */short) var_1)))))));
                arr_5 [i_1] [i_0] = ((/* implicit */short) ((min((arr_2 [i_1 + 1] [i_1 + 1]), (arr_2 [i_1 + 1] [i_1 + 1]))) ? (((/* implicit */int) ((_Bool) var_12))) : ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)1537))))));
                var_18 = ((/* implicit */int) ((((/* implicit */int) ((min((1263790089), (((/* implicit */int) var_9)))) >= (((/* implicit */int) max((((/* implicit */short) arr_2 [i_0 + 1] [i_0])), (arr_1 [i_1]))))))) <= (((/* implicit */int) var_9))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))))), ((+(((/* implicit */int) ((_Bool) arr_1 [i_0 + 1])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((unsigned char) max(((_Bool)1), ((_Bool)1))));
        arr_10 [i_2] = min((var_2), ((_Bool)1));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_20 = ((_Bool) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) min(((_Bool)1), (arr_8 [(short)8])))) : (((/* implicit */int) min(((_Bool)0), ((_Bool)1))))));
        var_21 = ((((/* implicit */_Bool) ((int) arr_12 [i_3] [i_3]))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [(_Bool)1])) >= (((/* implicit */int) arr_1 [i_3]))))) : (((/* implicit */int) arr_9 [i_3])))));
    }
}
