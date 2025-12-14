/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231486
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) var_0);
                var_21 = ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned int) (short)32758)), (614848668U))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_22 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_19))));
        var_23 = ((/* implicit */unsigned char) var_6);
        var_24 = ((/* implicit */int) ((unsigned short) (unsigned short)65526));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            var_25 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_8 [i_3] [i_3])) && (((/* implicit */_Bool) max((arr_10 [19ULL]), (((/* implicit */unsigned long long int) var_6)))))))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) ((signed char) ((unsigned short) 3576559795U)));
                            arr_19 [i_5] = ((/* implicit */short) arr_12 [i_2] [i_2] [(unsigned short)8] [i_5]);
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned short) (signed char)-72);
            var_28 = ((/* implicit */_Bool) (short)30583);
        }
        arr_20 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1628555817)) ? (((/* implicit */int) (short)-30589)) : (((/* implicit */int) (unsigned char)153))));
    }
    var_29 = ((/* implicit */int) var_7);
}
