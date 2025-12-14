/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215865
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) var_0);
        var_10 = ((/* implicit */unsigned long long int) var_3);
        var_11 = var_9;
        var_12 = ((/* implicit */long long int) var_3);
        var_13 = ((/* implicit */long long int) var_2);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_14 = ((/* implicit */short) max((var_14), (var_6)));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            {
                                arr_18 [17] [10LL] [i_3] [3ULL] [10U] = ((/* implicit */unsigned short) var_1);
                                arr_19 [i_1] [8] [12ULL] [(_Bool)0] [(unsigned short)1] [i_1] = ((/* implicit */short) var_8);
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_8))));
                            }
                        } 
                    } 
                    arr_20 [(unsigned char)4] = var_0;
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_1))));
    }
    for (short i_6 = 2; i_6 < 12; i_6 += 4) 
    {
        var_17 += ((/* implicit */unsigned short) var_1);
        var_18 = ((/* implicit */unsigned char) var_5);
        var_19 = var_2;
    }
    var_20 = ((/* implicit */unsigned long long int) var_4);
    var_21 = var_0;
}
