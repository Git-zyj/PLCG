/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202242
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_4 [i_0] [i_0]))))));
                arr_5 [(unsigned short)2] [(unsigned short)2] &= var_5;
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (unsigned short i_3 = 4; i_3 < 12; i_3 += 1) 
        {
            {
                arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((unsigned short) arr_6 [i_3] [(_Bool)1])), (((/* implicit */unsigned short) min((arr_7 [i_2]), ((_Bool)1))))))) - ((+(((/* implicit */int) (_Bool)1))))));
                arr_12 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) min(((((_Bool)0) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)57639)) < (((/* implicit */int) arr_9 [i_2] [i_2]))))))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)54140))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (unsigned short)58521)))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        for (unsigned short i_5 = 4; i_5 < 14; i_5 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_21 [i_6])) & (((/* implicit */int) var_5)))) << ((((-(((/* implicit */int) var_10)))) + (44189)))))) && (((_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)34231)) : (((/* implicit */int) (unsigned short)851)))))));
                            arr_25 [i_6] = ((/* implicit */_Bool) var_8);
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */_Bool) arr_19 [i_5 - 2] [i_5 + 2] [i_5 + 2]);
            }
        } 
    } 
}
