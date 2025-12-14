/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248677
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_3] [i_1] [i_3 + 1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0 + 1] [i_3 + 1]), ((unsigned short)25949)))) ? (((/* implicit */int) ((_Bool) ((_Bool) var_8)))) : (((/* implicit */int) var_12))));
                                arr_17 [i_0] [i_3 + 1] [i_2] [i_0] &= max((min((((/* implicit */unsigned short) var_8)), (var_1))), (((/* implicit */unsigned short) arr_3 [i_0] [i_2] [i_0])));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_2] = (_Bool)1;
                    arr_19 [i_0 + 1] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned short) ((_Bool) arr_13 [i_1] [i_0 - 2] [i_2] [i_1] [i_2])));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_26 [i_7] [(_Bool)1] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)25959)), (((((((/* implicit */int) (unsigned short)39591)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) ((_Bool) (unsigned short)25940))) : ((~(((/* implicit */int) (unsigned short)46826))))))));
                    arr_27 [i_7] [i_5] [i_5] = ((/* implicit */unsigned short) (~((((!((_Bool)1))) ? (((/* implicit */int) arr_6 [i_5])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)25985)) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
}
