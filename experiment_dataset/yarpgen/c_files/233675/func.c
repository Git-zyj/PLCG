/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233675
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~((~(((/* implicit */int) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) arr_2 [i_1])))))))));
                var_21 *= (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)15)))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */int) (+((+((~(0ULL)))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_5))))))))))));
                    arr_11 [i_0] [i_0] [i_1] [i_2] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33544))))));
                    arr_12 [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((+(3ULL))))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((-(278484333519777575LL))))))));
    var_24 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_3 = 1; i_3 < 10; i_3 += 1) 
    {
        var_25 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33528)))))));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_9 [6U] [4] [i_3 - 1])))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (unsigned short i_6 = 1; i_6 < 24; i_6 += 4) 
            {
                {
                    arr_26 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (-((+((-(((/* implicit */int) (unsigned short)45567))))))));
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        var_27 |= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (~(-278484333519777575LL))))))));
                        arr_29 [i_4] [i_5] [i_4] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)33544))));
                        var_28 = ((/* implicit */unsigned short) (+((~((-(((/* implicit */int) arr_21 [(short)23]))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        arr_32 [i_4] [i_5] [i_4] [(short)16] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1ULL)))))));
                    }
                }
            } 
        } 
        arr_33 [i_4] = ((/* implicit */unsigned short) (~(18446744073709551615ULL)));
    }
    for (short i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_8)))))))));
        var_31 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-(arr_23 [i_9] [i_9]))))))));
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (~((+((+(284217583061269190LL))))))))));
    }
}
