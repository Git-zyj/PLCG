/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204173
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
    var_14 = ((/* implicit */signed char) var_8);
    var_15 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_16 *= ((/* implicit */short) max((min((min((((/* implicit */unsigned long long int) 346009314874609966LL)), (4315775435882182810ULL))), (((/* implicit */unsigned long long int) 6921576183710106555LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (var_0))))));
        var_17 = ((/* implicit */unsigned long long int) (~((~((-2147483647 - 1))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) arr_5 [i_0] [i_1 + 2] [i_2] [i_0]);
                    var_18 = ((/* implicit */unsigned int) min((var_18), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1606927908)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)4666))))))))), (var_12)))));
                    var_19 = ((/* implicit */unsigned long long int) 8387584U);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (signed char i_5 = 3; i_5 < 11; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                arr_20 [i_5] [i_4] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)-11306)))) ? (arr_9 [i_3] [6]) : (((/* implicit */long long int) ((int) (short)-4666)))));
                                arr_21 [i_5] [i_5] = ((/* implicit */int) (-(arr_16 [i_3] [i_5] [i_5] [4U])));
                                var_20 = ((/* implicit */long long int) min((var_20), (((long long int) ((((/* implicit */_Bool) arr_12 [(signed char)9] [i_4] [10])) ? (2867248936U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3] [i_4] [i_5]))))))));
                            }
                        } 
                    } 
                    arr_22 [i_5] [i_5] = ((/* implicit */int) (signed char)35);
                }
            } 
        } 
        var_21 = ((signed char) arr_12 [i_3] [i_3] [i_3]);
    }
    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        var_22 = ((/* implicit */signed char) (short)11296);
        arr_25 [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
        arr_26 [i_8] = ((/* implicit */int) arr_23 [i_8] [(signed char)5]);
    }
}
