/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53168
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
    var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))))) || (((/* implicit */_Bool) var_3))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 + 1])) & (((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0 - 1]))) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        arr_4 [(signed char)2] = ((/* implicit */long long int) var_11);
        arr_5 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)194));
        arr_6 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [9LL]);
        arr_7 [i_0] = ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [(signed char)9])) <= (((/* implicit */int) arr_1 [i_0]))))));
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    arr_16 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [15ULL] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((131469800724024051LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1]))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */int) arr_11 [(short)2] [(signed char)7])) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [i_1] [i_2]), (arr_10 [i_2] [i_3]))))) : (((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_13 [i_1] [i_2] [i_3]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 16; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_21 [i_1] [i_3] [6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_3] [i_2 - 1])) && (((/* implicit */_Bool) min((((/* implicit */int) min(((unsigned short)13560), (var_7)))), (((((/* implicit */_Bool) arr_14 [i_1] [(unsigned char)0] [9ULL])) ? (((/* implicit */int) arr_17 [i_3] [i_2] [(_Bool)1])) : (((/* implicit */int) var_17)))))))));
                                arr_22 [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_8 [i_2 - 1] [i_2 - 1]) + (2147483647))) << (((var_2) - (1238579865)))))) ? (max((((/* implicit */unsigned long long int) arr_11 [i_2 + 1] [i_4 - 1])), (arr_12 [i_4 - 1] [i_4] [i_5]))) : (((/* implicit */unsigned long long int) -131469800724024021LL))));
                            }
                        } 
                    } 
                    arr_23 [i_1] [(unsigned char)1] [i_3] [i_3] = ((/* implicit */long long int) ((var_15) ? (((((/* implicit */_Bool) 131469800724024073LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-4852)))) : (((/* implicit */int) ((signed char) arr_11 [i_2 - 1] [i_2])))));
                    arr_24 [i_1] [(unsigned short)11] [i_1] [(unsigned char)15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15816)) ? (((/* implicit */long long int) ((/* implicit */int) (short)15816))) : (131469800724024049LL)));
                }
            } 
        } 
        arr_25 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) | ((+(((/* implicit */int) arr_10 [15LL] [i_1]))))));
    }
    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        arr_30 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_29 [i_6]) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)1962)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((var_4) > (((/* implicit */long long int) ((/* implicit */int) var_17))))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))));
        arr_31 [i_6] [12ULL] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))) : (min((((/* implicit */unsigned long long int) (short)-15799)), (((((/* implicit */_Bool) arr_26 [(_Bool)1])) ? (arr_27 [(_Bool)1]) : (((/* implicit */unsigned long long int) var_2))))))));
    }
}
