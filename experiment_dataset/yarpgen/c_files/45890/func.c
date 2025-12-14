/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45890
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
    var_20 = ((/* implicit */unsigned char) min((var_20), ((unsigned char)3)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_1 [i_0]))) <= (((((/* implicit */int) arr_9 [i_0 - 1] [i_2 + 2])) - (((/* implicit */int) arr_9 [i_0 + 1] [i_2 + 3]))))));
                        var_22 -= ((/* implicit */signed char) max((max((arr_7 [i_2 - 1] [i_3] [i_0 + 1]), (arr_7 [i_2 - 1] [i_1] [i_0 + 2]))), (((/* implicit */unsigned char) ((_Bool) arr_7 [i_2 - 1] [i_3] [i_0 - 1])))));
                    }
                } 
            } 
            arr_13 [i_0 - 1] [i_1] [i_0] = max((((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)230)), ((short)22)))), (((26U) * (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) var_4)))))))));
        }
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            arr_17 [i_4] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) var_13)) * (((/* implicit */int) max(((unsigned short)5749), ((unsigned short)1747))))));
            arr_18 [i_0] [i_0] = (unsigned short)59797;
        }
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 8; i_5 += 1) 
        {
            for (signed char i_6 = 1; i_6 < 8; i_6 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_28 [i_0] [i_0] [i_0 + 1] [i_0 + 2] = ((/* implicit */signed char) arr_21 [i_5 + 2] [i_6 - 1]);
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-12))))))))));
                    }
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)63)), ((((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [10U] [i_6])) : (((/* implicit */int) var_0))))))))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 17; i_8 += 4) 
    {
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            {
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)53924)) && (((/* implicit */_Bool) arr_29 [i_9 - 1] [i_9 - 1])))))));
                var_26 = ((/* implicit */unsigned short) (short)4096);
                /* LoopNest 3 */
                for (signed char i_10 = 2; i_10 < 14; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 16; i_12 += 1) 
                        {
                            {
                                var_27 -= ((/* implicit */unsigned short) var_0);
                                var_28 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)209)) << (((/* implicit */int) min(((unsigned char)48), (((/* implicit */unsigned char) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                var_29 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) arr_34 [i_8] [i_9])), (arr_29 [i_9] [i_8]))), (((/* implicit */unsigned short) max(((short)8978), ((short)8988))))))), (max((8U), (((/* implicit */unsigned int) var_9))))));
            }
        } 
    } 
    var_30 = var_8;
}
