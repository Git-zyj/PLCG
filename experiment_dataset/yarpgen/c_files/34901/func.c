/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34901
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [(unsigned short)23] [i_0] = ((/* implicit */unsigned char) (+(arr_0 [i_0])));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            arr_12 [i_1] [i_1] [i_4] [i_3] [i_4] = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)32750)) ? ((-(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_4 [i_0] [i_4] [i_2]))))))));
                            var_19 += min((arr_10 [i_0] [i_1] [i_2] [i_3] [i_2]), (((unsigned short) max(((short)3416), (var_2)))));
                        }
                        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((unsigned int) var_2))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3416)) ? (((/* implicit */int) arr_6 [i_2] [i_2] [(short)17] [i_0])) : (((/* implicit */int) arr_6 [i_3] [i_2] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) arr_3 [i_3] [i_0] [6LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3433))) : (18446744073709551608ULL)))))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 1; i_5 < 23; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) (signed char)-16);
                            var_22 = ((/* implicit */int) max((var_22), (max((max((((((/* implicit */int) arr_5 [i_0])) * (((/* implicit */int) var_14)))), (((/* implicit */int) var_8)))), ((-(((/* implicit */int) var_8))))))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0]))))) == (max((((/* implicit */long long int) var_4)), (9136346855999802425LL)))))) <= (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_15)) % (((/* implicit */int) (short)3417))))))));
                            arr_16 [i_0] [i_0] [6ULL] [i_2] [i_5 - 1] = ((/* implicit */unsigned char) ((arr_7 [i_0] [i_1] [i_0]) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_3] [(short)8])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) var_6)))) : ((+((-2147483647 - 1))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) 2873665097723035236ULL)))))) ? (((/* implicit */int) (short)-3417)) : (((var_3) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [(unsigned short)4])) || (((/* implicit */_Bool) (short)3416))))) : (((/* implicit */int) arr_10 [i_5] [i_2] [i_0] [i_2] [i_0]))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 1; i_6 < 23; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3]))));
                            var_26 |= var_15;
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        var_27 |= ((/* implicit */unsigned short) ((((unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7] [(unsigned short)14] [i_7]))))) != (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_6))))), (((((/* implicit */int) var_18)) * (((/* implicit */int) (signed char)(-127 - 1))))))))));
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_8] [i_9] [i_10 - 1]) ? (((/* implicit */int) arr_7 [i_7] [i_8] [i_7])) : (((/* implicit */int) arr_7 [i_7] [i_7] [i_7]))))) || (((/* implicit */_Bool) max((arr_14 [i_8] [i_9] [i_8] [i_8] [i_7]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) arr_10 [i_9] [i_8] [i_10 - 1] [i_7] [i_7])) : (((/* implicit */int) var_6))))))))));
                        var_29 ^= ((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned char)16] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) == (min((arr_14 [i_7] [i_8] [(_Bool)1] [i_7] [i_10]), (((/* implicit */unsigned long long int) arr_13 [i_7] [i_8] [(signed char)12] [i_9] [i_7])))))));
                        arr_29 [i_7] [i_8] [i_7] = ((/* implicit */short) var_10);
                        var_30 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_4)), (var_14)))) ? (((arr_0 [20]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_8] [i_9] [i_7] [i_10]))))) : (((((/* implicit */_Bool) arr_1 [i_7] [(signed char)20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_7] [i_10] [i_7] [i_10 - 1] [i_7] [i_7] [i_7]))) : (arr_14 [i_7] [i_8] [i_9] [i_10] [i_7]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_26 [i_7])), ((unsigned short)13)))))))));
                        var_31 ^= max((((long long int) max((((/* implicit */short) var_4)), ((short)-29850)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((((/* implicit */int) arr_17 [i_7] [(short)22] [i_8] [(short)22] [i_7])) >= (((/* implicit */int) arr_20 [i_7]))))))));
                    }
                } 
            } 
        } 
    }
    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) var_9))));
}
