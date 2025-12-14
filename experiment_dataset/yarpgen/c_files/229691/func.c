/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229691
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
    var_17 = (_Bool)0;
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))));
                        arr_9 [i_0 - 2] [i_0 - 2] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */int) max(((unsigned short)27790), ((unsigned short)27790)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        for (int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            {
                arr_14 [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) var_10);
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((+(((((/* implicit */_Bool) 1844027845)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))))) : ((+(((/* implicit */int) (unsigned char)164))))));
                    arr_18 [i_4] [i_4] [(signed char)13] [(unsigned char)11] = var_16;
                    var_21 = ((/* implicit */unsigned char) min((var_21), (var_15)));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_7 = 1; i_7 < 16; i_7 += 4) 
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) 2932021098U))));
                    arr_21 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 562424931)) ? (((/* implicit */int) (unsigned short)40270)) : (((/* implicit */int) (unsigned short)48572))))) ? (((/* implicit */int) (unsigned short)27790)) : (((var_8) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)20319))))));
                    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)8771))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
                    var_26 = ((/* implicit */unsigned char) (((_Bool)1) ? (1158429791U) : (((/* implicit */unsigned int) -562424921))));
                }
            }
        } 
    } 
}
