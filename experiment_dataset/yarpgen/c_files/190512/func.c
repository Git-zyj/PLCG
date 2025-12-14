/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190512
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) (unsigned short)25441)))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_1);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    arr_18 [(unsigned char)13] [i_4] [i_4] = (~(((((/* implicit */int) arr_11 [i_5])) | (1798900791))));
                    var_15 = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_2)))) | (((1842259545552826339ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) + ((-9223372036854775807LL - 1LL))));
                        arr_22 [i_3] [i_4 - 1] [i_5] = ((/* implicit */signed char) 14U);
                    }
                    var_17 = ((/* implicit */int) var_8);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_10);
}
