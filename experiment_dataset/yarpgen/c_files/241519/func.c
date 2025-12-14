/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241519
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
    var_20 = (unsigned char)95;
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)37977)) ? ((((~(((/* implicit */int) var_1)))) ^ (((((/* implicit */int) (unsigned char)121)) | (((/* implicit */int) (unsigned char)125)))))) : (((/* implicit */int) (unsigned short)15636))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_22 = var_17;
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) (unsigned short)37752);
            /* LoopSeq 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))));
                arr_11 [i_0] [2U] [i_1] [(unsigned char)0] |= (!((_Bool)1));
            }
            for (unsigned int i_3 = 2; i_3 < 18; i_3 += 3) 
            {
                arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0] [(_Bool)0] [i_0])) * (((((/* implicit */int) var_5)) >> (((/* implicit */int) (_Bool)1))))));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(arr_8 [3U] [3U] [i_1])))) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)49894)) || ((_Bool)1))))));
            }
            var_25 = ((/* implicit */short) max((var_25), ((short)-15284)));
        }
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_4))));
            /* LoopNest 3 */
            for (unsigned short i_5 = 2; i_5 < 19; i_5 += 1) 
            {
                for (short i_6 = 1; i_6 < 18; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_10))));
                            var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)16] [i_6 - 1])))))));
                        }
                    } 
                } 
            } 
            arr_26 [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))) <= (1322867432U)));
        }
    }
    var_29 = ((/* implicit */_Bool) var_16);
}
