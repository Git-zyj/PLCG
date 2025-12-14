/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224930
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
    var_17 *= ((/* implicit */short) (-(((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) arr_0 [i_2]);
                    var_18 = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_6 [i_0] [i_1])) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (-2147483634))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        var_19 = (~(((/* implicit */int) var_15)));
                        arr_15 [i_0] [i_3] [i_4] [i_5] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-103)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_7))))));
                        var_20 = ((/* implicit */unsigned int) (-((~(var_3)))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_6 [i_5] [i_4]))));
                    }
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        arr_19 [i_6] = ((/* implicit */short) arr_13 [i_0] [i_0] [i_4]);
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (((long long int) arr_3 [i_3])))))));
                        var_23 = ((/* implicit */int) arr_5 [i_0] [i_4 - 1] [i_4] [i_0]);
                    }
                    arr_20 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_13 [i_0] [i_3] [i_4])))) : (1806932346631862669LL)));
                    arr_21 [i_0] [i_3] [i_4] = ((/* implicit */signed char) ((short) (-(-1806932346631862650LL))));
                    arr_22 [i_4] [i_3] [i_0] = ((/* implicit */int) ((short) (~(arr_3 [i_0]))));
                }
            } 
        } 
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((long long int) ((short) arr_13 [i_0] [i_0] [i_0]))))));
        var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (signed char)-55))));
}
