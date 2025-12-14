/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191373
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
    var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */int) (signed char)39))))), (((var_4) << (((var_9) - (199631267)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (1928652334)))))) : ((~(var_8)))));
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_12)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) arr_1 [i_1 - 1] [i_1 - 1])));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned short) var_6))))) && (((/* implicit */_Bool) min((arr_1 [i_0] [(unsigned char)19]), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))))) <= (((/* implicit */int) ((unsigned char) ((unsigned int) var_11))))));
                    arr_9 [i_0] [i_0] [i_0 + 2] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_11)))) ? (((((arr_1 [i_0] [i_1 - 3]) / (((/* implicit */int) var_0)))) / (((/* implicit */int) ((short) 1928652340))))) : ((-(((/* implicit */int) arr_8 [i_1 - 2] [i_1] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 + 1])) ^ ((-(max((arr_3 [i_1]), (((/* implicit */int) var_10)))))))))));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_6 [20ULL] [(unsigned short)3] [i_2] [(signed char)3])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4 - 4])) ? (((/* implicit */int) var_10)) : (arr_1 [i_2] [i_1 + 1]))))));
                                arr_14 [i_3] [i_3] [i_0] [i_0] [8] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0] [i_0]))))), ((+(arr_3 [i_0])))));
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -1928652333)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15055))) : (var_11))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (short)-15067))) > (((/* implicit */int) ((_Bool) var_4)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)-15052)))))))))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (arr_12 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-15082))) <= (var_11))))))) ^ (((var_4) >> (((((-1928652316) & (((/* implicit */int) var_6)))) - (86)))))));
                }
                /* LoopSeq 3 */
                for (unsigned char i_6 = 3; i_6 < 21; i_6 += 3) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned short) var_0)))))))) && (((((/* implicit */int) ((((/* implicit */int) (signed char)67)) != (((/* implicit */int) (short)-26967))))) < (((/* implicit */int) (short)15054))))));
                    var_22 = ((unsigned char) arr_16 [i_0] [10U]);
                    var_23 = ((/* implicit */signed char) (short)-15052);
                    var_24 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)79)), (1928652345)));
                }
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 3; i_8 < 22; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)36347)), (600861798)));
                                arr_28 [i_0] [i_1] [i_0] [i_8] [(unsigned char)1] = ((/* implicit */signed char) var_6);
                            }
                        } 
                    } 
                    arr_29 [i_0] [i_1 - 1] [i_1] [i_1 - 3] = ((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0] [i_1] [i_7]);
                }
                /* vectorizable */
                for (unsigned char i_10 = 2; i_10 < 19; i_10 += 2) 
                {
                    arr_34 [i_1 - 3] [i_0] = ((/* implicit */long long int) ((var_4) + (((/* implicit */unsigned long long int) var_9))));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)10664))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 3381442420U)) ? (arr_7 [i_0 + 2] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10 + 4] [i_1 + 1] [i_1 + 1] [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) var_11);
                                var_28 += ((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_1]);
                                var_29 = ((/* implicit */unsigned short) var_2);
                                var_30 ^= ((/* implicit */unsigned char) (signed char)49);
                            }
                        } 
                    } 
                }
                arr_40 [i_0] [i_1 - 2] [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_25 [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_20 [i_0])) : (((/* implicit */int) var_3)))));
            }
        } 
    } 
}
