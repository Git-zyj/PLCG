/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42712
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
    var_19 = ((/* implicit */short) ((((var_7) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)64)) != (((/* implicit */int) var_6))))) > ((-(((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_20 &= ((/* implicit */_Bool) var_5);
                        arr_15 [i_2] [i_1] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_10 [i_0] [i_0] [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)20146)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_0]))))) & (min((var_13), (((/* implicit */long long int) (unsigned short)65520)))))))));
                        var_21 = ((/* implicit */unsigned short) -5076075907483322623LL);
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                        {
                            var_22 = (-(((/* implicit */int) arr_4 [(short)17] [(short)17] [(short)17])));
                            var_23 = ((/* implicit */unsigned int) arr_3 [i_0]);
                            var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_3] [i_2] [i_0])), (arr_16 [i_0] [i_0] [i_2] [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_11 [i_0] [i_1] [(_Bool)1] [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-20129)))))))), (var_5)));
                        }
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_3] [i_5] |= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) max((arr_10 [i_3] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_10))))) ? (max((0ULL), (((/* implicit */unsigned long long int) (unsigned char)12)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_2]))))))));
                            var_25 = min((((/* implicit */int) min(((signed char)2), (arr_13 [i_0] [i_1] [i_1] [i_3])))), (((((/* implicit */int) arr_13 [i_2] [14] [i_2] [i_2])) % (var_7))));
                            arr_21 [(unsigned short)4] [i_1] [i_2] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)157)), (var_5)))) || (((/* implicit */_Bool) var_2)))))));
                            arr_22 [i_0] [i_0] [(unsigned short)18] [i_3] [i_0] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] [13]), (((/* implicit */long long int) var_9))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (max((arr_10 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) (short)-20145)))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-94))))) : (-678783987))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                        {
                            var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */long long int) arr_8 [i_0] [i_2] [i_3] [i_3])) : (arr_2 [i_3])));
                            var_27 = ((/* implicit */short) ((unsigned short) arr_7 [i_0]));
                        }
                    }
                } 
            } 
            arr_25 [12] [i_1] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_18)) ? (-1081202434) : (((/* implicit */int) var_15)))) + (((/* implicit */int) min((var_16), (arr_12 [i_0] [i_0] [i_0] [i_0]))))))), (min((((/* implicit */unsigned long long int) var_5)), (max((((/* implicit */unsigned long long int) (signed char)73)), (arr_16 [i_0] [i_0] [(unsigned short)15] [i_0] [i_0])))))));
        }
        var_28 -= ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) (short)32739)))) ? (((((/* implicit */_Bool) (short)20146)) ? (arr_10 [8U] [i_0] [8U]) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_16)))))), (((/* implicit */unsigned long long int) min((max(((unsigned short)5880), (((/* implicit */unsigned short) (unsigned char)199)))), (((/* implicit */unsigned short) ((((/* implicit */int) (short)20128)) != (((/* implicit */int) arr_5 [16LL] [16LL] [i_0]))))))))));
        var_29 = ((/* implicit */int) 1257795135578179995LL);
        arr_26 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)57285)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) max((arr_11 [i_0] [i_0] [i_0] [i_0]), (var_2)))) : ((-(((/* implicit */int) (unsigned short)48700))))))) ? (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    /* LoopSeq 1 */
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_27 [i_7] [10U])) ? (((((/* implicit */_Bool) (short)23258)) ? (((/* implicit */int) (short)-23259)) : (((/* implicit */int) (short)-20129)))) : (((/* implicit */int) max((var_0), (((/* implicit */short) (signed char)46))))))) | ((+(min((0), (((/* implicit */int) var_2))))))));
        var_31 = ((/* implicit */unsigned char) ((int) min((arr_28 [i_7]), (((((/* implicit */int) var_0)) | (((/* implicit */int) (unsigned short)3)))))));
    }
    var_32 *= min((min((var_17), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (var_17))))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)199)) && (((/* implicit */_Bool) -557603680))))));
}
