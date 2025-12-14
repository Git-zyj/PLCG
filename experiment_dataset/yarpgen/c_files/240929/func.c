/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240929
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
    var_18 = ((/* implicit */unsigned int) (!(var_12)));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((var_8) ? (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (var_5)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 6; i_4 += 2) 
                        {
                            {
                                arr_14 [(signed char)6] [i_3 - 2] [i_2] [(signed char)6] [(_Bool)1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (((!(var_8))) ? ((+(((/* implicit */int) var_15)))) : (((((/* implicit */int) arr_13 [i_4] [i_3] [i_2] [i_0] [i_0])) << (((((/* implicit */int) (short)27741)) - (27739)))))))), (max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (2341154758U)))))));
                                arr_15 [i_0] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2] [i_2] [i_0]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4 + 2] [(unsigned char)9] [i_3] [i_2] [i_0] [i_0])))))) ? (((/* implicit */int) max(((unsigned short)14191), (((/* implicit */unsigned short) arr_1 [i_3 + 1]))))) : ((~(((/* implicit */int) var_17)))))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_12 [i_2] [i_2] [i_0 + 1] [i_2] [i_0 + 1] [i_0] [i_0]), (arr_1 [i_1 - 2])))) << ((((-(((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (var_6))))) + (2)))));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)260))))) ? (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0]))))))))));
        arr_18 [i_0] = ((/* implicit */signed char) (~(((var_1) << (((((/* implicit */int) arr_3 [i_0 - 2])) - (31744)))))));
        arr_19 [i_0] = ((/* implicit */signed char) (-(((((var_8) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(unsigned short)5])))) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)18808))))))));
        arr_20 [i_0] = ((/* implicit */unsigned short) var_7);
    }
}
