/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28139
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
    var_13 += ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned char) (-((-(-1LL)))));
                        var_15 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) 30029371U)) / (18323447600890706671ULL))), (18323447600890706681ULL)));
                        var_16 = ((/* implicit */_Bool) var_6);
                        var_17 ^= max((max((((/* implicit */unsigned long long int) arr_4 [i_1])), ((~(123296472818844956ULL))))), (((/* implicit */unsigned long long int) (~(var_8)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 2; i_4 < 14; i_4 += 4) 
                    {
                        var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 354873867073001527LL)) ^ (arr_1 [i_4] [i_4])));
                        var_19 = ((/* implicit */signed char) (unsigned char)104);
                        var_20 = ((/* implicit */short) var_3);
                    }
                    arr_11 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_0])), (var_4)))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0])))))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24062)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned char)3))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((123296472818844945ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1))))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (min((18446744073709551605ULL), (6342799614821649619ULL))))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) max((var_6), (var_8)))))))));
                                var_24 = ((/* implicit */unsigned char) arr_7 [i_0 - 1] [i_0] [i_0] [i_2] [i_0] [i_0]);
                                var_25 += ((/* implicit */short) 8507444236239451560ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
