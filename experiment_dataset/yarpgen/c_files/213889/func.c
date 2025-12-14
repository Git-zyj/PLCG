/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213889
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
    var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) min((var_11), (((/* implicit */int) min((var_1), ((signed char)51)))))))));
    var_19 = var_15;
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 6; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((((arr_1 [i_0] [i_0 - 1]) & (arr_1 [i_0] [i_0 - 3]))) | ((~(((/* implicit */int) var_17))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 8; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_3] [i_2 - 1] [i_0 - 1])) / (((/* implicit */int) var_17)))) * (min((((/* implicit */int) arr_2 [i_2] [i_2 + 2] [i_0 + 1])), (var_9)))));
                        var_22 = ((/* implicit */int) min(((short)8547), ((short)8547)));
                        var_23 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_6 [i_0] [i_2 + 1] [i_0] [i_3])) ? (((/* implicit */int) arr_2 [9] [i_2 - 2] [i_2 - 3])) : (var_6)))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */short) ((((((/* implicit */int) (short)-25837)) ^ (((/* implicit */int) (short)30999)))) == (min((-1793865822), (2147483647)))));
    }
    for (int i_4 = 3; i_4 < 6; i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] [i_4 + 4] = ((/* implicit */short) (((~(((/* implicit */int) (short)-5484)))) >> (((max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) (short)19181))))))) - (717635548)))));
        /* LoopNest 2 */
        for (short i_5 = 4; i_5 < 7; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    arr_20 [i_4] [i_4] [2] = ((((((/* implicit */_Bool) -491786719)) || (((/* implicit */_Bool) (short)25839)))) ? (((/* implicit */int) ((arr_1 [i_5 - 1] [i_4 - 1]) < (arr_12 [i_4 + 4])))) : (((((/* implicit */_Bool) -879381240)) ? (-1278788051) : (((/* implicit */int) (short)-18616)))));
                    arr_21 [(short)9] [i_5 + 3] [(short)9] = ((/* implicit */short) var_12);
                }
            } 
        } 
    }
}
