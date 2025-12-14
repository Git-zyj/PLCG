/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215894
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
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_2 [16U] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) var_0));
        var_10 = ((/* implicit */_Bool) var_2);
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (_Bool)0))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 16; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                for (signed char i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_1 + 1] [i_2 + 3] [i_1] [i_4] [i_1 + 1] = ((/* implicit */int) (short)-23);
                            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_5])) || ((_Bool)1)))) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (arr_3 [i_2])))))) * (((/* implicit */int) ((((var_7) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (2396900558U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4 + 1] [(short)12]))))))))))))));
                            var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_4 [i_4] [i_4 - 2]), (((/* implicit */unsigned short) arr_10 [i_4 + 1] [i_1])))))));
                            var_14 = ((/* implicit */unsigned char) (_Bool)0);
                        }
                        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            arr_22 [i_2 - 2] [i_1] [i_6] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1 + 1] [(signed char)15] [(unsigned char)12]))) : (arr_6 [i_4] [i_1] [i_4])))), (((var_8) % (((/* implicit */unsigned long long int) 1536LL)))))) < (((/* implicit */unsigned long long int) 3799573059U))));
                            arr_23 [i_1] [i_2] = ((/* implicit */int) arr_9 [i_2] [i_2] [12ULL]);
                            var_15 = ((/* implicit */unsigned int) arr_21 [i_1] [i_1 + 1] [i_1 + 1]);
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(791596460)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_1])) ? (((/* implicit */int) arr_10 [i_1 + 2] [i_1])) : (((/* implicit */int) arr_10 [i_1 + 2] [i_1]))))) : ((+(arr_0 [i_6])))));
                        }
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) arr_24 [i_1] [i_2 + 3] [(signed char)15] [i_1] [i_3] [(signed char)15] [i_7]);
                            var_18 -= arr_12 [i_1] [16ULL] [i_3] [i_7];
                            var_19 = ((/* implicit */signed char) (+(min(((+(arr_7 [i_1] [i_2 + 1]))), (((((/* implicit */_Bool) (unsigned short)9)) ? (arr_25 [i_1] [i_2 + 1] [i_2 + 3] [i_3] [i_4] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                            arr_26 [i_1] [i_2 - 1] [i_7] [i_2] [i_1 + 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)75)) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9289)))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_31 [i_1] [i_1] [i_2] [i_2] [i_1] [(signed char)13] [i_8] = ((/* implicit */short) (_Bool)1);
                            arr_32 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (-((+(arr_7 [i_1] [i_3])))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            arr_39 [i_9] [i_10] [i_10] = ((/* implicit */_Bool) arr_13 [(unsigned short)10] [i_10] [i_10] [i_10] [18ULL] [i_10]);
            var_20 = ((/* implicit */unsigned short) arr_25 [i_9] [i_9] [(short)10] [i_10] [i_10] [i_9]);
        }
        arr_40 [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)34182)) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) & (arr_35 [i_9])))) && (((/* implicit */_Bool) arr_36 [i_9])))))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_21 = ((/* implicit */int) (((~(((unsigned int) var_0)))) | (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (_Bool)1))))))));
        var_22 = ((/* implicit */int) 1969809818U);
    }
    var_23 = var_6;
}
