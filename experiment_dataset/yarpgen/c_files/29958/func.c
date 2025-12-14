/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29958
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) 2ULL);
        var_14 = ((/* implicit */unsigned short) 3985682475U);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) 2147483647U);
                        var_16 ^= ((/* implicit */signed char) 309284806U);
                        var_17 = ((/* implicit */unsigned long long int) (unsigned char)183);
                    }
                    var_18 -= 3985682477U;
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */int) -7460960835694624631LL);
                        var_20 = ((/* implicit */_Bool) 3985682458U);
                    }
                    for (long long int i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) 3985682449U);
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) 7460960835694624638LL))));
                        var_23 = ((/* implicit */int) 309284846U);
                    }
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) -7460960835694624633LL))));
                    var_25 = ((/* implicit */_Bool) 1029012897U);
                }
            } 
        } 
        var_26 *= ((/* implicit */signed char) (unsigned short)65535);
    }
    for (short i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        arr_17 [i_7] [i_7] = ((/* implicit */int) 3417742235350029710LL);
        var_27 = ((/* implicit */unsigned int) (_Bool)0);
    }
    var_28 = ((/* implicit */_Bool) var_6);
    var_29 = ((/* implicit */unsigned int) var_8);
}
