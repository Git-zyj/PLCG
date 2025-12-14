/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215932
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_14 = (signed char)66;
        arr_3 [i_0] = ((/* implicit */_Bool) var_1);
        arr_4 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_0 [i_0])))), (max((arr_2 [i_0]), (((/* implicit */int) (unsigned short)65535))))));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_11 [i_1] [i_2] [i_3]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((8387450217975682893LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-45))))))) : ((~(17762695065163796208ULL)))))));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 4; i_4 < 16; i_4 += 4) /* same iter space */
                    {
                        var_16 = (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [i_2] [14LL])), (var_5)))))) ? (((/* implicit */int) arr_12 [i_4] [i_4 + 4] [i_4 + 1] [1LL])) : (((/* implicit */int) min((arr_13 [i_4 + 3] [i_4 - 1] [i_4 + 3] [i_4]), (((/* implicit */signed char) arr_12 [i_4] [i_4 - 1] [i_4 + 3] [i_4 - 2]))))));
                        var_17 -= ((/* implicit */short) (~(-131072LL)));
                    }
                    for (signed char i_5 = 4; i_5 < 16; i_5 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) 1549268979U))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1634772107)) ? (((/* implicit */int) (short)-1030)) : (((/* implicit */int) (!(((/* implicit */_Bool) -131072LL)))))));
                    }
                    for (unsigned char i_6 = 3; i_6 < 19; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)43))))))))));
                        var_21 += ((/* implicit */unsigned long long int) arr_5 [11ULL] [i_3]);
                    }
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)36617)) ? (4526354594729086389ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))))))));
                    var_23 = ((/* implicit */long long int) (unsigned char)65);
                }
            } 
        } 
    } 
}
