/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2464
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
    var_13 = ((/* implicit */long long int) var_3);
    var_14 = ((/* implicit */signed char) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) 8058535260620065531LL);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_15 &= ((/* implicit */signed char) (_Bool)0);
            arr_7 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
            var_16 = ((/* implicit */long long int) (signed char)-10);
            var_17 = ((/* implicit */signed char) (_Bool)1);
            var_18 ^= ((/* implicit */unsigned short) 70300024700928LL);
        }
        /* LoopSeq 1 */
        for (signed char i_2 = 4; i_2 < 14; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) (signed char)35);
            var_20 = 70300024700949LL;
        }
    }
    for (signed char i_3 = 2; i_3 < 10; i_3 += 2) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) 4393751543808ULL))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 3) 
        {
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */signed char) 12915207770046786763ULL);
            arr_18 [i_4] = -70300024700950LL;
        }
        var_22 &= ((/* implicit */_Bool) (short)29115);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 2; i_6 < 8; i_6 += 1) 
            {
                arr_25 [(signed char)3] [i_5] [i_6] = (signed char)-66;
                var_23 += ((/* implicit */short) (unsigned char)43);
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (signed char)-48))));
                arr_26 [i_5] [(signed char)2] &= ((/* implicit */unsigned short) 523889684U);
            }
            /* LoopSeq 1 */
            for (unsigned short i_7 = 2; i_7 < 9; i_7 += 2) 
            {
                var_25 = ((/* implicit */short) (unsigned char)126);
                var_26 = ((/* implicit */unsigned int) -70300024700918LL);
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (signed char)47))));
            }
            var_28 += ((/* implicit */signed char) (_Bool)1);
        }
        arr_29 [i_3] = ((/* implicit */unsigned long long int) -19LL);
    }
    var_29 = ((/* implicit */unsigned int) var_1);
    var_30 = ((/* implicit */signed char) var_12);
}
