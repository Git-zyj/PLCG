/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207739
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_10 *= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) ((unsigned short) arr_0 [(_Bool)1] [i_0]))))) * (((((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) * (((var_4) % (((/* implicit */int) (_Bool)1))))))));
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (short)-6584))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)72)) : (((int) arr_0 [(unsigned char)15] [(_Bool)0])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_7 [6] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_1] [i_2] [i_2]))));
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) arr_4 [3] [i_2] [(unsigned char)3])))))));
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-16)) / ((+(((/* implicit */int) var_7)))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            var_15 = (_Bool)1;
            var_16 = ((/* implicit */unsigned short) var_8);
            var_17 *= ((/* implicit */signed char) ((long long int) 198162069U));
            /* LoopSeq 3 */
            for (unsigned char i_4 = 1; i_4 < 20; i_4 += 2) 
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [(_Bool)1]))))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4 - 1] [(_Bool)1] [i_1]))) > (var_3))))));
                arr_14 [i_4] [i_3] [(signed char)10] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_8 [i_4 - 1] [(unsigned char)16] [i_4]))));
            }
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                var_19 = ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) arr_3 [(unsigned char)13] [i_3])))));
                arr_17 [(signed char)19] [(_Bool)1] [(unsigned char)6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))) ^ (arr_1 [i_5])));
            }
            for (unsigned char i_6 = 1; i_6 < 19; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 2; i_8 < 18; i_8 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (unsigned char)174);
                            var_21 = ((/* implicit */unsigned short) (short)-1);
                            var_22 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_8])) && (((/* implicit */_Bool) var_4)))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [(signed char)7] [i_6 + 2] [i_6]))))) ? (((/* implicit */unsigned int) ((arr_8 [i_1] [i_6 - 1] [i_6]) ? (((/* implicit */int) arr_25 [i_1] [i_6 + 1] [i_6])) : (((/* implicit */int) arr_8 [i_1] [i_6 + 1] [(signed char)11]))))) : (((unsigned int) arr_25 [(short)16] [i_6 + 2] [i_6]))));
            }
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_24 = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_18 [i_1] [5U] [i_1] [i_9]))))));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)124)) ? (((((unsigned long long int) arr_19 [i_9] [(_Bool)0] [1])) << (((((((/* implicit */int) (signed char)18)) ^ (((/* implicit */int) (unsigned char)145)))) - (115))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (13752684184936199924ULL)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)2355))) * (arr_11 [i_9]))))));
            var_27 = ((/* implicit */signed char) ((int) ((((((/* implicit */int) (unsigned char)240)) ^ (arr_29 [i_1] [9U]))) / (((((/* implicit */_Bool) arr_1 [(unsigned short)18])) ? (((/* implicit */int) var_7)) : (-257373915))))));
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) var_9))) | (((unsigned int) arr_4 [i_9] [i_9] [(unsigned short)0])))))));
        }
    }
    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) var_1))));
    var_30 = ((/* implicit */unsigned char) var_9);
}
