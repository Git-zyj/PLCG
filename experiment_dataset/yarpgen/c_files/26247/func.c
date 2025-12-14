/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26247
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-6)), ((unsigned char)128)))) - (((((/* implicit */int) var_7)) + (((/* implicit */int) ((signed char) (_Bool)1))))))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((signed char) var_7)))) < (((/* implicit */int) (unsigned char)103))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)192))));
        arr_3 [i_0] [5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [(unsigned short)2])) ? (arr_0 [i_0 + 1]) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)102)) / (((/* implicit */int) (signed char)-12))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (~(((int) var_5)))))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1)))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (1711901472U)));
                        var_19 = ((/* implicit */unsigned short) arr_0 [i_1]);
                    }
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                for (int i_8 = 3; i_8 < 16; i_8 += 3) 
                {
                    {
                        var_20 = (unsigned char)102;
                        var_21 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))) | (3550193193U))), (((/* implicit */unsigned int) (signed char)-1))));
                        var_22 = ((/* implicit */signed char) var_5);
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_8] [i_8 + 2]))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)-32748)) + (((/* implicit */int) arr_17 [(_Bool)1] [i_8 + 2])))))));
                        var_24 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) arr_21 [i_8] [i_8 - 1] [i_8 - 3] [i_8])), (var_8))) << (((max((var_2), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 13498161423676348401ULL)) || (((/* implicit */_Bool) (short)-32761))))))) - (663778782U)))));
                    }
                } 
            } 
        } 
        var_25 -= ((/* implicit */short) min((min((var_11), (((/* implicit */unsigned int) (unsigned char)154)))), (((/* implicit */unsigned int) min((arr_14 [i_5] [i_5]), (var_6))))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_26 = ((/* implicit */long long int) arr_16 [i_9]);
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((var_8) == (arr_22 [i_9] [i_9]))))));
    }
    var_28 ^= ((/* implicit */short) -1334441915);
}
