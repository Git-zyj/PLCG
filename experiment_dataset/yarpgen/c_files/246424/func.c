/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246424
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) var_7);
                                arr_12 [i_4] [i_4] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1] [i_4])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_4])) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))) ? (4112060216551322285LL) : (((/* implicit */long long int) (~(((/* implicit */int) var_14)))))));
                                arr_13 [i_0] [i_1] [i_1] [3U] [i_3] [i_4] = ((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_0 - 1] [i_4] [i_1]);
                            }
                        } 
                    } 
                    arr_14 [20U] [i_1 + 2] [i_1] = ((/* implicit */short) arr_10 [i_0] [i_1 - 1] [i_1 - 1] [i_1] [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((-4112060216551322286LL) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6))))));
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_20 [i_5] [i_5] [i_5]) ? (max((4112060216551322285LL), (-4112060216551322285LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (max((4112060216551322297LL), (((/* implicit */long long int) var_12)))) : ((+(-4112060216551322295LL)))));
                        arr_25 [i_8] [i_7] [i_6] [i_5] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_18 [5] [i_6] [i_6])) ? (((/* implicit */int) arr_18 [i_5] [(short)10] [i_8])) : (((/* implicit */int) arr_18 [i_5] [i_5] [i_7])))), (((/* implicit */int) arr_18 [i_5] [8LL] [7U]))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */short) (((~(-4112060216551322286LL))) / ((-(((((/* implicit */_Bool) -4112060216551322285LL)) ? (-4112060216551322300LL) : (-4112060216551322295LL)))))));
    var_22 = ((/* implicit */short) var_3);
}
