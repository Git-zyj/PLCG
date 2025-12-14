/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19779
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
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (unsigned short)50835)) : (((/* implicit */int) (unsigned short)14700)))) : ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)40929))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 16; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] = 527501659;
                            /* LoopSeq 4 */
                            for (int i_4 = 2; i_4 < 13; i_4 += 4) 
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)17806)) ? (((/* implicit */int) (short)14693)) : (((/* implicit */int) arr_3 [i_1] [(short)4] [i_3])))), ((+(2027444901)))))) ? ((~(((/* implicit */int) (short)17806)))) : ((-(arr_4 [i_0] [i_0 - 1] [i_0 - 1])))));
                                var_21 = ((/* implicit */unsigned int) arr_0 [i_4]);
                                var_22 = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_4 - 2]);
                                arr_16 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (short)-15292))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                            {
                                arr_20 [i_5] [i_0] [i_3] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)91);
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((-2339234155055587794LL), (((/* implicit */long long int) 529400851)))))));
                            }
                            for (signed char i_6 = 2; i_6 < 16; i_6 += 4) 
                            {
                                var_24 = ((/* implicit */unsigned int) max((var_24), (arr_9 [i_1] [i_1])));
                                var_25 -= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3] [i_1])) ? (((/* implicit */int) arr_3 [(signed char)1] [2LL] [i_2 - 2])) : (arr_2 [i_3] [7ULL])))))))));
                                arr_23 [i_0] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) arr_4 [(signed char)15] [i_2] [i_1]);
                            }
                            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                            {
                                arr_28 [i_0] [i_0] = min((((/* implicit */unsigned int) ((unsigned short) max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [11U] [i_0]), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_3] [11LL])))))), ((+(3881004762U))));
                                arr_29 [12U] [12U] [i_0] [12U] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (short)25956)))), (((((/* implicit */int) (short)32767)) + (((/* implicit */int) (short)-15267))))))) ? ((~(((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_2] [15LL] [i_0])) : (((/* implicit */int) (short)-15284)))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2 - 3] [i_3])) ? (((/* implicit */int) (short)25956)) : (arr_5 [i_0] [i_0] [i_2 + 1] [i_3])))));
                                arr_30 [i_0] [6U] [i_2] [(short)0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17807)) ? (((((/* implicit */_Bool) 114463822)) ? (((/* implicit */unsigned int) 152783568)) : (2243805299U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14700)))))) ? (((/* implicit */unsigned long long int) -942081730403338281LL)) : (6723360938925876668ULL)));
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_13 [i_3])) + (2147483647))) >> (((((/* implicit */int) ((unsigned char) (short)15292))) - (157))))))));
                                var_27 = ((/* implicit */short) arr_27 [i_0]);
                            }
                        }
                    } 
                } 
                arr_31 [i_0] [i_0] = ((/* implicit */unsigned short) (-(18446744073709551615ULL)));
            }
        } 
    } 
}
