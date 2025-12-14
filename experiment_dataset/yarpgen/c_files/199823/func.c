/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199823
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_9))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 196521481U)) ? (-1162082423) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        var_17 += ((/* implicit */int) var_11);
                        var_18 = ((/* implicit */unsigned short) ((unsigned int) -1889541110));
                    }
                    for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            arr_15 [i_2] [i_1] = ((/* implicit */int) var_0);
                            arr_16 [i_0] [i_0] [i_2] = ((/* implicit */int) var_3);
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            arr_19 [i_0] [i_2] [i_2] = ((/* implicit */int) var_12);
                            arr_20 [i_0] [i_2] [i_2] [(unsigned short)3] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) (signed char)-1));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) -30)) ? (var_14) : (var_7))))));
                            var_20 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) 2147221504U)));
                            var_21 *= ((/* implicit */unsigned long long int) (signed char)2);
                        }
                        for (short i_7 = 3; i_7 < 21; i_7 += 4) /* same iter space */
                        {
                            arr_25 [i_2] [i_2] [i_2] [i_2 + 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((/* implicit */int) ((unsigned char) (unsigned short)1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((int) 4269456131U)) : (((((/* implicit */int) var_5)) | (1923873184)))))) : (((long long int) ((unsigned long long int) -1804090652)))));
                            arr_26 [i_0] [i_1] [i_2] [i_0] [i_4] [(unsigned short)4] [i_0] = ((/* implicit */int) ((var_6) / (((/* implicit */unsigned long long int) ((int) (signed char)-1)))));
                            arr_27 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) ((6602807691198502354ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3557816444U))))));
                            arr_28 [i_0] [i_2] [i_2 + 2] [i_4] [i_7] = ((/* implicit */unsigned int) 11904138192091735640ULL);
                        }
                        for (short i_8 = 3; i_8 < 21; i_8 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) ((unsigned char) ((2080687427) < (((/* implicit */int) ((short) (signed char)-3))))));
                            var_23 = ((/* implicit */unsigned char) ((((_Bool) ((int) 1761086528U))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */unsigned long long int) 2533880768U)) : (2806115982693004343ULL))))));
                        }
                        arr_32 [i_2] [i_2 - 3] [(signed char)2] = ((/* implicit */int) var_1);
                        arr_33 [i_4] [i_2] [i_2] [i_2] [i_0] = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (1761086521U) : (var_8)))) ? (((int) var_11)) : (((((/* implicit */int) var_13)) / (((/* implicit */int) var_2))))));
                    }
                    arr_34 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((int) 6549699027072154781ULL)) / (((/* implicit */int) (unsigned short)33111))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))) : (((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1761086528U)) ? (15640628091016547288ULL) : (18446744073709551598ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5969)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))))))) && (((/* implicit */_Bool) ((((unsigned long long int) var_13)) & (2806115982693004330ULL))))));
    var_25 = ((/* implicit */unsigned int) (_Bool)1);
    var_26 = ((/* implicit */int) 1761086519U);
}
