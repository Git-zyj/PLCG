/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232633
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
    var_10 = ((/* implicit */unsigned char) (!((_Bool)1)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */int) (!(((((/* implicit */int) var_3)) != (((/* implicit */int) var_7))))))) ^ ((((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_0])))) % (((/* implicit */int) (unsigned short)38810))))));
                    var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((_Bool) var_1)), (((arr_5 [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))))))))));
                    arr_8 [i_1] = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_3)))) + ((+(((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) + (20802))))))) >= (((/* implicit */int) (_Bool)1))));
                                arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) (signed char)-101);
                                var_13 = ((/* implicit */short) (+(((((/* implicit */int) arr_0 [i_1])) | (((/* implicit */int) (short)-31007))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)14750)) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) arr_14 [i_0] [i_0] [(_Bool)1]))));
    }
}
