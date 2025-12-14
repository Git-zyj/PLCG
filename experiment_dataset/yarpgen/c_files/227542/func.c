/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227542
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2340305420U)) && (((/* implicit */_Bool) 333111370748791457LL))));
                            arr_13 [i_3] [17ULL] [i_2] [i_1] [i_0] = ((/* implicit */long long int) min((arr_11 [i_2] [i_2] [i_2 + 1] [2LL]), (((/* implicit */int) (unsigned char)22))));
                            var_10 = -333111370748791454LL;
                            arr_14 [i_0] [i_1] [10ULL] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)32512)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */int) var_0);
                            var_12 |= ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_4] [(unsigned short)0]))) | (var_0)))));
                            arr_20 [i_5] [i_5] [12LL] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (max((((long long int) var_6)), (arr_3 [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)62))) - (333111370748791457LL)))));
                            var_13 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_4] [i_5]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((333111370748791428LL) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? ((-(770946858753157363ULL))) : (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_0))))))));
}
