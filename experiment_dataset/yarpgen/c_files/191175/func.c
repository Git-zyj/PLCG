/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191175
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) arr_0 [i_0 - 1]))));
        var_17 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0] [(short)11]))) >= ((~(arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_8);
        arr_4 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((4100516747U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-8264))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) arr_1 [i_0 + 2] [i_0]));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                var_18 = ((/* implicit */unsigned long long int) (short)32767);
                var_19 = arr_7 [i_3];
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (short)-16250))) && (((/* implicit */_Bool) ((3437577586764787379ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(short)10]))))))))) % (((/* implicit */int) arr_12 [(signed char)6] [(unsigned char)4] [i_3] [i_3])))))));
            }
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_0))));
            /* LoopSeq 3 */
            for (signed char i_4 = 1; i_4 < 10; i_4 += 4) 
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((18446744073709551615ULL) % (((((/* implicit */_Bool) 18446744073709551595ULL)) ? (18446744073709551615ULL) : (arr_0 [i_1])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4 - 1]))) % (arr_11 [(signed char)11] [i_2] [i_1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_0), (arr_7 [i_1])))))))));
                arr_18 [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)0);
            }
            for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                arr_21 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) 0))))))));
                var_23 = ((/* implicit */unsigned long long int) (unsigned char)68);
            }
            /* vectorizable */
            for (short i_6 = 2; i_6 < 8; i_6 += 3) 
            {
                var_24 = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) arr_20 [i_1] [i_1])))));
                arr_25 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_1] [7] [(unsigned char)8] [i_1])) ? (((/* implicit */int) arr_14 [6ULL] [7ULL] [9LL] [i_1])) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1]))));
                arr_26 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5430469259485183662LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (4381941150435252604ULL)))) ? (arr_23 [i_6 - 1] [i_6 + 3] [i_6 + 1]) : (arr_23 [(unsigned char)11] [i_6 + 1] [i_6 + 4])));
                var_25 ^= ((/* implicit */long long int) 1223911490);
            }
        }
        for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            var_26 = ((/* implicit */short) 1246941669223897664LL);
            var_27 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)3866))))) > (((/* implicit */int) arr_9 [i_1])))))));
        }
        var_28 += ((/* implicit */long long int) ((unsigned int) max((((/* implicit */short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (short)-14500))))), (var_8))));
    }
    for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        var_29 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((short) -1LL)))) == (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32764))) * (0U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)37)) ^ (((/* implicit */int) var_0))))) == ((+(2307662737U))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (arr_29 [i_8])))));
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_8]))) : (var_13)))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) - (-5430469259485183662LL)))))) ? (arr_31 [i_8] [i_8]) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8])) ? (9223372036854775807LL) : (0LL)))) || (((((/* implicit */_Bool) (short)-19531)) || (((/* implicit */_Bool) var_7)))))))));
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_34 [i_9])), (-2017581825)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_29 [i_8]) > (((/* implicit */unsigned long long int) -11LL)))))) | (max((((/* implicit */unsigned long long int) (unsigned char)255)), (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -3079930494839162107LL)) ? (10LL) : (var_3))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_8]))))))))))));
        }
        var_32 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967287U)))))) == (((long long int) max((-16LL), (((/* implicit */long long int) (signed char)38)))))));
        var_33 = ((/* implicit */unsigned int) (short)32767);
    }
    var_34 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(-5507311284699283085LL)))) ^ (4569744702113092087ULL)));
    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_13) > (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) & (var_4)))))))) + (2204818086423930460LL))))));
    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) (short)(-32767 - 1)))));
}
