/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30725
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((((arr_1 [i_0] [i_1]) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) 18446744073709551601ULL)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) 4256660246U)))) - (18446744073709551601ULL)))));
                    var_18 += ((/* implicit */int) arr_3 [i_1]);
                    arr_7 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+((~(arr_0 [i_2])))));
                    var_19 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_1) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_1] [i_3 + 1])))))))));
                        var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) var_17))))), ((+(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_14)) : (var_16)))))));
                        arr_10 [i_0] [i_2] [i_3 - 1] = ((((/* implicit */_Bool) max((-129353242), (129353251)))) ? (((/* implicit */int) (unsigned char)219)) : (-1164547958));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 1; i_4 < 23; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) (+(max((arr_14 [i_4 + 2]), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_11 [i_4 - 1] [i_5])), ((short)24663))))))));
                arr_15 [i_4] = ((/* implicit */unsigned int) (+(18446744073709551601ULL)));
                arr_16 [i_4] = ((/* implicit */short) (~(arr_14 [i_4 + 1])));
            }
        } 
    } 
}
