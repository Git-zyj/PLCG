/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201380
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
        arr_3 [i_0] [(_Bool)0] = (+(arr_0 [i_0] [i_0]));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                {
                    arr_11 [i_3] [i_3] = ((/* implicit */signed char) arr_4 [i_2]);
                    arr_12 [i_3] [i_2] [i_2] [i_1] = max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)10273)))), ((+(((/* implicit */int) (short)-16135)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_21 [i_1] [i_4] [i_4 - 1] [i_4] [i_5] [(unsigned short)12] = arr_4 [i_6];
                        var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((unsigned long long int) arr_19 [i_5] [i_5] [i_5 - 2] [i_5 - 2] [i_5])))));
                        arr_22 [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)3031)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [i_5 - 2] [i_5] [i_5] [2LL]))))));
                    }
                } 
            } 
            arr_23 [i_4] [i_4 + 4] = ((/* implicit */_Bool) arr_16 [i_1] [i_4 - 2] [i_1]);
            arr_24 [i_1] [i_4] = ((/* implicit */unsigned int) arr_18 [14U] [i_4 - 3] [i_4 - 3] [i_4 + 3]);
            arr_25 [i_1] [i_4] [i_4] = ((((/* implicit */long long int) var_2)) - (((((/* implicit */long long int) ((/* implicit */int) (short)-3019))) - (-4863006738388006370LL))));
        }
        arr_26 [i_1] = ((/* implicit */unsigned int) 4863006738388006370LL);
    }
    var_11 = var_5;
}
