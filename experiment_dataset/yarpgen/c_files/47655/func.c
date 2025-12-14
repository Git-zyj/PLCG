/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47655
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
    var_17 = ((/* implicit */int) var_10);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = (~(((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_7)))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_11)))))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        arr_7 [(_Bool)1] [(_Bool)1] = (!(((/* implicit */_Bool) max(((unsigned short)47816), (((/* implicit */unsigned short) arr_6 [i_1]))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 2; i_4 < 19; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((((int) (_Bool)0)), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_0)) | (((/* implicit */int) (unsigned short)47809))))))));
                        var_20 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_13 [i_2] [i_4 - 2] [i_4 - 2] [i_2])))), (((/* implicit */int) var_3))));
                        var_21 = arr_4 [i_1] [i_2];
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        for (long long int i_6 = 3; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_22 [16] [i_6] [i_3] [i_5] [i_6] |= ((/* implicit */signed char) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) 2141503491)))))))));
                                var_22 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_18 [i_2] [i_5 + 1] [i_2] [i_6 + 2] [(short)15] [1]), (var_7))))));
                                var_23 = ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 7587600307894964526ULL)))))));
        var_25 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)18048))));
        var_26 = max((((/* implicit */int) arr_4 [i_1] [i_1])), ((-(((/* implicit */int) (unsigned short)47806)))));
    }
    for (long long int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_11 [i_7])) == (((/* implicit */int) var_7)))))));
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_7))));
                var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
            }
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) ((signed char) (unsigned char)0))) : (((/* implicit */int) var_4)))))));
        }
    }
}
