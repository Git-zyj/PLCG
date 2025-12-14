/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242781
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
    var_13 &= ((_Bool) min((((/* implicit */unsigned long long int) max(((unsigned char)69), ((unsigned char)110)))), (4ULL)));
    var_14 = (+(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) (+((-(min((((/* implicit */unsigned int) (short)-32753)), (2U)))))));
                var_16 = ((/* implicit */unsigned short) 2599066231U);
                var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(max((-878349451), (var_9)))))) + (max((((/* implicit */long long int) ((short) var_8))), (((long long int) 13073874925599970625ULL))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */int) arr_4 [i_0] [i_0] [i_3])) * (((/* implicit */int) (short)2019)))), (((/* implicit */int) arr_6 [i_2] [i_2] [i_2])))))));
                            var_19 = ((/* implicit */short) arr_1 [i_0]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_17 [i_1] [2U] [i_1] [2U] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) (signed char)-36))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8257879398624534088ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-29833))))) ? (6117024597003243780ULL) : (((/* implicit */unsigned long long int) 68729293))))));
                                var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)23151)) ? (287104476244869120LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249)))))));
                                arr_18 [i_0] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned char) max((-4331006445883458202LL), (((/* implicit */long long int) 2147483640))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 |= 7853469828529102409ULL;
}
