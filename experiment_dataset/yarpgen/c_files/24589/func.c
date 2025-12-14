/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24589
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((((unsigned long long int) -5951597030094439433LL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))) * (12137853722347498428ULL)))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((arr_2 [i_1]) >> (((((/* implicit */int) (short)4378)) - (4366))))))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0] [i_0] [0ULL])), (((int) 1529148479U))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-25191)) || (((/* implicit */_Bool) arr_0 [i_1] [(unsigned char)3])))))) & (min((1345548533499660755ULL), (((/* implicit */unsigned long long int) (short)14001)))))))));
                arr_6 [2LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) & (((/* implicit */int) max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) ((short) min((arr_7 [i_2] [i_2]), (arr_7 [i_2] [11U]))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    arr_16 [i_2] [i_3] [(signed char)9] = ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */int) (!((_Bool)1)))), (arr_10 [i_3] [i_3] [i_4])))), (((long long int) arr_14 [(unsigned char)22] [i_2] [i_2]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_2])))))));
                        arr_19 [i_5] [i_3] [i_4] [i_5] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_3])) ? (((/* implicit */unsigned long long int) arr_10 [i_5] [i_5] [i_5])) : (6308890351362053212ULL))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_19 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_6]))))) ? ((+(((/* implicit */int) arr_9 [i_4])))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_3])) > ((-2147483647 - 1))))));
                        arr_23 [i_2] [i_3] [i_4] [i_6] [i_6] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((arr_14 [i_2] [i_3] [i_2]) / (1072693248))), (arr_14 [i_3] [i_4] [i_6])))), (min((((/* implicit */unsigned long long int) 2630051504U)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32760))) * (18343548674427430462ULL)))))));
                        arr_24 [i_2] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_18 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_3]))))));
                        arr_25 [(signed char)7] [i_2] [i_3] [i_3] [i_3] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)72))))) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (18446744073709551615ULL) : (arr_15 [(short)7] [i_3] [i_6]))) : ((-(arr_15 [i_2] [i_3] [i_2]))))))));
                    }
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((signed char) 1700708302U))), ((~(arr_15 [i_2] [20] [i_4]))))))));
                    arr_26 [i_2] [i_3] [i_4] [4ULL] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [(short)18] [i_3] [i_3])), (arr_7 [i_2] [i_3])))) ? ((~(arr_10 [(unsigned short)10] [i_3] [(unsigned short)10]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(unsigned char)4] [i_3] [i_4])))))));
                }
                var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) (signed char)36)))));
                var_22 = ((/* implicit */unsigned char) ((max(((+(4294967285U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-333133589) : (((/* implicit */int) (short)26737))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (((~(arr_15 [i_2] [i_3] [(short)4]))) > (min((arr_8 [i_2]), (arr_15 [i_3] [i_2] [i_2])))))))));
            }
        } 
    } 
}
