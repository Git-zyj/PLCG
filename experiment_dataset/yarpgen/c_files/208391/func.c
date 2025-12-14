/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208391
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
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (unsigned char)114)), (max((((/* implicit */unsigned short) var_5)), (var_2)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_18 -= ((/* implicit */unsigned long long int) min(((short)14317), (((/* implicit */short) ((((/* implicit */int) (unsigned char)197)) != (((/* implicit */int) var_12)))))));
        var_19 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (max((((/* implicit */unsigned int) ((((/* implicit */int) (short)-30493)) | (((/* implicit */int) (_Bool)1))))), (max((271093052U), (arr_1 [i_0])))))));
        var_20 = ((/* implicit */signed char) (-(var_3)));
        var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30490)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) : (13499884134349255264ULL)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned int) var_6);
                    arr_10 [i_3] [i_3] = ((/* implicit */_Bool) 837316561U);
                    var_23 ^= ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)19)))))));
                }
            } 
        } 
        var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 288230376151711743LL)) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_8 [i_1 - 4] [i_1 - 4]))));
        arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) ((arr_13 [i_1] [i_1 - 2]) || (((/* implicit */_Bool) -351982529))));
                        var_26 *= ((/* implicit */short) ((unsigned char) arr_18 [i_1 + 3] [i_4] [i_5] [i_6] [i_5]));
                        arr_19 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1 + 2])) ? (var_3) : (((/* implicit */unsigned int) arr_14 [i_1] [4LL] [i_1 + 3]))));
                        var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (signed char)95))))) : (((/* implicit */int) (unsigned short)44478))));
                    }
                } 
            } 
        } 
    }
}
