/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205315
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
    var_16 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11)))) : (var_0));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) -731927756487685399LL);
        var_18 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_1 [i_0]))))));
        arr_2 [i_0] = var_0;
        var_19 = ((/* implicit */_Bool) max((((((-731927756487685399LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_1 [i_0])) - (25884))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)17436))))) : ((~(-9223372036854775807LL)))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        for (signed char i_2 = 3; i_2 < 9; i_2 += 2) 
        {
            {
                var_20 = max((((unsigned char) arr_6 [i_2])), (((/* implicit */unsigned char) arr_6 [i_2])));
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_12 [i_2] [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775807LL)))))) : (11475237929747942438ULL))), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 13U)) && (((/* implicit */_Bool) 1849583198)))))))));
                            arr_13 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((_Bool) max((((((/* implicit */_Bool) var_0)) ? (arr_9 [(signed char)6] [(signed char)6] [i_3] [(unsigned char)3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)0)) : (-1515447688)))))));
                        }
                    } 
                } 
                arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(9223372036854775806LL)));
                arr_15 [i_2] [i_2] = ((/* implicit */_Bool) (+((+(((/* implicit */int) ((short) 369616681U)))))));
                arr_16 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) + (arr_0 [0ULL])));
            }
        } 
    } 
}
