/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2627
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) == (min((-5460625713861782188LL), (((/* implicit */long long int) (unsigned short)2)))));
                    var_10 -= ((/* implicit */unsigned long long int) (signed char)-108);
                    var_11 = ((/* implicit */short) ((_Bool) 11870356754119092040ULL));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_12 ^= ((/* implicit */long long int) var_7);
                                var_13 = ((/* implicit */unsigned short) (-(var_6)));
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) : (arr_3 [i_4] [i_1] [i_1]))) ^ ((~(arr_9 [i_0 + 3] [i_0 + 3] [i_2] [i_3])))))))));
                                arr_15 [i_0] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((int) arr_2 [i_2 - 1] [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) ((2041905226U) <= (((/* implicit */unsigned int) var_7)))))) : (arr_9 [i_2 + 1] [i_2] [i_0 + 1] [i_1]))) / (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)110)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 3; i_7 < 24; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            {
                                var_15 = (i_6 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)9219)) << ((((((~(arr_21 [i_6]))) | (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-125)))))))) - (2416018540077012883LL)))))) : (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)9219)) << ((((((((~(arr_21 [i_6]))) | (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-125)))))))) - (2416018540077012883LL))) - (2785992616627404330LL))))));
                                arr_29 [i_6] [i_9] [i_6] [i_8] [i_9] [(short)17] [i_7] = ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_4)) : (((int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (short)21728))) : (var_8)))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) (-(max((((int) arr_17 [i_5] [i_5])), (min((((/* implicit */int) arr_25 [i_5] [i_5] [i_6] [i_6] [i_6] [(signed char)19])), (var_1)))))));
                }
            } 
        } 
    } 
}
