/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236704
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (-((~((-(var_6))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    var_17 |= ((/* implicit */unsigned int) (~((+(var_8)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_11 [i_0] [14] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) -856280218))))) ? ((+(((/* implicit */int) var_1)))) : ((~(((/* implicit */int) arr_5 [i_3]))))));
                        arr_12 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_0])) : (arr_9 [i_0] [i_2])))) : (((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
                        arr_13 [i_0] [i_0] [i_1 + 2] [i_2 + 1] [(short)10] [(_Bool)1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2780060456U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_10 [(short)16] [16U])))) ? ((~(arr_4 [(signed char)14] [i_1] [i_1]))) : (((/* implicit */unsigned int) (+(-475606983))))));
                        arr_14 [i_1] [i_1] [i_2] [i_3] [i_1 - 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 475606989)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7)))) ? (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-19869)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_6))))));
                    }
                }
                for (int i_4 = 2; i_4 < 14; i_4 += 1) 
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (-475606967) : (475606967)))) ? (((((/* implicit */_Bool) 1180736608U)) ? (arr_4 [i_0] [8U] [8U]) : (var_14))) : ((~(arr_0 [i_1])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)511)))))))) : ((((!(((/* implicit */_Bool) (short)-11767)))) ? ((+(arr_15 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_6) : (arr_4 [i_0] [i_0] [i_0])))))))))));
                    var_19 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 475607008))))));
                    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 799700967U)) ? (((/* implicit */long long int) arr_1 [3] [6ULL])) : (arr_15 [i_0] [i_1] [i_1] [i_0])))))))));
                }
                var_21 = (~((((!(((/* implicit */_Bool) arr_6 [i_0] [i_1])))) ? ((+(var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_15))))))));
                arr_17 [i_0] |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)513))))) : ((-(var_3)))))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-(-7340230372347816207LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [(unsigned char)7])))))))) : (((((/* implicit */_Bool) 475607026)) ? (((/* implicit */unsigned int) 475606982)) : (2333474050U)))));
            }
        } 
    } 
}
