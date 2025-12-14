/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245996
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
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-18679)) ? (5781681033860083201LL) : (2549953512913608132LL)));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_10);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (-(max((max((arr_13 [i_4]), (((/* implicit */int) arr_12 [i_3] [i_3] [i_4 + 1])))), ((-(((/* implicit */int) arr_10 [i_3] [i_4 - 1]))))))));
                var_15 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))), (max((18014398509481984LL), (((/* implicit */long long int) var_8)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            {
                arr_20 [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned int) ((int) max((((/* implicit */long long int) (short)16380)), (-18014398509481986LL)))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_16 [i_5])))), (((((/* implicit */_Bool) 3325800099U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)36044)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((short) 14840788201541691477ULL));
}
