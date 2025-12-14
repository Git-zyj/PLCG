/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44034
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
    var_18 -= ((/* implicit */unsigned short) (-(1031035793U)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) ((unsigned int) arr_2 [i_0]));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_20 = (+(((((/* implicit */int) arr_3 [i_0 - 2] [13ULL])) ^ (((/* implicit */int) var_14)))));
                        var_21 = ((/* implicit */unsigned char) arr_6 [i_0]);
                        var_22 = ((/* implicit */signed char) (unsigned char)2);
                        var_23 = var_13;
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */short) var_11);
        var_24 = ((/* implicit */unsigned int) (signed char)95);
        var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [(signed char)8])), (arr_0 [i_0] [6U])))) ? ((+(max((2583639148U), (((/* implicit */unsigned int) var_1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                {
                    arr_22 [i_4] [(unsigned short)8] = ((/* implicit */unsigned short) (signed char)114);
                    var_26 = ((/* implicit */signed char) arr_19 [i_4 + 1] [i_4 + 2] [i_4 - 1]);
                }
            } 
        } 
    } 
    var_27 |= ((/* implicit */int) (short)8438);
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)78)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)56165)) ^ (((/* implicit */int) max(((unsigned short)56180), (((/* implicit */unsigned short) (short)-31517))))))))));
}
