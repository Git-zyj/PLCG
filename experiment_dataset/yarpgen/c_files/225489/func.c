/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225489
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((((/* implicit */unsigned long long int) arr_2 [i_1] [(signed char)8])), (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) var_5)) : ((+(11406586396092459589ULL))))))))));
            arr_6 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1])) ? ((+(var_11))) : ((+(var_11)))))));
            /* LoopNest 3 */
            for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) ((unsigned char) max((arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (((/* implicit */int) var_10)))));
                            arr_13 [i_0] [1] [13] [13] [10ULL] = ((/* implicit */unsigned int) var_10);
                        }
                    } 
                } 
            } 
            arr_14 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (short)16380))));
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_18 [i_5] = (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-14672)), (var_11)))))));
        arr_19 [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((signed char) var_4))), (114688U)));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (long long int i_7 = 2; i_7 < 19; i_7 += 1) 
            {
                {
                    arr_26 [(short)15] [i_7] [(short)15] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (7040157677617092026ULL)))) > (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))), (((unsigned long long int) ((_Bool) arr_17 [i_5])))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        for (short i_9 = 4; i_9 < 18; i_9 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_15 [i_7 - 1])))) | (((/* implicit */int) max((arr_31 [i_8] [(signed char)4] [2ULL] [i_9 + 3] [i_9]), (arr_31 [i_5] [i_5] [i_5] [i_9 + 3] [i_9]))))));
                                arr_33 [i_5] [i_6] [i_7] [i_6] [i_9] = ((/* implicit */short) (-(7040157677617092027ULL)));
                                arr_34 [i_5] [(unsigned short)20] [i_7] [i_9] [i_7] [i_7] = ((/* implicit */unsigned char) ((unsigned long long int) 11406586396092459589ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_35 [(unsigned char)5] = ((/* implicit */int) ((unsigned int) (short)-5516));
        arr_36 [13U] |= ((/* implicit */unsigned int) (_Bool)1);
    }
    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        arr_40 [i_10] = ((/* implicit */_Bool) ((signed char) max((var_5), (((/* implicit */long long int) arr_38 [i_10])))));
        arr_41 [i_10] [i_10] = (i_10 % 2 == 0) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_37 [i_10])) >> ((((+(4015905924U))) - (4015905915U))))), (max(((-(((/* implicit */int) (short)27375)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_6))))))))) : (((/* implicit */unsigned long long int) min((((((((/* implicit */int) arr_37 [i_10])) + (2147483647))) >> ((((+(4015905924U))) - (4015905915U))))), (max(((-(((/* implicit */int) (short)27375)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_6)))))))));
        var_17 -= ((short) max(((-(((/* implicit */int) arr_38 [i_10])))), (((/* implicit */int) arr_38 [i_10]))));
        arr_42 [22U] &= ((/* implicit */signed char) ((var_3) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_10])) ? (((/* implicit */int) arr_37 [(_Bool)1])) : (((/* implicit */int) (unsigned char)60)))))));
    }
    var_18 *= ((/* implicit */signed char) 3039420967U);
    var_19 &= ((/* implicit */short) min((var_5), ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_5)))))));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_0))))))), (var_6))))));
}
