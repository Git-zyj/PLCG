/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213542
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
    var_19 = ((/* implicit */signed char) (-(((var_11) / (var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~((-((+(var_9))))))))));
                arr_7 [i_1] = ((/* implicit */int) var_5);
                var_21 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((/* implicit */int) var_16)), ((-(var_7)))))) & ((+((-(var_12)))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    var_22 += (~(((/* implicit */int) (!(((((/* implicit */int) arr_4 [i_0] [i_2])) < (((/* implicit */int) var_16))))))));
                    var_23 = ((/* implicit */long long int) var_11);
                    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2]))));
                    var_25 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((int) var_0))) ? ((~(var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))));
                }
                /* vectorizable */
                for (signed char i_3 = 3; i_3 < 11; i_3 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) (((((~(arr_0 [i_3 - 2]))) + (2147483647))) << (((((/* implicit */int) arr_1 [i_1])) - (120)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            {
                                var_27 &= (-(((/* implicit */int) arr_11 [i_3] [i_3] [i_5] [i_3 - 3])));
                                var_28 = ((/* implicit */signed char) ((arr_6 [i_1] [i_4] [i_4]) > (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                                var_29 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_11 [i_5] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_0])) : (var_1))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */int) arr_6 [i_1] [i_0] [i_3 - 2]);
                }
                for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 11; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            {
                                arr_25 [i_1] [i_1] [i_6] [i_6] [i_6] = (~(var_0));
                                arr_26 [i_0] [i_1] [i_6] [(unsigned short)7] [3] [i_8] = ((/* implicit */unsigned int) ((((((var_9) << (((((/* implicit */int) var_15)) - (16858))))) >= (((/* implicit */int) var_6)))) && (((/* implicit */_Bool) ((((min((((/* implicit */long long int) arr_0 [i_1])), (var_18))) + (9223372036854775807LL))) >> ((((-(var_8))) + (545126029))))))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_0] [i_1] [i_1] = ((max((arr_22 [i_0] [i_0] [i_1] [i_1] [i_6] [i_6] [i_6]), (((int) arr_22 [i_0] [i_1] [i_6] [i_6] [i_1] [(unsigned short)9] [i_0])))) << ((((~(var_1))) - (7656949101502927910LL))));
                }
            }
        } 
    } 
    var_31 = var_15;
}
