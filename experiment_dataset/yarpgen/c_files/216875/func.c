/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216875
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
    var_19 = ((/* implicit */unsigned char) var_16);
    var_20 = ((/* implicit */signed char) var_17);
    var_21 += ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) arr_4 [i_0 - 1] [i_0]);
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21600))) % (1564327894U)))), (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_11)))));
                    arr_11 [i_0] [i_2] [i_1 - 2] [i_0] = ((/* implicit */long long int) ((min((min((arr_4 [(unsigned short)0] [i_0]), (((/* implicit */unsigned long long int) 2730639398U)))), (((/* implicit */unsigned long long int) ((int) 14310069794576275885ULL))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0 + 4] [i_1 + 2] [i_2 + 1])) * (((/* implicit */int) arr_7 [i_0 + 3] [i_1 - 1] [i_2 + 1])))))));
                }
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
                    var_23 = ((/* implicit */long long int) (~((~(arr_13 [i_0 - 1])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_17 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) (unsigned char)8));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */short) ((((_Bool) ((unsigned short) var_10))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (1564327897U)))) == (min((var_8), (((/* implicit */long long int) arr_3 [i_5]))))))))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((signed char) (unsigned short)8190))));
                            arr_22 [i_0] [i_1] [i_0] [i_4] [(signed char)14] = ((/* implicit */unsigned long long int) (+((~(max((var_8), (((/* implicit */long long int) arr_19 [i_1] [i_3] [i_4] [i_5]))))))));
                            var_26 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 503316480)) + (arr_4 [i_0 + 2] [i_0]))) < (((/* implicit */unsigned long long int) (-(max((2047), (((/* implicit */int) (unsigned short)15453)))))))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 2) 
                        {
                            var_27 = (+(((var_14) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14727))))));
                            var_28 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 10223618714932233666ULL)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_3 + 1] [i_6]))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)250)))))))) ? (((((((/* implicit */unsigned long long int) -4074356537299000689LL)) >= (var_9))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) ((524287ULL) != (var_13)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)11651)) & (((/* implicit */int) var_10))))) != (arr_12 [(unsigned short)2]))))));
                            var_29 = (~(max((-2147483623), (((/* implicit */int) (unsigned char)0)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 4; i_7 < 21; i_7 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((4294967271U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))));
                            arr_29 [(short)4] [i_1 - 1] [i_0] [14ULL] [i_1 - 1] = ((/* implicit */unsigned long long int) ((unsigned int) (+(281474976710656ULL))));
                            arr_30 [i_0 - 1] [i_0] [i_3] [i_4] [i_7] = ((/* implicit */int) (_Bool)1);
                            arr_31 [i_0] [i_0] [i_3 + 1] [(_Bool)1] [i_0] = ((/* implicit */short) ((unsigned int) var_17));
                        }
                        var_31 = ((/* implicit */signed char) (((+(0LL))) + (((long long int) ((long long int) (signed char)56)))));
                        arr_32 [(unsigned short)20] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) < (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0])))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        arr_36 [i_0] = ((/* implicit */long long int) ((int) var_4));
                        arr_37 [i_0] [22] [i_1] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_15)) ^ (((/* implicit */int) arr_5 [i_1] [i_1 - 1] [i_3])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 8647027127676334206LL)) != (arr_28 [i_1] [i_1 + 1] [i_3 + 1] [i_3] [i_3 + 1] [(_Bool)1]))))));
                        arr_38 [i_0] [i_1 + 1] [i_3] [(unsigned short)7] [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((int) var_17))) < (((unsigned int) arr_5 [i_0] [i_0 + 3] [i_0])))) ? (((unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_15 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                        arr_39 [i_0] = ((long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (var_9))));
                    }
                    var_32 += ((/* implicit */int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) -1))))) ? (max((arr_28 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]), (arr_28 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3]))) : (((((/* implicit */_Bool) arr_28 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_28 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1])))));
                }
                arr_40 [i_0] = ((/* implicit */_Bool) var_18);
            }
        } 
    } 
}
