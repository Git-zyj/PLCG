/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193968
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
    var_19 *= ((/* implicit */signed char) var_1);
    var_20 = var_12;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2])), (var_11))))) % (((unsigned long long int) (-(((/* implicit */int) arr_0 [i_0])))))));
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)47145))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (max((1211710751958239040LL), (((/* implicit */long long int) (unsigned short)0)))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))));
                        arr_10 [i_0] [(unsigned short)4] [i_1] [i_3] [4] &= ((/* implicit */unsigned int) (((-(((/* implicit */int) var_7)))) > (max((((/* implicit */int) arr_5 [i_0] [i_3] [i_2])), (((((/* implicit */_Bool) 449150185U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
                    {
                        var_22 += (_Bool)1;
                        arr_13 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) (unsigned short)65535);
                        var_23 = ((/* implicit */int) min(((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [i_4] [9] [i_1] [i_1] [i_1]))))))), (((14151510629210819197ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_4])))))));
                    }
                }
            } 
        } 
    } 
}
