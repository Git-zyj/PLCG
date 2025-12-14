/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29252
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_11 = ((((long long int) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9611)))))) > (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) (unsigned short)65526)), (arr_1 [i_0])))))));
                                arr_12 [13ULL] [i_1] [i_2 - 1] [i_3] [i_1] [(short)16] [i_4] = var_7;
                                var_12 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9626)))))) % (min((((/* implicit */unsigned long long int) ((int) var_5))), (((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_0] [(signed char)14] [i_2])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89))))) % (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)55924)) % (((/* implicit */int) (unsigned short)9626)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned char)16] [i_2]))) : (4294967294U)));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) min((((/* implicit */int) arr_9 [i_1] [i_1])), ((+(((/* implicit */int) (unsigned short)9611))))))) : (9164211745910729100LL)));
                    arr_13 [i_2 - 2] [i_1] = ((/* implicit */short) ((unsigned char) var_9));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_4);
    var_16 |= ((/* implicit */_Bool) var_8);
}
