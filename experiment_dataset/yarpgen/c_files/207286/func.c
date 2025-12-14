/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207286
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                {
                    var_13 *= ((/* implicit */unsigned long long int) var_0);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                        var_15 += ((/* implicit */long long int) (unsigned short)17064);
                        arr_9 [i_1] [i_1] = ((/* implicit */signed char) -5546179091762191173LL);
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)17064)))) | (((/* implicit */int) arr_11 [i_2] [i_2 - 2] [i_2] [i_2 - 2]))));
                        arr_13 [11ULL] [i_1] [i_2] [i_1] [i_4] [(short)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_12)))) ? (8702055729047266659LL) : (((/* implicit */long long int) arr_6 [i_2 - 4]))));
                    }
                    var_16 = ((/* implicit */unsigned long long int) (unsigned short)48462);
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)17064)) | (((/* implicit */int) (unsigned short)17074)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_4);
}
