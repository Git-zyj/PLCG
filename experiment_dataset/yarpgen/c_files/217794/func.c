/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217794
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0 + 2] = ((/* implicit */int) 4225355211U);
        var_14 += ((/* implicit */unsigned char) -1136282275);
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) 3820262833U);
        var_15 = ((/* implicit */unsigned int) (unsigned char)40);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_11 [i_1] [3LL] |= ((/* implicit */int) 10551686114959756803ULL);
            arr_12 [(unsigned char)11] [10ULL] [i_1] = ((/* implicit */unsigned int) (unsigned char)40);
            var_16 = ((/* implicit */int) (unsigned char)46);
        }
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (int i_4 = 4; i_4 < 21; i_4 += 3) 
            {
                {
                    arr_19 [i_1] [i_1] [i_1] [i_4 - 3] = ((/* implicit */unsigned char) 119037885);
                    var_17 = (unsigned char)68;
                }
            } 
        } 
    }
    for (short i_5 = 1; i_5 < 11; i_5 += 2) 
    {
        arr_23 [4U] = 4225355182U;
        arr_24 [i_5] [i_5 - 1] = 2768670683U;
        var_18 = ((/* implicit */unsigned int) -48866936);
        arr_25 [i_5] [i_5 + 1] = ((/* implicit */int) 2781286104U);
        var_19 -= ((/* implicit */signed char) (unsigned char)95);
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 1; i_6 < 13; i_6 += 3) 
    {
        for (int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-2147483647 - 1)))));
                var_21 = ((/* implicit */int) 4225355181U);
            }
        } 
    } 
    var_22 += ((/* implicit */int) (unsigned char)85);
}
