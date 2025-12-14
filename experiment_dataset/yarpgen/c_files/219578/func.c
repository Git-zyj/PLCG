/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219578
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_3 + 3] [i_4] [i_4] [(unsigned short)0] [i_0] = -19LL;
                                arr_13 [i_4] = ((/* implicit */short) (signed char)-15);
                                arr_14 [i_0] [i_4] [i_2] = ((/* implicit */short) (_Bool)0);
                                arr_15 [i_0] [i_1] [i_1] [i_2] [(signed char)13] [i_4] [i_4] = ((/* implicit */unsigned char) 36028794871480320LL);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) (signed char)24);
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) (signed char)-15);
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) -7463438012887891058LL);
                            arr_23 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */_Bool) -1824825379);
                            arr_24 [(_Bool)1] [i_5] = 62914560;
                            arr_25 [i_2] = ((/* implicit */unsigned int) (unsigned short)12668);
                            arr_26 [i_0] [i_1] [i_2] [i_2] [i_6] [i_6] = ((/* implicit */int) (signed char)-110);
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_31 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned short)52868);
                        arr_32 [i_0] [10LL] [i_1] [i_2] [i_7] [i_7] = ((/* implicit */_Bool) (unsigned short)30181);
                        var_20 = ((/* implicit */signed char) 852657479);
                    }
                    arr_33 [i_2] [i_2] [(unsigned short)8] = ((/* implicit */int) -849484468882306692LL);
                    var_21 = ((/* implicit */unsigned int) (_Bool)1);
                }
                arr_34 [(unsigned short)15] [i_1] = ((/* implicit */unsigned short) (signed char)15);
                var_22 = ((/* implicit */unsigned int) 7463438012887891057LL);
                arr_35 [i_0] = ((/* implicit */short) (unsigned short)7126);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */int) (signed char)-8);
        var_24 = (_Bool)1;
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) (unsigned short)65535);
        arr_43 [i_9] = ((/* implicit */long long int) (unsigned short)28772);
        var_26 = ((/* implicit */short) (unsigned short)60680);
        var_27 = ((/* implicit */signed char) -4679704285377351582LL);
    }
}
