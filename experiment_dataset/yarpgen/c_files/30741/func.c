/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30741
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    arr_7 [i_2] [i_2 - 1] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_2 + 1]))));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_0 [i_2 + 1]) < (((/* implicit */int) (unsigned char)0))))) < (((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */int) (unsigned short)8548)) : (arr_0 [i_2 + 1])))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 2; i_3 < 12; i_3 += 2) 
                {
                    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (+(arr_3 [i_3] [i_1] [i_0]))))));
                    var_12 = ((/* implicit */int) (-((~(13509712374867210849ULL)))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_3] [i_1] [i_3 + 1]))));
                    var_13 = ((/* implicit */short) max((var_13), (((short) arr_10 [(short)1] [(short)1] [1] [i_3]))));
                    arr_12 [(short)5] = ((/* implicit */long long int) ((arr_5 [i_3] [i_3 - 1]) < (arr_5 [i_3] [i_3 + 1])));
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    arr_15 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (+(arr_10 [i_4 - 1] [i_4] [i_4 - 1] [i_4])));
                    arr_16 [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) (-(arr_0 [i_1])));
                    arr_17 [i_4 - 1] [(unsigned char)3] [8LL] = ((/* implicit */int) arr_13 [i_4 + 1] [i_4 + 1] [i_1] [i_4 + 1]);
                    var_14 = ((/* implicit */unsigned short) ((long long int) (unsigned short)8548));
                }
                for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    var_15 -= ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_5])) ? (-5230055558882279283LL) : (((/* implicit */long long int) 921274254)))) / (((/* implicit */long long int) arr_19 [i_0] [i_1] [i_5])))), (max((((/* implicit */long long int) 3637221172U)), (-1LL)))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)49753)) ? (2053647079) : (min((arr_20 [i_0] [i_1] [i_5]), (((/* implicit */int) arr_2 [i_0] [i_1] [i_5]))))));
                }
                arr_21 [7U] = ((/* implicit */int) arr_19 [i_0] [i_0] [i_1]);
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((short) arr_0 [i_1]));
                            arr_27 [i_6] &= ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) 3662961858U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 -= ((/* implicit */signed char) 1297951370);
    var_19 = ((/* implicit */signed char) min((var_1), (((/* implicit */unsigned int) (~(((int) 1LL)))))));
}
