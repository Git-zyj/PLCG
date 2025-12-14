/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236896
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-120))))) - (((/* implicit */int) ((unsigned short) (unsigned short)0)))));
        var_18 = ((/* implicit */_Bool) ((unsigned char) arr_0 [i_0 - 1] [i_0 - 1]));
        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) % (((((((/* implicit */int) (signed char)-8)) + (2147483647))) >> (((arr_1 [i_0]) - (1747788370)))))));
        var_20 *= ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_21 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)69)) < (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 68717379584LL)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            var_22 = max((((long long int) arr_6 [i_2 + 3])), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2 + 2])) + (((/* implicit */int) arr_6 [i_2 + 2]))))));
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) max((-1590598168), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [(unsigned char)13])), (arr_4 [i_1] [i_1] [i_1]))))))))))));
        }
        var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) max(((short)1204), (((/* implicit */short) arr_6 [i_1]))))), (((int) arr_6 [i_1]))));
    }
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_25 = ((/* implicit */unsigned char) ((max((((((-9223372036854775800LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_6 [18])) - (204))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_3]))))))) | (((/* implicit */long long int) max((arr_7 [i_3]), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)64)), ((unsigned char)53)))))))));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 4) 
        {
            var_26 = ((/* implicit */_Bool) arr_0 [(signed char)15] [i_3]);
            var_27 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4 + 1] [(unsigned short)0] [i_4])))))) >= (((arr_4 [i_4 + 1] [i_4] [(unsigned short)10]) / (arr_4 [i_4 + 2] [i_4] [i_4])))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)36763)) : (((/* implicit */int) arr_8 [i_5]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [14]))) / (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3]))))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)50291)) < (1611313563)))) : (((/* implicit */int) max((arr_2 [i_5]), (arr_2 [i_5]))))));
            var_29 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) max((arr_4 [i_5] [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_9 [i_5] [i_3]))))) ? (((/* implicit */int) arr_8 [i_5])) : (max((arr_7 [i_3]), (((/* implicit */int) arr_2 [i_5])))))));
            var_30 = ((/* implicit */signed char) ((unsigned long long int) ((int) ((((/* implicit */int) arr_5 [i_3])) | (((/* implicit */int) var_12))))));
            /* LoopNest 3 */
            for (unsigned short i_6 = 3; i_6 < 15; i_6 += 4) 
            {
                for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                            var_32 |= ((/* implicit */unsigned short) 1851127252U);
                            var_33 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((short) ((long long int) var_6)))), (13573614199024424804ULL)));
                            var_34 = ((/* implicit */int) max((((short) ((((/* implicit */_Bool) arr_7 [(unsigned char)14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [(unsigned short)13] [i_5] [i_6] [(unsigned short)16]))) : (arr_12 [i_3])))), (((/* implicit */short) arr_5 [i_8]))));
                        }
                    } 
                } 
            } 
        }
        var_35 = ((/* implicit */unsigned char) max((((int) var_6)), (arr_11 [i_3] [i_3])));
    }
    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (+(((/* implicit */int) ((((long long int) arr_4 [i_9] [i_9] [i_9])) >= (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)48754), (((/* implicit */unsigned short) (unsigned char)192))))))))))))));
        var_37 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_8 [i_9])) * (((/* implicit */int) arr_8 [i_9]))))));
    }
    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) (unsigned char)192)) + (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) var_10)) <= ((~(((/* implicit */int) (unsigned char)192)))))))));
    var_39 += ((/* implicit */unsigned short) var_9);
}
