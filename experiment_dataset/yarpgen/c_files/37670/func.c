/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37670
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
    var_17 = ((/* implicit */_Bool) max((262128), (-262128)));
    var_18 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_2);
        var_19 += ((/* implicit */unsigned long long int) (~(-794494114)));
        var_20 &= ((unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)19484)) ? (((/* implicit */unsigned long long int) 262128)) : (9027074423931228385ULL))) > (((/* implicit */unsigned long long int) arr_1 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -262128)) ? (-262128) : (((/* implicit */int) arr_5 [i_1] [i_1])))), ((~(((/* implicit */int) (_Bool)1))))))) : (max((var_12), (((/* implicit */unsigned long long int) arr_1 [i_1]))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    var_22 += ((/* implicit */unsigned short) ((((((-1900044600) != (262119))) ? (min((1006826780), (((/* implicit */int) arr_5 [i_1] [10ULL])))) : (max((-1732581866), (1900044599))))) >> (((max((1900044599), (((/* implicit */int) ((((/* implicit */unsigned long long int) 1556103228)) != (var_11)))))) - (1900044579)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            {
                                var_23 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_2] [i_3] [i_4]))))) : (max((var_1), (((/* implicit */unsigned long long int) 1006826780)))))), (((/* implicit */unsigned long long int) (!(((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                                arr_19 [(_Bool)1] [(signed char)16] [(unsigned char)7] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_9 [14LL] [i_4] [i_3] [i_4])) : (arr_16 [i_5] [i_4] [i_3] [i_2] [7])))), (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12515))) : (arr_13 [i_3] [i_4])))))));
                                var_24 = ((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (unsigned char)173))))), (8600320552340275250LL))));
                                var_25 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [6] [i_4] [i_5])) ? (((/* implicit */int) arr_15 [i_4] [i_2] [i_3] [(signed char)2] [i_4] [18ULL])) : (((/* implicit */int) arr_15 [i_1] [(_Bool)1] [i_3] [i_4] [i_4] [i_5])))), ((-(((/* implicit */int) arr_15 [i_5] [i_4] [(signed char)8] [i_3] [i_2] [i_1]))))));
                                var_26 += ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)65)) / (887891378))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 &= ((/* implicit */int) ((((/* implicit */long long int) -262129)) | (8600320552340275245LL)));
        /* LoopSeq 3 */
        for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            arr_22 [i_1] = ((/* implicit */int) min((7783904482257002404ULL), (((/* implicit */unsigned long long int) (unsigned char)120))));
            var_28 = ((/* implicit */unsigned short) (((_Bool)1) ? (var_9) : (((/* implicit */long long int) min((arr_16 [i_1] [i_1] [i_1] [i_1] [(unsigned char)9]), (((/* implicit */int) arr_6 [i_1])))))));
            arr_23 [i_6] = ((/* implicit */int) (_Bool)1);
        }
        /* vectorizable */
        for (short i_7 = 3; i_7 < 16; i_7 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) var_12);
            var_30 = ((/* implicit */unsigned short) arr_15 [i_1] [i_1] [i_1] [(signed char)7] [i_1] [i_1]);
        }
        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            arr_28 [(signed char)1] [(signed char)14] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((arr_11 [i_8] [i_8] [i_8]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4088))))), (((/* implicit */unsigned long long int) min((-7906561530454918290LL), (((/* implicit */long long int) 262128))))))))));
            arr_29 [i_1] [(unsigned short)13] [i_8] = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 0)) ? (-887891379) : (((/* implicit */int) (signed char)-49))))))) ? (((/* implicit */int) arr_10 [i_8] [i_8] [i_1])) : (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)204))))), ((~(876421657))))));
            var_31 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min(((unsigned char)225), ((unsigned char)220)))) ? (((/* implicit */int) (!((_Bool)1)))) : (min((-197306322), (arr_24 [i_1] [i_8])))))));
        }
    }
    var_32 = ((/* implicit */_Bool) var_12);
}
