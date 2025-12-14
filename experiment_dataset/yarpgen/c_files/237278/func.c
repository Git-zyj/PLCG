/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237278
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
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) (unsigned short)11415)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))), (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (_Bool)1)))))))))));
                            arr_12 [i_2] [i_1] [i_1] [i_2] [i_1] [(unsigned short)11] [i_4] = ((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned short)5564)) * (((/* implicit */int) (_Bool)0)))) % (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 1] [i_3 - 1] [i_4]))))))) > (((/* implicit */int) (unsigned short)58391))));
                            arr_13 [i_0 - 1] [i_0 - 1] [i_2] [i_0 + 2] [i_0 + 3] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)14)), (((((/* implicit */int) (unsigned short)65527)) & (((((/* implicit */_Bool) (unsigned short)58378)) ? (((/* implicit */int) (unsigned short)7765)) : (((/* implicit */int) (unsigned short)57770))))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0 + 1])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0 + 3]))))) ? (((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_1] [i_0 + 4]))) : ((~(((/* implicit */int) arr_8 [i_0] [i_1] [i_0 - 2]))))));
            arr_14 [i_0 + 1] = ((/* implicit */unsigned short) ((_Bool) ((_Bool) (-(((/* implicit */int) (_Bool)1))))));
        }
        var_22 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)23)))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)676)))) : (((/* implicit */int) (_Bool)1))))));
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1))));
    var_24 = ((/* implicit */_Bool) (((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned short)37691)) ? (((/* implicit */int) (unsigned short)34051)) : (((/* implicit */int) (unsigned short)11408)))))) : (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)54113)) : (((/* implicit */int) (unsigned short)7145))))))));
    var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((var_18), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)45541)))))) : (((/* implicit */int) ((unsigned short) var_4)))));
}
