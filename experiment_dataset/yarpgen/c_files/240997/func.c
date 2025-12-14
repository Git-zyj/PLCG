/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240997
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_17 *= ((/* implicit */unsigned char) (-((+(((/* implicit */int) (signed char)-93))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            var_18 ^= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_1 [i_1])) != (((/* implicit */int) var_8)))));
            var_19 = ((/* implicit */short) (-(((/* implicit */int) ((short) arr_0 [i_0])))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-9946)) * (((/* implicit */int) (short)-9965)))))));
            var_21 ^= ((/* implicit */short) (~(((/* implicit */int) ((short) var_6)))));
        }
    }
    for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        arr_6 [i_2] = ((/* implicit */unsigned short) ((short) (+(((/* implicit */int) ((unsigned char) (unsigned char)188))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 4; i_3 < 11; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)32767)) || (((/* implicit */_Bool) (unsigned char)82)))) && (((/* implicit */_Bool) (unsigned short)23499))))) % (((/* implicit */int) (unsigned char)10)))))));
                    var_23 |= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) min((var_4), (var_13)))) << (((((/* implicit */int) max((((/* implicit */short) (unsigned char)214)), (var_16)))) - (22077))))));
                    arr_13 [i_4] [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned char) min(((~(((/* implicit */int) arr_3 [i_2] [i_4] [(short)7])))), (((/* implicit */int) ((unsigned short) (unsigned short)32769))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_5 = 3; i_5 < 14; i_5 += 3) 
    {
        for (unsigned char i_6 = 3; i_6 < 12; i_6 += 3) 
        {
            {
                arr_18 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)32767)) - (((/* implicit */int) (unsigned char)250))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 1; i_7 < 13; i_7 += 1) 
                {
                    arr_23 [i_5] [i_5] [i_7 - 1] = ((/* implicit */signed char) (~((-(((/* implicit */int) ((short) (unsigned short)65530)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 4; i_8 < 14; i_8 += 2) 
                    {
                        for (signed char i_9 = 3; i_9 < 14; i_9 += 2) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned char) (((((-(((/* implicit */int) var_3)))) & ((-(((/* implicit */int) (unsigned short)32770)))))) ^ (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)15)) != (((/* implicit */int) (short)-9965))))))));
                                var_25 = ((/* implicit */signed char) (~((~(((((/* implicit */int) arr_4 [i_5])) >> (((((/* implicit */int) (unsigned char)82)) - (51)))))))));
                                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((unsigned char) (((+(((/* implicit */int) (unsigned char)16)))) + (((((/* implicit */int) arr_20 [i_9] [i_8 - 4] [(unsigned char)10])) << (((((/* implicit */int) (unsigned char)255)) - (235)))))))))));
                                arr_30 [i_9] [i_8] [i_7] [i_8] [i_5] |= ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)32746)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_27 *= ((/* implicit */short) (~(((((/* implicit */int) ((unsigned short) (unsigned char)0))) >> (((((((/* implicit */int) (signed char)117)) << (((((/* implicit */int) var_0)) + (31357))))) - (3730)))))));
}
