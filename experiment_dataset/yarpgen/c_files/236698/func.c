/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236698
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
                    var_21 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_1])))) % (((((/* implicit */_Bool) ((unsigned short) (short)-6916))) ? (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_1 [i_0]))))) : (arr_6 [i_0] [i_2] [i_2])))));
                    var_22 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (132475372U)))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (max((arr_9 [i_0] [i_1] [i_2] [i_2] [i_0] [i_4]), (((/* implicit */unsigned long long int) arr_4 [(short)4] [i_1] [15])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_10 [i_3] [(unsigned short)7]))))))))));
                                var_24 = ((/* implicit */int) max((var_24), ((-(((((/* implicit */int) ((short) (signed char)-48))) % (((((/* implicit */_Bool) 3635157778U)) ? (((/* implicit */int) arr_2 [6U])) : (((/* implicit */int) (short)-6181))))))))));
                                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) (signed char)-48)) ? (16827982988834929668ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(8937249530712289850ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (short)-6949)) + (((/* implicit */int) (short)-6167))))))))))));
                                var_26 &= ((/* implicit */short) (-(arr_3 [i_0] [i_0] [i_2])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_22 [11] [i_1] [i_6] [i_1] = ((/* implicit */unsigned short) (((_Bool)1) ? ((~(((unsigned long long int) (short)22527)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_0] [i_6]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)6167)) : (var_10))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)28245))) < (3523588275U)))))))));
                                var_27 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_15 [i_2])), (arr_4 [i_6] [i_1] [i_2]))), (((/* implicit */long long int) arr_2 [i_6])))))));
                                var_28 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)33778))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */signed char) var_1);
}
