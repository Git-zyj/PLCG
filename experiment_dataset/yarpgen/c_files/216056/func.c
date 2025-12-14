/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216056
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
    var_19 = ((/* implicit */short) ((3819161696U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)1278)))));
    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7)))) != (var_7)));
    var_21 &= ((/* implicit */short) ((((/* implicit */int) var_8)) | (((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) << (((2578657650U) - (2578657619U)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_22 &= arr_3 [i_0];
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 2; i_4 < 13; i_4 += 4) 
                            {
                                var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)511)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)494))) : (3974511736U))) >> ((((~(12U))) - (4294967278U)))));
                                var_24 = arr_12 [i_0] [i_4] [i_2] [i_4 + 2];
                            }
                            for (short i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                            {
                                arr_20 [i_0] [(short)8] [i_3] [i_3] = ((/* implicit */short) max((792046523U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)31)))))));
                                arr_21 [i_3] [i_2] [i_0] = ((/* implicit */unsigned int) ((short) ((((arr_14 [i_0] [i_0]) + (arr_4 [i_1] [(short)14] [14U]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)26906)) == (((/* implicit */int) (short)26211)))))))));
                            }
                            for (short i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
                            {
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_6 [4U]))));
                                arr_24 [i_0] [i_0] [i_1] [11U] [i_2] [i_3] [9U] = max((3974511736U), (((/* implicit */unsigned int) (short)-494)));
                                arr_25 [i_1] [i_2] = ((((/* implicit */unsigned int) ((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) (short)-27499))))) % (4276174147U));
                            }
                            arr_26 [2U] [i_2] [i_2] [14U] = ((/* implicit */short) max((((min((((/* implicit */unsigned int) (short)32767)), (arr_16 [i_0] [i_1] [i_1]))) >> ((((~(((/* implicit */int) arr_17 [i_3] [i_2] [i_2] [(short)13] [i_0] [i_0] [i_0])))) - (27517))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) arr_12 [i_3] [i_2] [i_1] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
