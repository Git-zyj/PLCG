/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191688
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
    var_13 = ((/* implicit */unsigned short) ((short) (_Bool)1));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */signed char) (short)27372);
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_8 [i_1 + 1] [i_1 + 1] [i_1])), (3979252105U)))), (min((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_2 [12LL]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) min((((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)45)))), (((/* implicit */int) (signed char)0)))));
                                arr_15 [i_0] [i_0] [20LL] [i_1] [i_2] [i_3] [9] = ((/* implicit */short) (((_Bool)1) ? (min((((/* implicit */unsigned long long int) ((int) (signed char)-81))), (((((/* implicit */_Bool) (unsigned short)19937)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (4794087025771090975ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1504667365)) && (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) var_8)))))))))));
                                var_15 ^= (unsigned short)12867;
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) ((int) min((((/* implicit */unsigned short) (signed char)90)), ((unsigned short)63962))));
                    var_17 = ((/* implicit */signed char) var_7);
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_5)) : (arr_13 [i_0] [12] [i_0] [i_0] [i_0] [i_0] [(short)9])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_13 [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))))) : (max((var_10), (arr_13 [i_0] [i_0] [i_0] [i_0] [(unsigned short)17] [i_0] [i_0])))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((short)-27933), (((/* implicit */short) (signed char)33)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_12 [i_5] [i_5] [i_5] [12ULL] [i_5] [i_5] [i_5])))) && (((/* implicit */_Bool) ((unsigned char) arr_16 [i_5] [i_5]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (1676578274U) : (((/* implicit */unsigned int) -170125934))))) ? (((/* implicit */unsigned int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (max((arr_3 [i_5]), (((/* implicit */unsigned int) var_12))))))));
        arr_19 [i_5] = ((/* implicit */long long int) max((((((((/* implicit */_Bool) (unsigned char)254)) && (((/* implicit */_Bool) arr_10 [i_5] [12ULL])))) ? (((/* implicit */unsigned long long int) min((2946096892873041685LL), (((/* implicit */long long int) (unsigned char)129))))) : (4313315894580407377ULL))), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
    }
    var_20 = ((/* implicit */signed char) min((((((((/* implicit */long long int) ((/* implicit */int) var_5))) | (-9223372036854775800LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-91))))))), (((/* implicit */long long int) var_10))));
}
