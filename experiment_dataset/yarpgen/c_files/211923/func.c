/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211923
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32192)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (_Bool)1))))) ? (((((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))) + (((/* implicit */int) var_6)))) : (((/* implicit */int) var_6))));
    var_15 += ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)255))));
            var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1]))));
        }
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            arr_7 [i_0] &= ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [(signed char)12])) && (((/* implicit */_Bool) arr_0 [(_Bool)1] [i_2]))))) > (((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned char)2))))))), ((-(((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [i_2]))))))));
            arr_8 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_0 - 1] [(short)0])) : (((/* implicit */int) (short)-31037)))))) + (((/* implicit */int) (_Bool)1))));
        }
        var_18 = ((/* implicit */_Bool) (unsigned char)253);
        /* LoopNest 2 */
        for (unsigned char i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((((/* implicit */short) (!(((_Bool) var_8))))), (((short) arr_11 [(signed char)3] [i_0 + 3] [i_3 + 1]))));
                    var_20 = ((/* implicit */unsigned int) max((min((arr_13 [i_3] [i_3 - 2] [i_3]), (arr_4 [(signed char)12]))), (((/* implicit */short) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)191)))) << ((((~(((/* implicit */int) (signed char)60)))) + (69)))));
                        arr_17 [i_5] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1] [(_Bool)1])) % (((/* implicit */int) arr_12 [i_0] [i_3 + 1] [i_4])))) + (((/* implicit */int) ((short) arr_12 [i_0] [i_3 + 1] [i_4])))));
                        arr_18 [i_0] [i_5] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))) : (8329591898222430817ULL)));
                        var_22 = ((/* implicit */unsigned long long int) ((unsigned short) arr_6 [i_0 + 2] [i_0 + 2]));
                    }
                    for (short i_6 = 1; i_6 < 16; i_6 += 3) 
                    {
                        var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (((/* implicit */int) arr_13 [i_0 + 3] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)33293)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-18340)))) : (((/* implicit */int) (unsigned short)41919))))) ? (((/* implicit */int) arr_21 [(_Bool)1] [(_Bool)1] [(_Bool)1])) : (((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_6 + 1] [i_0 + 3])) : (((/* implicit */int) arr_10 [i_3 + 1] [i_3]))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_24 -= ((/* implicit */unsigned long long int) (unsigned char)254);
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_10 [(unsigned char)12] [(unsigned char)12])) - (111)))))))) ? (((/* implicit */unsigned long long int) ((((arr_15 [(short)10] [i_3] [(unsigned char)13] [(unsigned char)1] [i_3]) ? (((/* implicit */int) arr_4 [i_7])) : (((/* implicit */int) arr_21 [i_0] [(unsigned short)10] [(unsigned short)10])))) ^ (((/* implicit */int) arr_12 [i_0] [i_4] [(unsigned short)9]))))) : (((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1133))) : (9333636775504027306ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [17U] [i_0])) ? (((/* implicit */int) arr_23 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 2] [(unsigned short)1])) : (((/* implicit */int) (short)7579))))))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)37144)) / (((/* implicit */int) (_Bool)1)))))));
                            arr_26 [i_0] [i_3 + 1] [i_8] = ((/* implicit */_Bool) arr_4 [i_8]);
                            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1)))));
                        }
                        var_28 = ((/* implicit */unsigned short) var_5);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            for (unsigned int i_10 = 3; i_10 < 18; i_10 += 1) 
            {
                {
                    var_29 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_4 [i_9]))))))));
                    /* LoopNest 2 */
                    for (short i_11 = 4; i_11 < 18; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)-1151)))))))) % (((/* implicit */int) ((_Bool) ((unsigned short) arr_32 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_11] [i_12] [i_11]))))));
                                var_31 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) var_11)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) / (((arr_34 [i_9] [i_9] [i_9] [i_9] [i_9]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))))))));
                                var_32 ^= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)32245))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (18163191598779930578ULL)))) ? ((-(((/* implicit */int) arr_23 [i_10 - 3] [(signed char)9] [(signed char)3] [(signed char)3] [i_0 - 3])))) : (((((/* implicit */int) (short)32752)) << (((((((/* implicit */int) arr_23 [i_10 - 3] [i_9] [i_9] [i_10 - 3] [i_0 - 2])) + (112))) - (24)))))));
                }
            } 
        } 
    }
    var_34 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_1))) << (((((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_7))) : (18446744073709551615ULL))) - (1529887075ULL)))));
}
