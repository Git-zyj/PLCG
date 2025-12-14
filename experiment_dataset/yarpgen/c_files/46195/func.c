/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46195
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 16932923859181617292ULL)) ? (16932923859181617269ULL) : (16932923859181617263ULL))))) || (((/* implicit */_Bool) arr_11 [i_3] [i_0] [i_0] [i_1] [i_0] [i_0]))));
                        var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2] [i_3 - 2]))))), ((+(16932923859181617292ULL)))));
                        var_16 = ((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) var_13)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (16932923859181617284ULL) : (arr_11 [i_2] [i_0] [i_1] [(unsigned short)3] [i_0] [i_1 + 2])));
                        var_18 = ((/* implicit */short) ((unsigned long long int) 1513820214527934323ULL));
                    }
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */unsigned short) var_7);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) 1513820214527934352ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (3804235301U))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) 1513820214527934350ULL))))))));
}
