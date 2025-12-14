/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226772
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) (unsigned short)5351))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned short) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))) < (((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (unsigned short)34578)) : (((/* implicit */int) (signed char)0))))))), (min((((/* implicit */int) ((unsigned short) arr_5 [i_2] [i_2]))), (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (unsigned short)27905)) : (((/* implicit */int) var_14))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] |= ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (unsigned char)28)))), (((/* implicit */int) (unsigned short)15939)))), ((((-(((/* implicit */int) var_15)))) - (((var_0) ? (((/* implicit */int) (unsigned short)57404)) : (((/* implicit */int) var_16))))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (min((((/* implicit */int) ((unsigned char) var_16))), (((((/* implicit */int) (unsigned short)17261)) * (((/* implicit */int) (unsigned char)12))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) 
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (arr_5 [i_1] [i_0])));
                    arr_17 [i_0] [i_1] [i_5] [i_0] = ((_Bool) ((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_10))))) % (((/* implicit */int) ((signed char) arr_1 [i_5] [i_1])))));
                    arr_18 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_4 [i_5] [i_5 + 1] [i_0]))) >> (((/* implicit */int) min((var_0), (var_3))))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (max((((unsigned short) min(((_Bool)1), (var_16)))), (((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_1] [i_1] [i_5]))))));
                }
                arr_19 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)27905)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8161)))) % (max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)21020)) : (((/* implicit */int) (unsigned short)40555)))), (((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned short) ((var_2) ? ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2)))))) : (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) var_12)))) << ((-(((/* implicit */int) var_15))))))));
    var_23 = ((/* implicit */signed char) var_11);
    var_24 = ((/* implicit */unsigned char) var_4);
}
