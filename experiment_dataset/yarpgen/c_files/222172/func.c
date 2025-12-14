/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222172
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [(_Bool)1] = ((/* implicit */short) (((+(0ULL))) ^ (((/* implicit */unsigned long long int) (~((+(2591320181024903007LL))))))));
                    var_20 = ((/* implicit */signed char) (((_Bool)1) ? (16594415504183348188ULL) : (((/* implicit */unsigned long long int) 3452703750U))));
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_1] [i_1])))))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        for (short i_5 = 4; i_5 < 20; i_5 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) 2591320181024903007LL)))))))));
                                var_23 |= ((((/* implicit */_Bool) (signed char)-82)) && (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3] [i_4])));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(134215680U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12610))) : ((~(4160751616U)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 2; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_3] [i_6] [i_1] = ((((/* implicit */_Bool) (((_Bool)1) ? (842263546U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3230)))))) ? (((/* implicit */int) (unsigned short)58172)) : (((/* implicit */int) (unsigned short)27398)));
                        var_25 = (+(((((/* implicit */_Bool) -1812063607)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6] [i_0]))))));
                        arr_19 [i_0] [i_0] [i_3] [i_0] [i_1] = ((/* implicit */long long int) (-((+(((/* implicit */int) (short)-17060))))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 20; i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) (-(((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)0))))));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 3452703750U)) ? (((/* implicit */int) (unsigned short)0)) : ((~(((/* implicit */int) (_Bool)0))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        {
                            arr_29 [i_1] [i_1] [(unsigned short)19] = (!(((/* implicit */_Bool) (unsigned short)65535)));
                            var_27 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_3 [i_0] [2U])))));
                            var_28 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 448)), (((((/* implicit */_Bool) 3150254671U)) ? (((/* implicit */unsigned int) 127)) : (1037382373U)))))), ((~(((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (3468642468361830872ULL)))))));
                        }
                    } 
                } 
                var_29 += ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-62))));
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_22 [i_0] [(short)16] [i_0] [(short)16]) : (((/* implicit */unsigned long long int) 469932179)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((1240855268) + (((/* implicit */int) arr_25 [i_0] [i_1] [i_1]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))) : (max((((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)252))) : (arr_22 [i_0] [(signed char)15] [i_1] [(short)7]))), (((/* implicit */unsigned long long int) -128))))));
                var_31 = ((/* implicit */unsigned long long int) (unsigned char)0);
            }
        } 
    } 
    var_32 = ((((/* implicit */_Bool) ((unsigned short) 6969792861607945466ULL))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)5239))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) : (max((((/* implicit */long long int) var_16)), (-1LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(469932179)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)120))))) : (var_18)))));
    var_33 = ((/* implicit */short) var_15);
}
