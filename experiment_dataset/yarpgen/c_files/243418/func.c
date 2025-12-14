/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243418
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
    var_19 = ((/* implicit */short) max((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)26223))))))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) -5164923453238509155LL)) || (((/* implicit */_Bool) -3LL))))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) -3580727515067219332LL)))))))));
    var_21 = ((/* implicit */int) min((var_5), (((/* implicit */unsigned int) var_18))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [10LL] [9U] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) min((((/* implicit */short) arr_2 [i_0] [13])), (var_11)))) + (2147483647))) << (((((/* implicit */int) (unsigned char)241)) - (241))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_4] [i_3] [i_0] = ((/* implicit */unsigned char) 16688960325810488457ULL);
                                arr_18 [13] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13588394498716779351ULL)) ? (((/* implicit */int) (short)5167)) : (((/* implicit */int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) (unsigned char)245))))))))));
                                var_22 = ((/* implicit */unsigned char) (((~(((long long int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_0])))) < (max((((/* implicit */long long int) (!(((/* implicit */_Bool) -8694370078758271067LL))))), (arr_8 [i_0] [(signed char)11] [(signed char)11])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) var_12)) : (min((((((/* implicit */int) (_Bool)1)) << (((arr_14 [i_1] [i_1] [15ULL] [i_7] [i_7] [i_1]) - (8399710882589783946LL))))), (((/* implicit */int) arr_1 [i_7] [i_1]))))));
                                arr_26 [i_1] [i_5] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_7))))))) / (arr_21 [i_0] [i_5] [i_6] [11LL])));
                            }
                        } 
                    } 
                } 
                var_24 -= ((/* implicit */int) ((unsigned long long int) arr_20 [i_1]));
                arr_27 [i_0] = (((~(((/* implicit */int) arr_20 [i_0])))) | (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1228259604U)) ? (0) : (((/* implicit */int) arr_6 [i_0])))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
}
