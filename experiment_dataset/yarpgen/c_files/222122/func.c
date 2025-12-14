/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222122
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
    var_18 = ((/* implicit */signed char) var_16);
    var_19 = min((var_17), (((((((/* implicit */_Bool) var_3)) ? (var_4) : (var_10))) % (((((/* implicit */int) var_15)) % (((/* implicit */int) (short)9349)))))));
    var_20 = ((unsigned short) (-(((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((var_1), (((/* implicit */short) var_2)))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */int) var_7)) & (min((var_13), (arr_2 [i_0]))))), (((/* implicit */int) max(((signed char)85), ((signed char)65))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [(signed char)14] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_2 - 1] [i_2] [i_2 + 1] [13U])) / (((/* implicit */int) min((arr_6 [i_0]), (((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2] [i_0])))))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((706201022) | (((/* implicit */int) (signed char)-86))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (((-((+(((/* implicit */int) var_1)))))) * (((int) (signed char)-95))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0] [i_1] = (+(arr_8 [(signed char)13] [i_1] [i_2] [i_4]));
                                arr_18 [i_3] [i_1] [i_2] [5] [i_2] = ((/* implicit */int) var_16);
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) var_8);
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((max((arr_15 [i_2 - 1]), (arr_7 [i_4 - 1]))), (((/* implicit */short) ((_Bool) ((345860518) / (((/* implicit */int) arr_15 [i_1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((short)-14593), (((/* implicit */short) arr_16 [i_0]))))) > (((/* implicit */int) ((unsigned short) var_10)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        arr_24 [16LL] [16LL] = ((/* implicit */signed char) var_11);
        arr_25 [i_5] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_22 [i_5])) ^ (((/* implicit */int) (short)25777)))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            {
                                arr_36 [i_6] = ((/* implicit */signed char) arr_26 [i_8]);
                                arr_37 [i_5] [i_6] [i_7] [i_7] = var_15;
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_10 = 1; i_10 < 16; i_10 += 3) 
                    {
                        arr_40 [i_5] [(unsigned short)15] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) ((unsigned int) arr_38 [i_5] [i_7] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1]));
                        arr_41 [i_5] [i_5] [i_10] = ((/* implicit */unsigned char) ((short) ((706201016) - (((/* implicit */int) (signed char)-62)))));
                        arr_42 [i_5] [11U] [(unsigned short)13] [(unsigned short)10] = ((/* implicit */int) var_3);
                        arr_43 [i_6] [i_6] [i_7] [i_10] [i_6] [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_23 [i_6] [i_6]))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_48 [(short)10] [i_6] = ((/* implicit */short) ((long long int) var_9));
                        arr_49 [i_6] [i_6] [i_7] [i_6] = ((/* implicit */int) ((_Bool) var_1));
                        arr_50 [i_5] [(_Bool)1] [i_7] [(signed char)10] [16U] [i_5] = ((/* implicit */short) (_Bool)1);
                        arr_51 [(signed char)2] [i_6] [i_6] [i_11] [i_11] = ((/* implicit */unsigned int) ((_Bool) var_4));
                    }
                }
            } 
        } 
        arr_52 [i_5] = var_3;
    }
}
