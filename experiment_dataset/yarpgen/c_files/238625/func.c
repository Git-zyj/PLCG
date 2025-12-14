/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238625
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
    var_19 = ((/* implicit */unsigned char) ((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (signed char)119);
                var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (signed char)-115))))) ? ((+(((/* implicit */int) arr_6 [i_0])))) : ((+(((/* implicit */int) arr_5 [(unsigned short)12] [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (signed char i_4 = 2; i_4 < 19; i_4 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((short) (~(((/* implicit */int) arr_9 [i_2 + 1])))));
                        var_23 = ((/* implicit */unsigned int) var_0);
                        arr_16 [i_2] [i_4] = ((/* implicit */signed char) ((arr_9 [i_2 + 2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2 + 2] [i_3])) >= (var_12))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        arr_21 [i_2] [i_2] [i_4] [i_4] [i_6] = ((/* implicit */signed char) ((_Bool) var_3));
                        arr_22 [i_4] [i_4] [12U] [i_4] = ((/* implicit */unsigned int) arr_8 [i_2 - 1]);
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_9 [i_2]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_3] [i_2 + 2]))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_4])) < (((/* implicit */int) (!(((/* implicit */_Bool) 4294967293U)))))));
                        var_27 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) 4294967293U))))));
                    }
                    var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-25172)) < ((-(((/* implicit */int) arr_8 [i_3]))))))), (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)1)), (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)-79)))) : (min((((/* implicit */unsigned int) var_15)), (4294967289U)))))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) + (2220726532U)));
                    var_30 |= min(((signed char)-75), (((/* implicit */signed char) arr_15 [i_2 + 2] [i_2] [i_3] [i_4] [i_4])));
                }
            } 
        } 
    } 
}
