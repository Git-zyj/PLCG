/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222103
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
    for (long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] = (-(((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1689529836196505685LL)))))) : (((long long int) arr_3 [i_0])))));
                arr_6 [i_1 - 1] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_3 [i_0]) == (var_6))))));
                var_12 = arr_1 [i_1] [i_0];
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_2 = 4; i_2 < 9; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (long long int i_4 = 3; i_4 < 9; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_13 = (-(((((/* implicit */_Bool) var_0)) ? (arr_7 [i_2]) : (-1689529836196505689LL))));
                        var_14 = -1689529836196505689LL;
                        var_15 = ((long long int) (~(-665655991146918179LL)));
                    }
                } 
            } 
        } 
        var_16 = ((((/* implicit */_Bool) arr_12 [i_2 - 4])) ? ((+(1841544526027495084LL))) : (arr_7 [i_2 - 4]));
        var_17 = ((((7858169251068063870LL) == (var_9))) ? (var_5) : (var_10));
    }
    for (long long int i_6 = 3; i_6 < 8; i_6 += 2) 
    {
        var_18 += ((((/* implicit */_Bool) (+((-(var_3)))))) ? (5325881818740797LL) : ((-(min((2588234922829731771LL), (var_2))))));
        /* LoopSeq 1 */
        for (long long int i_7 = 2; i_7 < 11; i_7 += 1) 
        {
            var_19 = ((((/* implicit */_Bool) var_9)) ? ((-(((long long int) var_6)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 665655991146918152LL)) ? (-4447598699420909543LL) : (665655991146918190LL)))) ? (var_9) : (((((/* implicit */_Bool) arr_3 [i_6])) ? (-4177939946548787038LL) : (var_11))))));
            var_20 = ((/* implicit */long long int) min((var_20), (min((arr_21 [i_6] [i_6] [i_6 + 4]), (min((-4325919850591285609LL), (((((/* implicit */_Bool) var_1)) ? (var_5) : (var_0)))))))));
        }
        /* LoopNest 2 */
        for (long long int i_8 = 1; i_8 < 10; i_8 += 2) 
        {
            for (long long int i_9 = 1; i_9 < 11; i_9 += 1) 
            {
                {
                    arr_26 [i_6] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) & (8403219840998144847LL)))) ? (((((/* implicit */_Bool) var_2)) ? (-8529323810254738159LL) : (var_0))) : (min((var_10), (var_6)))))) ? ((~(1718216123260646604LL))) : (((((/* implicit */_Bool) min((-16LL), (var_2)))) ? (-8403219840998144876LL) : ((+(var_2))))));
                    var_21 = (((+(3013615652932267679LL))) * (((/* implicit */long long int) ((/* implicit */int) ((min((72053195991416832LL), (var_11))) >= (var_2))))));
                }
            } 
        } 
    }
}
