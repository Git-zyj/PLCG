/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233498
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
    var_16 = ((/* implicit */int) var_15);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_1] [i_2 + 2] [12ULL] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)-55)), (1099511627775ULL)));
                    var_17 ^= ((/* implicit */short) arr_7 [i_2 + 3] [i_1] [i_2] [21LL]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned short)22902))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))) : (min((14536897666131297223ULL), (((/* implicit */unsigned long long int) (unsigned char)217))))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                                arr_16 [i_0] [(_Bool)1] [i_1] [i_3] [i_4] = (~(((((/* implicit */_Bool) arr_11 [i_1] [i_1] [4U])) ? (((/* implicit */unsigned long long int) ((31) * (((/* implicit */int) (signed char)-1))))) : (min((var_14), (((/* implicit */unsigned long long int) 9187363110547861724LL)))))));
                                arr_17 [i_1] [(_Bool)0] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) arr_9 [0ULL] [i_4 + 1] [i_2 + 1]);
                                arr_18 [i_4] [i_1] [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned short) min((max((((/* implicit */short) arr_8 [i_2 + 3] [i_1] [i_4 + 1] [19])), (arr_9 [i_2 + 3] [i_2 + 3] [i_4 + 1]))), (((/* implicit */short) arr_8 [i_2 + 3] [i_1] [i_4 + 1] [i_4 + 1]))));
                                var_19 &= var_10;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) (unsigned char)206);
    var_21 = ((/* implicit */unsigned char) (_Bool)1);
}
