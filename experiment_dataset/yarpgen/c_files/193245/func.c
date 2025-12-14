/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193245
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
    var_10 = ((/* implicit */_Bool) var_0);
    var_11 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_6 [i_0] [i_1] [4ULL] = var_9;
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_1 - 1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) (_Bool)1);
                                arr_14 [i_0] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(var_1)))), (var_2)));
                                arr_15 [(short)6] [i_2] [i_2] [(short)6] [(_Bool)1] [i_4] = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)255)), ((-(((/* implicit */int) arr_8 [i_1] [i_1 - 1] [i_1 + 2] [8U] [i_1 + 2]))))));
                                arr_16 [i_2] = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_2])), (arr_10 [(_Bool)1] [i_4]))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 13; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        {
                            arr_21 [i_0] [10ULL] [7U] [9ULL] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_5])) - (((/* implicit */int) (unsigned short)20587))));
                            arr_22 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned long long int) -1833200779);
                            /* LoopSeq 2 */
                            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                            {
                                arr_27 [i_0] [i_1 + 1] [i_0] [i_6] [i_6] [i_6] = ((/* implicit */short) (~(((/* implicit */int) ((var_2) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                                arr_28 [i_0] [i_0] [i_5] [i_0] [(signed char)10] = ((/* implicit */long long int) ((short) arr_2 [i_0] [i_1 + 2]));
                                arr_29 [i_5] [(unsigned short)12] [i_5] [i_6] [(short)9] [i_7] [i_5] = ((/* implicit */unsigned char) arr_12 [i_1 + 2] [i_1 - 1] [i_1] [i_1 + 2] [i_1]);
                            }
                            /* vectorizable */
                            for (short i_8 = 0; i_8 < 14; i_8 += 2) 
                            {
                                arr_33 [i_1] [i_1] [i_5] [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5 + 1])) ? ((+(1500501514U))) : (((/* implicit */unsigned int) ((int) (short)-30847)))));
                                arr_34 [i_8] [i_6] [i_5 + 1] [(signed char)0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) var_4);
                                arr_35 [i_1] [(signed char)6] [i_1] = ((/* implicit */signed char) 1990270915013455817LL);
                                arr_36 [i_0] [i_1 + 2] = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_9 = 1; i_9 < 11; i_9 += 2) 
                {
                    arr_40 [i_0] [(signed char)6] [i_9] [1U] = ((/* implicit */_Bool) min((((((/* implicit */int) (short)15006)) << (((((/* implicit */int) var_7)) - (22028))))), (min((((/* implicit */int) arr_2 [i_0] [i_1])), (-1015425232)))));
                    arr_41 [i_0] [i_1] = ((/* implicit */short) var_1);
                }
                for (short i_10 = 3; i_10 < 13; i_10 += 3) 
                {
                    arr_44 [i_1 - 2] [i_0] = ((/* implicit */int) (((~(79334553U))) << (((((/* implicit */int) max((var_0), (((/* implicit */short) var_8))))) - (9321)))));
                    arr_45 [i_0] = ((/* implicit */int) (signed char)101);
                    arr_46 [i_0] [i_10] [i_10] [i_10] = ((/* implicit */signed char) (_Bool)1);
                    arr_47 [i_10] = ((/* implicit */_Bool) (+((-(((/* implicit */int) (short)6980))))));
                }
                arr_48 [i_1] = (signed char)12;
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_0);
}
