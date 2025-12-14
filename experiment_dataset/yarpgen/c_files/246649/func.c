/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246649
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)201)) > ((~(((/* implicit */int) (unsigned short)28139))))));
        arr_5 [i_0] [i_0] = -1LL;
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 6; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned int) min((((unsigned long long int) arr_8 [i_1 + 1] [i_1] [i_1 - 1])), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) * ((+(((/* implicit */int) (_Bool)0)))))))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_3 [i_1 + 4])))) : (((/* implicit */int) ((short) arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 4])))));
        }
        arr_10 [i_0] = arr_7 [5LL];
        var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) | (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [(unsigned short)9]))))))), (5429793650515433490ULL)));
    }
    for (short i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) (unsigned short)65535);
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_12 [i_2] [i_2]))));
        arr_13 [i_2] = ((/* implicit */short) (+(arr_6 [i_2] [i_2])));
        arr_14 [i_2] = ((/* implicit */long long int) arr_1 [i_2] [i_2]);
    }
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((12579574893375682343ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)28139)) * (((/* implicit */int) (short)-1)))))))) ? (max((5003929608728163327ULL), (((/* implicit */unsigned long long int) (unsigned short)40513)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        var_18 = arr_16 [i_3];
        arr_17 [i_3] = ((/* implicit */unsigned short) arr_16 [i_3]);
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(min((((/* implicit */int) arr_21 [i_3])), ((+(((/* implicit */int) arr_20 [i_4])))))))))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_4])) ? (((/* implicit */int) (short)4095)) : (((/* implicit */int) (short)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3] [i_3] [i_4]))) : (((long long int) (short)19794))))) ? (min((((((/* implicit */_Bool) arr_21 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18278))) : (-542788465251215236LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)40687)) ? (((/* implicit */int) arr_20 [i_3])) : (((/* implicit */int) arr_21 [i_4]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        }
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)48299)), (12360892677172079943ULL)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) max((var_8), ((unsigned char)149)))), (min((((/* implicit */unsigned short) var_11)), (arr_25 [i_3] [i_5])))))) : (((/* implicit */int) (unsigned short)43627))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 4; i_6 < 22; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        arr_32 [i_5] [i_6 - 1] = ((/* implicit */long long int) (+(4294967295U)));
                        var_22 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned long long int) (unsigned short)10655)));
                        var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_3] [i_5] [i_6 - 1])) ? (((/* implicit */int) arr_22 [i_3] [i_5] [i_6 - 1])) : (((/* implicit */int) arr_22 [i_3] [i_5] [i_6 - 1]))))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 7988250092091225431LL))))), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16238))) : (arr_18 [i_6] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_29 [i_3] [i_5] [i_7] [i_7] [i_5]))))) != (2199023255551LL)))))));
                    }
                } 
            } 
            arr_33 [(unsigned short)12] [i_5] [i_5] = ((/* implicit */long long int) (short)-3);
            arr_34 [i_3] = arr_22 [i_3] [i_3] [i_3];
        }
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) << (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8191)))))) > (min((2199023255551LL), (((/* implicit */long long int) (unsigned char)0)))))))));
}
