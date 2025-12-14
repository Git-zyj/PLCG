/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232484
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
    var_16 = ((/* implicit */unsigned short) var_2);
    var_17 = var_12;
    var_18 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-((+(arr_10 [i_0] [i_0] [i_2] [i_2] [i_3] [i_0])))));
                            var_19 = ((/* implicit */int) (unsigned short)62144);
                        }
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)3406)) / ((~(((/* implicit */int) arr_7 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 - 2]))))));
                    }
                    arr_17 [i_0] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)-10490)), (5789926367456920186LL)));
                }
            } 
        } 
        var_21 = ((/* implicit */int) ((_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]));
    }
    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((var_0) >> (((((/* implicit */int) (short)-31329)) + (31384))))) | (((/* implicit */unsigned long long int) (-(-1))))))) ? (max((var_9), (((/* implicit */unsigned long long int) ((int) arr_11 [i_5] [i_5] [i_5] [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5789926367456920176LL))))))));
        var_23 = ((/* implicit */unsigned short) ((signed char) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5])))), ((~(-200145982))))));
    }
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 2; i_7 < 8; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                {
                    arr_31 [i_6] [i_6] [i_8] [i_6] = ((/* implicit */unsigned int) 6755399441055744LL);
                    arr_32 [i_6] [i_7 - 2] [i_8] = ((/* implicit */unsigned long long int) max((-481780024471623330LL), (6755399441055744LL)));
                }
            } 
        } 
        arr_33 [i_6] = ((/* implicit */unsigned long long int) var_3);
        var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_6 [i_6] [i_6] [i_6]), (((/* implicit */short) arr_11 [i_6] [i_6] [i_6] [i_6])))))));
        var_25 = ((/* implicit */short) (-(((/* implicit */int) (short)-32466))));
        arr_34 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16128)) ? (((/* implicit */int) (short)-32475)) : (((/* implicit */int) (unsigned short)3391))));
    }
}
