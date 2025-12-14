/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247628
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (arr_4 [i_1])));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0 - 1] [(_Bool)1] [i_4 + 2] [i_1 - 2] [i_4 + 2] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != ((~(((/* implicit */int) var_12)))))))));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-110))))) : (((4294967272U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    for (unsigned int i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6482)) ? (((/* implicit */int) (unsigned short)6482)) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)0) ? (var_11) : (arr_5 [i_5]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) | (((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_6] [i_7])))))))) ? ((((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_19 [i_0 - 1] [i_1] [i_5 + 1] [i_6 - 1] [(_Bool)0])))) : (((/* implicit */int) ((_Bool) ((_Bool) arr_11 [i_7] [i_6] [i_5] [i_1] [i_1 - 1] [i_0]))))));
                                arr_20 [i_1] [i_6] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_16 [i_0] [i_1] [i_6 + 1] [i_7]), (((/* implicit */unsigned short) arr_19 [(signed char)4] [i_1] [i_5 + 1] [i_6] [i_5 + 1]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_5]))))) ? (((/* implicit */int) ((short) arr_14 [i_1] [i_1 + 1] [i_1 + 1]))) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */short) arr_13 [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_1);
    var_20 = ((/* implicit */unsigned short) var_2);
}
