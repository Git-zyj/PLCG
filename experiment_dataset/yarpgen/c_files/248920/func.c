/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248920
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_12 = max((((((-4) + (2147483647))) >> (((9223372036854775793LL) - (9223372036854775791LL))))), (min((((/* implicit */int) var_6)), (arr_10 [i_3 + 2] [i_1] [i_1] [(unsigned char)16] [i_1] [i_3]))));
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((unsigned int) ((_Bool) arr_9 [i_1] [i_3 - 2] [i_1]))))));
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (-((+(((/* implicit */int) (signed char)-44)))))))));
                    }
                } 
            } 
            var_15 = ((((/* implicit */_Bool) 440749126)) ? (3307047083U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)99))));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-440749122)))) ? (((/* implicit */int) min((arr_6 [16ULL] [i_1]), (arr_6 [8] [i_1])))) : (((((min((284169704), (-2147483632))) + (2147483647))) >> ((((~(arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [(signed char)0]))) - (2037059753))))))))));
            var_17 *= min(((+((+(((/* implicit */int) (unsigned char)118)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) -440749128)), (arr_1 [i_1] [i_0]))))))));
            var_18 = ((/* implicit */int) ((max((arr_4 [2] [i_0] [(unsigned char)14]), (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (1944049759319156219LL) : (arr_1 [i_1] [i_1])))) ? (max((((/* implicit */int) arr_5 [i_0] [i_0])), (arr_8 [i_1] [i_0] [i_1]))) : (((/* implicit */int) min((((/* implicit */short) arr_6 [i_0] [i_1])), (arr_0 [i_0] [i_0]))))))));
        }
        arr_11 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32743)) ? (1984247426) : (((/* implicit */int) arr_6 [i_0] [i_0])))))))) >> (((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (-284169733) : (((/* implicit */int) arr_6 [i_0] [i_0]))))), (2403147869267504605ULL))) - (2403147869267504583ULL)))));
    }
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        var_19 = ((/* implicit */int) max((var_19), (-440749124)));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_6 [(signed char)14] [(signed char)14]))));
    }
    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                {
                    var_21 |= ((/* implicit */signed char) arr_1 [i_7] [i_6]);
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 13; i_9 += 1) 
                        {
                            {
                                var_22 -= ((/* implicit */int) var_6);
                                var_23 ^= min((((/* implicit */unsigned int) (-(max((-2147483630), (1612749165)))))), (arr_9 [i_9] [(signed char)2] [(signed char)2]));
                                var_24 -= ((/* implicit */unsigned long long int) -74545407);
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) max((arr_18 [i_5] [(signed char)12]), (arr_18 [i_7] [4ULL]))))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((int) arr_13 [i_5] [i_5])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_10] [i_5] [i_5] [i_5] [12]))))), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_2 [i_5 + 1])))))));
            var_28 -= ((/* implicit */unsigned char) arr_0 [(signed char)12] [i_10 - 1]);
            arr_31 [i_5] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_14 [i_5 + 1]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 3; i_12 < 13; i_12 += 2) 
                {
                    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        {
                            arr_41 [3LL] [(unsigned short)7] [3LL] [i_5] &= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_8 [i_5 + 1] [i_11] [i_10 - 1])), (3974759489834103709ULL))), (min((((4575657221408423936ULL) | (((/* implicit */unsigned long long int) arr_1 [3LL] [3LL])))), (((/* implicit */unsigned long long int) (~(3720305093053353096LL))))))));
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) min((((/* implicit */unsigned short) ((max((759720060U), (((/* implicit */unsigned int) (unsigned short)50014)))) >= (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-32722), (var_3)))))))), (((unsigned short) min((((/* implicit */unsigned int) 1985078319)), (1000208799U)))))))));
                            var_30 = ((/* implicit */int) max((var_30), (((((/* implicit */_Bool) (unsigned short)56119)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) (signed char)44)) >= (((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            } 
        }
        arr_42 [i_5] [i_5] |= ((/* implicit */unsigned short) var_3);
        arr_43 [i_5] |= (+(min((((/* implicit */int) max((((/* implicit */short) arr_32 [i_5] [i_5 + 1])), ((short)32754)))), (min((-2147483632), (((/* implicit */int) (signed char)-45)))))));
        var_31 = ((/* implicit */int) min((var_31), (arr_4 [i_5] [(unsigned char)4] [i_5 + 2])));
    }
    var_32 &= ((/* implicit */int) max((min((((/* implicit */unsigned short) (signed char)-82)), (min(((unsigned short)43726), (((/* implicit */unsigned short) (signed char)39)))))), ((unsigned short)65532)));
}
