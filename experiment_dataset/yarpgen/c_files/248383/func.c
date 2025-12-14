/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248383
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
    var_13 = ((/* implicit */_Bool) min((((/* implicit */long long int) max((max((var_6), (((/* implicit */int) (unsigned short)14520)))), (min((var_6), (552831821)))))), (((((/* implicit */_Bool) max((-1043470307), (((/* implicit */int) (unsigned short)34502))))) ? ((((_Bool)1) ? (-5710718138218251124LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (-8926846789402825971LL)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] [i_2 - 2] = ((/* implicit */long long int) (+((-(max((var_3), (var_10)))))));
                    var_14 = ((/* implicit */unsigned short) var_10);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_11 [i_3] [i_1] [12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1 + 1]))))) ? ((+(-5301609302774776954LL))) : (min((((/* implicit */long long int) var_11)), (-2495919770266869633LL)))));
                        var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 65535)) ? (((/* implicit */int) arr_3 [i_0] [i_2 - 1])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) arr_6 [i_3] [i_2 - 1] [i_0] [i_0])))))), (var_3)));
                        var_16 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? ((-(var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                    }
                    var_17 = ((/* implicit */long long int) min((var_17), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3483433531U)) ? (((/* implicit */long long int) var_6)) : (arr_7 [i_2] [(_Bool)1] [i_0] [i_0])))) ? (((arr_10 [i_0] [(unsigned short)8] [(unsigned short)8] [i_1] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))) : (-5710718138218251124LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))), (((/* implicit */long long int) (+(((var_11) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            {
                arr_18 [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2495919770266869636LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_11)))))))) : (max((((/* implicit */long long int) (!(arr_16 [7LL])))), (min((((/* implicit */long long int) 131064U)), (-7533679873037257795LL)))))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_9))));
                var_19 = (unsigned short)18062;
            }
        } 
    } 
    var_20 ^= ((/* implicit */_Bool) (~((-(((/* implicit */int) min((var_4), (var_7))))))));
}
