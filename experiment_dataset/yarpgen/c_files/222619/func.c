/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222619
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
    var_15 = ((/* implicit */unsigned long long int) min((var_14), (((unsigned short) ((long long int) (short)32767)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) var_12));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-7886)) & (282936568)))) + (min((((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 + 2])), (11666856554086147834ULL))))))));
                    var_17 = ((/* implicit */int) (short)-16384);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (arr_3 [i_3] [i_0 - 1])));
                        var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_0] [i_0 + 3] [i_0 + 3]), (arr_8 [i_0 + 3] [i_0] [i_0 + 3] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 16777215U)) || (((/* implicit */_Bool) 3689023789U)))))) : (((unsigned int) (unsigned char)114))));
                        arr_9 [i_3] [i_1 - 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max(((+(min((arr_7 [i_0 + 2] [i_1] [i_2] [i_0 + 2]), (((/* implicit */unsigned long long int) (short)-32767)))))), (((/* implicit */unsigned long long int) (short)-16357))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_2] |= ((/* implicit */short) ((var_8) == (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 17987279703052757523ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)32759)))), (((/* implicit */int) ((unsigned short) var_13))))))));
                        var_20 = ((/* implicit */unsigned int) min((((unsigned long long int) arr_8 [i_1 - 1] [i_0 + 2] [i_1 - 1] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)49)) / (((/* implicit */int) var_14)))))));
                        var_21 -= ((/* implicit */unsigned int) (short)-23013);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_5 = 4; i_5 < 17; i_5 += 3) 
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [(short)4])))))));
        var_23 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_5 - 3] [i_5 - 3]))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_5])) || (((/* implicit */_Bool) ((unsigned char) arr_14 [i_5])))));
        var_25 = ((/* implicit */unsigned long long int) (short)-16357);
        var_26 = ((/* implicit */unsigned short) ((((unsigned long long int) var_11)) >> (((var_11) + (1534455896)))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        arr_20 [i_6] = ((/* implicit */int) (~(14LL)));
        /* LoopNest 2 */
        for (unsigned int i_7 = 2; i_7 < 16; i_7 += 4) 
        {
            for (unsigned int i_8 = 3; i_8 < 13; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
                        {
                            {
                                var_27 -= ((/* implicit */unsigned int) ((unsigned char) (short)32758));
                                var_28 = ((/* implicit */unsigned long long int) ((unsigned int) (~(2511664972U))));
                                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (-(var_2))))));
                            }
                        } 
                    } 
                    var_30 = ((arr_18 [i_7 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                    var_31 = ((/* implicit */unsigned char) 5U);
                }
            } 
        } 
    }
}
