/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193918
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_1 [i_4])), ((-(2297627244009562519LL)))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (+(((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] = (-(max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_9))))))));
                    var_18 = ((/* implicit */unsigned long long int) (short)3274);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) min(((!((!(((/* implicit */_Bool) 262143)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (2297627244009562507LL)))) && (((/* implicit */_Bool) (-(10822414048230766332ULL))))))));
    var_20 = (((_Bool)1) || (((/* implicit */_Bool) 0ULL)));
    var_21 = ((/* implicit */int) var_9);
    var_22 &= ((/* implicit */short) (unsigned short)63488);
}
