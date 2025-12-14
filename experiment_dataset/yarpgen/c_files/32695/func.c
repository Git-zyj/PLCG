/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32695
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
    var_18 = ((/* implicit */unsigned char) var_5);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) & (((((((/* implicit */_Bool) var_4)) ? (var_2) : (var_2))) ^ (((/* implicit */int) ((var_2) < (((/* implicit */int) (unsigned short)3008)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        arr_3 [i_0] |= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((7307995479193234672LL), (((/* implicit */long long int) var_14))))))))));
        var_20 = ((signed char) arr_1 [1ULL]);
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) (-(((arr_1 [i_1]) ? (1394189253480685688LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))));
            var_22 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) ((unsigned short) (_Bool)1))))));
        }
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
        {
            arr_12 [(unsigned short)9] [i_1] = (((-(((/* implicit */int) (unsigned short)32640)))) + (((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */int) min((((/* implicit */short) arr_0 [17])), (var_17)))) : ((+(((/* implicit */int) (short)29711)))))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_3])) / (-959062115)))) : ((+(((((/* implicit */long long int) ((/* implicit */int) var_16))) ^ (arr_10 [i_3] [i_1])))))));
        }
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
        {
            arr_15 [i_1] = ((/* implicit */unsigned long long int) var_9);
            var_24 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])))));
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                var_25 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5])))))));
                arr_18 [i_1] [i_5] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_10 [i_1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21580))) : (var_11))), (((/* implicit */unsigned int) var_9)))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)32752))))));
                var_26 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_4] [i_5]))) == ((-(((arr_9 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_1] [i_1])))))))));
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((((_Bool) var_2)) ? ((-(((/* implicit */int) var_17)))) : (arr_4 [i_4] [i_5])))) ? (((unsigned long long int) 18446744073709551608ULL)) : (((/* implicit */unsigned long long int) ((arr_13 [i_1] [i_4]) ? (((/* implicit */int) arr_13 [i_4] [i_5])) : (((/* implicit */int) arr_13 [i_4] [i_5]))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        {
                            arr_24 [i_1] [i_4] [i_7] [3] [i_7] = ((/* implicit */signed char) ((unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_1] [i_4])) ? (arr_17 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                            var_28 ^= ((/* implicit */signed char) ((max((((/* implicit */long long int) (unsigned char)12)), (arr_20 [i_6 - 2] [(unsigned short)4] [i_6 + 1] [(unsigned short)4] [i_6] [i_7]))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_4] [i_5] [i_6 + 1] [i_6 - 2] [i_6])))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((-1627131952) / (((/* implicit */int) var_0)))))));
                arr_28 [i_8] [i_8] = ((/* implicit */int) (((~(((/* implicit */int) var_15)))) > (((/* implicit */int) ((short) arr_22 [(unsigned short)1] [(unsigned short)8] [i_1])))));
            }
            arr_29 [i_1] [i_4] [i_4] = ((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) (signed char)0))));
        }
        var_30 += ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_17))))))));
        arr_30 [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (9007182074871808ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (max((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_11))))))));
    }
    for (long long int i_9 = 2; i_9 < 22; i_9 += 4) 
    {
        arr_33 [i_9] = ((/* implicit */int) ((max((arr_32 [i_9 - 2]), (((/* implicit */unsigned long long int) arr_31 [i_9 + 1])))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_9 - 1])) ? (var_6) : (((/* implicit */int) arr_31 [i_9 - 1])))))));
        /* LoopSeq 1 */
        for (unsigned char i_10 = 1; i_10 < 21; i_10 += 2) 
        {
            var_31 += ((/* implicit */unsigned short) var_14);
            var_32 *= ((/* implicit */signed char) ((((/* implicit */int) min((arr_35 [i_9] [(unsigned char)6]), (((/* implicit */unsigned short) arr_31 [i_9 - 2]))))) << (((max((max((arr_32 [i_10]), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_9)), (var_12)))))) - (18446744073709551593ULL)))));
        }
        var_33 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_35 [i_9] [i_9 - 2])) : (var_4)))), (((2305843009213693951ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_9] [i_9]))))))) & (((/* implicit */unsigned long long int) (~(9223372036854775807LL))))));
    }
    var_34 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) (signed char)48))))))) ? (((/* implicit */int) max((((/* implicit */short) max((((/* implicit */unsigned char) var_9)), ((unsigned char)9)))), (var_17)))) : (((((/* implicit */int) (signed char)0)) >> ((((~(var_6))) + (165780302)))))));
    var_35 = var_1;
}
