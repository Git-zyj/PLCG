/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51824
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (var_15)))) ? (((unsigned long long int) min((var_12), (((/* implicit */unsigned char) var_2))))) : (((/* implicit */unsigned long long int) (~(((unsigned int) 0U))))));
    var_18 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (17392246016547857728ULL))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned short)65531), (((/* implicit */unsigned short) var_9))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_4] [i_1 - 1] [i_2 - 4] [i_1 - 1] [i_0] [i_0])) ? (((var_15) + (((/* implicit */int) arr_8 [i_3 + 3] [i_4] [i_3 + 1] [i_3 + 3] [i_2 + 2])))) : (((((/* implicit */int) (short)-18309)) & (((/* implicit */int) arr_9 [i_2] [i_2] [i_2 + 1] [i_3 + 2] [i_2]))))));
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned char) ((max((var_15), (((/* implicit */int) var_3)))) & (arr_2 [i_1 - 2] [i_2 + 1])))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [(signed char)9] [i_2 + 1]);
                }
            } 
        } 
    } 
}
