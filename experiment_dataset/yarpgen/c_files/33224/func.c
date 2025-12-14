/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33224
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) 5599578997050765267LL))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */short) ((unsigned char) (signed char)-68));
                        arr_13 [i_3] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-127)) < (((/* implicit */int) var_11))))) == (((/* implicit */int) ((signed char) var_9)))))), (((short) var_1))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            var_13 = arr_17 [i_2];
                            var_14 = ((/* implicit */unsigned char) (-((-(((long long int) (signed char)-70))))));
                            var_15 += ((/* implicit */signed char) arr_6 [10ULL] [i_3] [i_2] [10ULL]);
                            var_16 = var_0;
                        }
                        for (long long int i_5 = 2; i_5 < 10; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned short) arr_19 [(unsigned char)4]);
                            arr_21 [i_2] [i_2] [i_2] [i_1] [i_2] = max((((/* implicit */unsigned char) (signed char)-120)), ((unsigned char)76));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_5))));
                            var_19 = ((((/* implicit */int) (unsigned char)9)) % (((/* implicit */int) (unsigned char)1)));
                        }
                        var_20 *= ((/* implicit */unsigned short) ((signed char) var_1));
                    }
                } 
            } 
        } 
        var_21 += ((/* implicit */unsigned short) var_9);
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)97))) | (((((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))) : (933730765578840318LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (short)-29534)))))))));
    }
    for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        arr_24 [i_6] = ((/* implicit */signed char) arr_23 [i_6]);
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            var_23 = ((/* implicit */signed char) (-(arr_25 [i_6] [i_6])));
            arr_27 [i_6] [i_6] = ((/* implicit */short) min((((/* implicit */int) var_6)), ((((-(((/* implicit */int) (unsigned char)231)))) % ((~(((/* implicit */int) arr_22 [i_7] [i_6]))))))));
            arr_28 [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned char)136)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)25), (((/* implicit */unsigned char) (signed char)115))))) || (((/* implicit */_Bool) ((signed char) var_9))))))) : (((unsigned long long int) max((var_11), (var_3))))));
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            {
                var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)157)) <= (((/* implicit */int) var_9)))))))) ? ((~(((/* implicit */int) min((arr_5 [i_8] [i_9] [i_9]), (((/* implicit */unsigned short) (unsigned char)26))))))) : ((~(min((-1898923113), (((/* implicit */int) (unsigned char)173))))))));
                /* LoopNest 3 */
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    for (long long int i_11 = 2; i_11 < 7; i_11 += 3) 
                    {
                        for (short i_12 = 2; i_12 < 7; i_12 += 3) 
                        {
                            {
                                arr_41 [i_11] [(unsigned char)8] [(unsigned char)8] [i_8] |= min(((~(((/* implicit */int) arr_0 [i_11 - 2])))), (((/* implicit */int) ((short) (unsigned char)185))));
                                var_25 ^= ((/* implicit */unsigned char) min((((min((var_7), (((/* implicit */long long int) var_1)))) & (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) (~((~(((/* implicit */int) (short)3948)))))))));
                                arr_42 [i_10] [i_10] [i_10] [i_11 + 1] [i_10] = var_3;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
