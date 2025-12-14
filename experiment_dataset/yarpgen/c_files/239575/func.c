/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239575
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
    for (signed char i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) ((unsigned char) (short)-818))) >= (((/* implicit */int) (short)-818)))));
                arr_6 [i_0] [i_1] [i_0 - 2] = ((/* implicit */_Bool) arr_0 [i_0 - 3]);
            }
        } 
    } 
    var_19 &= ((unsigned short) 9223372036854775807LL);
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) (short)-831);
        arr_10 [10U] |= ((/* implicit */short) -25);
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_20 &= ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18713))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) < (((unsigned long long int) (unsigned short)46823))))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((-1411297496) - (((/* implicit */int) (unsigned short)13926)))))) < (((/* implicit */int) (_Bool)0))));
        var_21 = ((/* implicit */unsigned int) (unsigned short)46279);
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_22 -= ((/* implicit */int) ((long long int) (-(((/* implicit */int) (short)2)))));
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                var_23 -= ((/* implicit */unsigned char) arr_11 [i_3]);
                arr_20 [(_Bool)0] [(signed char)18] [(_Bool)0] [i_5] = (~(min((((((/* implicit */unsigned int) ((/* implicit */int) (short)-840))) ^ (arr_18 [i_3]))), (((/* implicit */unsigned int) ((var_1) ^ (((/* implicit */int) arr_1 [i_3]))))))));
                arr_21 [i_3] [12U] [11U] = ((/* implicit */unsigned long long int) var_1);
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    arr_26 [i_3 - 1] [i_3 - 1] [i_3 - 1] [21U] = ((/* implicit */unsigned int) (signed char)-20);
                    var_24 += ((/* implicit */unsigned short) (_Bool)0);
                }
            }
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)22849)) | (var_12)));
        }
        /* vectorizable */
        for (unsigned short i_7 = 1; i_7 < 20; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 1; i_8 < 20; i_8 += 2) 
            {
                arr_32 [0] [0] [3] [3] = ((/* implicit */unsigned char) arr_14 [i_7]);
                arr_33 [i_3] = ((/* implicit */unsigned short) arr_17 [i_7 + 1] [i_7 - 1] [i_7]);
            }
            var_26 *= ((/* implicit */signed char) ((unsigned int) (unsigned short)13822));
        }
    }
}
