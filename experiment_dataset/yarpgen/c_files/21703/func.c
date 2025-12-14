/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21703
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
    var_20 ^= ((/* implicit */_Bool) (((~(((((/* implicit */int) (signed char)1)) * (((/* implicit */int) var_14)))))) ^ (((/* implicit */int) (((~(((/* implicit */int) (signed char)115)))) < ((+(((/* implicit */int) var_13)))))))));
    var_21 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 8; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 + 1] [i_3] [i_2] [i_1] [i_0]))) / (min((1238061217U), (((/* implicit */unsigned int) (_Bool)1))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */int) var_15)) | (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) ((unsigned char) (signed char)-64))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))));
                                var_25 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]))))));
                            }
                            arr_12 [i_1] [i_0] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_2 - 2] [i_2] [i_2])) & (((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (min((((/* implicit */unsigned int) arr_0 [i_0])), (var_9)))));
                            arr_13 [i_3 - 1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) (short)-30671)) : (((/* implicit */int) (signed char)64))))));
                            arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((unsigned short) (_Bool)0));
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37858))) : (0U))), (((/* implicit */unsigned int) (signed char)-65))));
                arr_16 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)146)) > (((/* implicit */int) var_17))))) : (((/* implicit */int) (signed char)64))))) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) (_Bool)0)))) ^ (((arr_7 [i_0] [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)(-127 - 1))))))) : (((/* implicit */int) var_14))));
            }
        } 
    } 
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)78)) && (((/* implicit */_Bool) (signed char)95))))) % (((/* implicit */int) ((((/* implicit */_Bool) (signed char)60)) && ((_Bool)1))))))) ? (((((/* implicit */_Bool) (+(var_19)))) ? ((-(((/* implicit */int) (short)22696)))) : ((~(((/* implicit */int) (short)8867)))))) : (((/* implicit */int) var_18))));
}
