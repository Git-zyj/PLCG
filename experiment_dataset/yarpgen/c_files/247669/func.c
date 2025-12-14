/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247669
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
    var_20 = (-(((unsigned long long int) var_13)));
    var_21 = ((/* implicit */unsigned int) (~(max((((/* implicit */int) ((signed char) (unsigned short)55699))), ((-(var_14)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_22 &= ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65529)), ((-(((/* implicit */int) arr_2 [i_0]))))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_15);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_6 [i_1 - 1] [i_0 + 1] [i_0] [i_0 - 1])), (((signed char) arr_7 [i_0 + 1]))));
                    var_24 = ((/* implicit */unsigned char) var_14);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        var_25 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)65535))));
                        var_26 *= ((((/* implicit */int) ((_Bool) arr_3 [i_2]))) >= (((/* implicit */int) arr_2 [i_0 - 1])));
                        arr_10 [i_3 + 1] [i_2] [i_2] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)230)) <= (((/* implicit */int) arr_6 [i_3 + 1] [i_3] [i_3 + 2] [i_3 + 1]))));
                        var_27 &= ((/* implicit */unsigned short) var_2);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) var_4);
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) (unsigned short)37730)))) != (arr_3 [i_1 - 1]))))) < (max((arr_8 [i_0 + 1]), (arr_8 [i_0 + 1])))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) arr_13 [i_1 - 1] [i_4] [i_1 - 1] [i_1 - 1] [i_0 + 1]))))) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_2] [i_2])) : (((/* implicit */int) max((arr_13 [i_1 - 1] [i_1] [i_1] [i_2] [i_0 - 1]), (arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_4] [i_0 + 1]))))));
                    }
                }
                arr_14 [i_0 - 1] [i_1 - 1] = ((/* implicit */int) arr_12 [i_0] [i_0] [i_1 - 1] [i_1]);
            }
        } 
    } 
    var_31 ^= ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)251)), ((unsigned short)65529)))))));
    var_32 = ((/* implicit */unsigned char) var_4);
}
