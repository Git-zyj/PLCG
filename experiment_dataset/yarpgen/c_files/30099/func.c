/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30099
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
    var_16 -= ((/* implicit */long long int) var_10);
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10)))) >= (min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)26197))))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((arr_2 [i_0]), (arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) ((long long int) 562949953421311ULL))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)34)))) : ((+(((/* implicit */int) (unsigned char)197)))))) : (((/* implicit */int) (unsigned short)65535))));
                                var_20 = (-(var_13));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) ((_Bool) (-(((/* implicit */int) (unsigned short)65531)))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 16; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (_Bool)1))));
                                var_23 = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (((((((/* implicit */_Bool) (short)-12713)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_16 [i_0]))) * (((/* implicit */long long int) ((arr_5 [i_0] [i_1] [i_2]) ? (((/* implicit */int) (short)9770)) : (((/* implicit */int) (short)-8586))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 7526360397133606463ULL)) ? (((/* implicit */int) arr_10 [i_0] [(unsigned char)12] [i_1] [i_0] [i_2])) : (((/* implicit */int) var_0))))))) < (max((var_2), (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */short) (signed char)43)))))))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 - 4]), (((/* implicit */short) var_12))))) ? (((/* implicit */int) max((arr_15 [i_0] [i_1] [i_2] [i_0] [i_0] [i_1 - 3]), (arr_15 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_1 - 3])))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1 - 4])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_2] [i_0] [i_1 - 2])) : (((/* implicit */int) arr_15 [i_0] [i_2] [i_2] [17ULL] [i_0] [i_1 - 4]))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((var_4) ? (((/* implicit */int) (short)12712)) : (((/* implicit */int) var_4))))))) | (var_2)));
}
