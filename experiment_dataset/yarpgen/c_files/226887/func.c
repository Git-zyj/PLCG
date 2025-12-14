/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226887
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        var_17 += (-(((var_1) | (max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (var_5))))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) var_7))))))));
                        arr_12 [i_0] [i_0] [i_3] [(_Bool)1] [i_0] |= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1]))) <= (901078128U)))), ((+(((/* implicit */int) arr_4 [i_1 + 1]))))));
                        var_19 += ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) var_3)))) && ((!(((/* implicit */_Bool) var_15)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_0 + 2] [i_0 + 2]), (((/* implicit */unsigned short) ((signed char) var_10))))))) : (var_14)));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min(((~(((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 2])))), (min(((~(((/* implicit */int) (short)-22020)))), (((/* implicit */int) ((short) var_13))))))))));
                    }
                    var_21 += ((/* implicit */signed char) var_2);
                    var_22 = ((/* implicit */_Bool) ((short) arr_2 [i_0] [i_1 + 1]));
                    arr_13 [i_2] [i_0] [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1 + 1] [i_2] [(_Bool)1])) / (((/* implicit */int) arr_7 [i_1 - 1] [i_2] [i_1]))))), ((+(var_7)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 3; i_4 < 15; i_4 += 3) 
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (_Bool)1))));
                        var_24 = ((/* implicit */short) ((((/* implicit */long long int) (-(((((/* implicit */int) (short)1909)) | (((/* implicit */int) (signed char)118))))))) >= (arr_8 [i_2] [i_4])));
                        var_25 -= ((/* implicit */_Bool) var_0);
                    }
                    for (signed char i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) min((((/* implicit */long long int) min((((/* implicit */unsigned int) max(((unsigned short)36646), (((/* implicit */unsigned short) (_Bool)1))))), (var_9)))), (((((((/* implicit */_Bool) 1579363818440856411ULL)) ? (arr_8 [(unsigned short)12] [(unsigned short)12]) : (((/* implicit */long long int) ((/* implicit */int) (short)-22020))))) + (var_11))))))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 2; i_6 < 16; i_6 += 4) 
                        {
                            arr_23 [i_0 - 1] [i_6] [i_0] |= ((/* implicit */unsigned int) var_11);
                            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) >= (31U))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_0] [i_2] [i_5] [i_2] [i_2] = ((/* implicit */unsigned char) (+((-(arr_17 [i_0] [(signed char)12] [(signed char)12] [i_0] [i_0])))));
                            arr_28 [1U] [i_2] [i_2] [i_5] [i_7] = ((/* implicit */long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) 1073741822))))), (min((((/* implicit */short) arr_7 [i_1 + 1] [i_2] [i_5 - 1])), ((short)29156)))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)57))));
                            var_29 -= ((/* implicit */long long int) ((1565677028) <= ((-(((/* implicit */int) (_Bool)1))))));
                        }
                        for (int i_8 = 1; i_8 < 17; i_8 += 3) 
                        {
                            var_30 |= ((/* implicit */unsigned long long int) arr_10 [(short)12] [(short)12]);
                            arr_33 [i_2] [i_5] [i_1] [i_2] [i_1] [i_1 - 1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_26 [i_0] [i_1] [i_2] [i_5] [i_2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)13610))))))))));
                        }
                        arr_34 [i_2] [i_1] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) (short)-13611)), (max((((/* implicit */unsigned long long int) (unsigned char)240)), (arr_0 [i_0])))))));
                        arr_35 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((int) min(((unsigned short)32768), ((unsigned short)32777))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */int) (unsigned char)0)) << ((((~(((/* implicit */int) (unsigned char)252)))) + (268)))))));
}
