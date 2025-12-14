/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5327
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
    var_13 = ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_2]);
                    var_15 = ((/* implicit */unsigned int) min((max((arr_1 [i_1] [i_1]), (arr_1 [i_0] [i_0]))), (((((/* implicit */int) (signed char)120)) != (((/* implicit */int) arr_1 [i_0] [i_1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_5 = 1; i_5 < 24; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((var_16), ((unsigned char)8)));
                                var_17 = ((/* implicit */unsigned char) max((min((((/* implicit */int) (unsigned char)255)), (((1394326854) / (((/* implicit */int) (signed char)-48)))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)56973)) : (((/* implicit */int) arr_14 [i_4] [i_4] [i_7]))))))));
                                arr_22 [i_3] [(unsigned short)24] [i_3] [i_4] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((int) (unsigned short)65535))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((short) var_7)))))));
                                arr_23 [i_3] [i_3] [i_4] [(unsigned short)5] [i_3] = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    arr_26 [i_4] = ((/* implicit */int) arr_13 [i_4] [i_4] [i_4]);
                    arr_27 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)0));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (signed char)-114)))))));
                    var_19 = ((/* implicit */unsigned int) ((signed char) ((signed char) -12)));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            for (int i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_0))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((arr_25 [i_9] [i_10] [i_11]), (var_5)))))))));
                    var_22 |= ((/* implicit */signed char) (unsigned char)159);
                }
            } 
        } 
    } 
}
