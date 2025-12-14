/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192622
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (((+(var_7))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_14)))))))) <= (((((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_10)))))) | (arr_0 [i_0] [i_0 + 1])))));
        var_16 = ((/* implicit */int) ((signed char) ((7857373122739240135ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((7857373122739240135ULL) != (10589370950970311480ULL))))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((((unsigned long long int) var_10)) << (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))) ^ ((~(2992378653U))))) - (2992378636U)))));
        arr_6 [i_1] = var_2;
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 21; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_15 [i_2] [i_3 - 2] [i_4] [i_3] = ((/* implicit */long long int) ((unsigned int) ((unsigned short) arr_7 [i_4] [i_3 - 1])));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_13 [i_2] [i_2] [i_4]) & (((/* implicit */long long int) ((/* implicit */int) var_11))))))))), (var_6))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 2; i_5 < 23; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) max((max((min((((/* implicit */unsigned long long int) var_3)), (10589370950970311462ULL))), (((/* implicit */unsigned long long int) ((arr_20 [i_6] [i_6] [i_3] [i_5 - 1] [i_3] [i_3] [i_2]) >= (var_6)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_22 [i_3] [i_5] [i_4] [i_3] [i_3] [i_2] [i_3]))))) < (((((((/* implicit */int) arr_7 [i_2] [i_2])) + (2147483647))) << (((((/* implicit */int) var_5)) - (19023))))))))));
                            var_20 = ((/* implicit */long long int) ((((max((var_9), (((/* implicit */long long int) var_8)))) >= (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (unsigned char)245))))))) && (((/* implicit */_Bool) ((short) max((((/* implicit */unsigned long long int) var_1)), (arr_11 [i_3])))))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 1; i_7 < 21; i_7 += 1) 
                        {
                            var_21 ^= arr_13 [i_2] [i_2] [i_5];
                            var_22 &= ((unsigned short) var_4);
                            arr_25 [i_3] [i_5] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_1))) < (((/* implicit */int) arr_18 [i_3] [i_3]))));
                            arr_26 [i_2] [i_2] [i_7] [i_5] [i_7] [i_2] &= ((/* implicit */_Bool) ((signed char) ((var_12) <= (var_12))));
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_23 = var_10;
                            var_24 = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_3] [i_3] [8U] [i_5 + 1] [i_8])) % (((/* implicit */int) arr_16 [i_3] [i_3] [i_4]))));
                        }
                        for (int i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            arr_33 [i_3] [i_5 - 2] [i_4] [i_3 + 2] [i_3] = ((/* implicit */long long int) arr_24 [i_2] [i_3] [i_5] [i_3]);
                            var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_2))))), (var_9)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (min((arr_11 [i_2]), (((/* implicit */unsigned long long int) arr_32 [i_3] [i_3] [i_3] [i_3 + 3] [i_9] [i_3] [i_5])))))))));
                            var_26 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((-306947807), (((/* implicit */int) (unsigned short)35558))))), ((+(arr_11 [i_2])))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            var_27 = var_1;
                            var_28 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned char)14))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) - (((/* implicit */int) arr_22 [i_3] [i_3] [i_5 - 2] [i_5] [i_3 + 3] [i_5 - 2] [i_3]))));
                            arr_36 [i_2] [i_3] [i_3] [i_5] [i_3] = ((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_3] [i_2] [i_2] [i_10] [i_10]);
                        }
                        for (int i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            var_30 += ((long long int) (((-(((/* implicit */int) arr_28 [i_2] [i_2] [i_4] [18LL] [(unsigned char)14])))) >= (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_0)))))));
                            var_31 = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */int) var_8)) | (((/* implicit */int) var_14)))) * (((/* implicit */int) min((var_10), (((/* implicit */signed char) arr_34 [i_2] [i_4] [i_5] [i_11]))))))));
                            arr_39 [i_11] [i_5] [i_3] [i_4] [i_3] [i_3] [i_2] = ((/* implicit */signed char) (+(min((max((((/* implicit */long long int) var_13)), (var_3))), (((/* implicit */long long int) min((arr_16 [i_3] [i_3] [i_11]), (((/* implicit */signed char) arr_34 [i_11] [i_4] [i_3] [i_2])))))))));
                        }
                    }
                }
            } 
        } 
        arr_40 [i_2] [i_2] = ((/* implicit */signed char) var_1);
        var_32 += var_8;
    }
    var_33 = ((/* implicit */short) var_7);
}
