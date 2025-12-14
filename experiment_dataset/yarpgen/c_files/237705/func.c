/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237705
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_19 -= ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_15)) : (72057594037862400LL))) % (((/* implicit */long long int) (+(var_18))))))));
                    var_20 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 + 2] [i_2] [i_2 + 1])) <= (((/* implicit */int) arr_7 [i_2 + 1] [i_2] [i_2 + 2])))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_2] [i_2 + 1])), (arr_3 [i_2 + 3] [i_2 - 1])))) ? (((/* implicit */long long int) 1695627907U)) : (arr_8 [i_2] [i_2 + 3])));
                        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) == (27ULL))) ? (((arr_6 [i_1] [i_1] [i_2 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_1] [i_2 + 3]))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2 + 1])))));
                        var_22 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) (unsigned char)179)) > (((/* implicit */int) arr_9 [i_2 - 1] [10LL] [i_3])))));
                        var_23 *= ((/* implicit */_Bool) ((short) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [10ULL]))) : (4816546623487944176LL))))));
                    }
                    for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        arr_14 [i_2] [i_0] = ((/* implicit */int) (((+(min((((/* implicit */unsigned int) (unsigned char)179)), (var_10))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 22LL)) != (arr_11 [i_4 - 1] [i_2] [i_4 + 2] [i_2 + 3] [i_2] [i_2])))))));
                        arr_15 [i_4 - 1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_6 [i_0] [i_1] [i_0]), (arr_6 [i_0] [i_1] [i_2]))))));
                    }
                    var_24 = ((/* implicit */int) (unsigned char)188);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), ((+(1224382402))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) (short)1792)) : (((/* implicit */int) var_3))))));
}
