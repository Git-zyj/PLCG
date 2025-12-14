/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189774
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)15184))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned char) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50352))) : (((unsigned int) ((unsigned short) (short)-7108)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) ((unsigned int) arr_3 [i_1] [i_0]));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((unsigned char) arr_3 [i_2 - 2] [i_1 - 3]);
                                var_14 = ((/* implicit */unsigned char) (+((-9223372036854775807LL - 1LL))));
                                var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((((/* implicit */_Bool) arr_10 [i_0] [i_0])) && (((/* implicit */_Bool) (short)7105)))))))));
                                var_16 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2 - 2] [i_4]))))) ? (((/* implicit */long long int) (+(var_1)))) : (((long long int) var_6)))));
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)7108)) ? (((((((/* implicit */int) arr_6 [i_4] [i_1] [i_4] [i_3])) / (((/* implicit */int) arr_6 [i_4] [i_3 + 1] [i_1] [i_1])))) << (((((/* implicit */int) min((((/* implicit */short) arr_1 [i_1] [i_2])), (arr_0 [i_0] [i_1])))) + (7773))))) : ((~(((((/* implicit */int) (short)-32755)) - (((/* implicit */int) arr_0 [i_4] [i_2]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_10);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (+(var_0))))) < (((/* implicit */int) ((short) min((((/* implicit */long long int) var_7)), (var_0)))))));
    var_20 = ((/* implicit */long long int) (unsigned char)74);
}
