/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/356
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_7)))))) % (((((/* implicit */_Bool) (unsigned short)17254)) ? (4268964381U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48270)))))))));
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (5826205342888271106LL) : (((/* implicit */long long int) var_4)))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_9 [i_3] [4ULL] [i_3 + 2] [i_3 + 1] [i_3 + 1] [(short)13]) : (((/* implicit */int) var_3)))))));
                                var_19 = ((/* implicit */int) ((short) ((long long int) var_14)));
                                arr_15 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17266)) | (((/* implicit */int) (unsigned char)156))))) ? (((((/* implicit */_Bool) (unsigned char)156)) ? (-1769393076) : (((/* implicit */int) (unsigned char)156)))) : (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_4 + 2]))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1214307853)) ? (((/* implicit */int) (unsigned short)17265)) : (((/* implicit */int) (_Bool)1))))) ? (((var_3) ? (((/* implicit */int) (short)4848)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_2] [i_2])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [(_Bool)1] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        for (long long int i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17265)) ? (15673097046064447038ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4848)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_5])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((/* implicit */int) max((arr_23 [i_1] [i_6] [i_5 - 1] [i_2] [i_2] [i_1] [i_0]), ((unsigned short)65535)))) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) min((arr_19 [i_6 + 2] [i_5] [i_1] [i_1]), (((/* implicit */short) var_5))))) : (((((/* implicit */_Bool) (short)-21205)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4848))))))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_1] [(signed char)8] [i_5] [i_5] [i_6]))) : (390199952U)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_6] [i_5 - 2] [i_2] [i_1])) : (((/* implicit */int) arr_23 [i_0] [i_1] [4U] [i_5] [i_5] [i_5] [i_6 + 1])))) : (min((arr_7 [i_6]), (((/* implicit */int) var_5))))))) ? (((3499591216U) << (((11507118U) - (11507088U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_0 [i_1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) : (var_15))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((((/* implicit */long long int) min((((((/* implicit */int) arr_8 [i_1] [i_1] [i_5] [i_6])) << (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_5] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17262)))))))), (max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_11 [i_5])), (var_14)))), (((((/* implicit */_Bool) var_5)) ? (822201719814143573LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11131))))))))))));
                                var_23 *= ((/* implicit */signed char) ((int) min((((unsigned char) arr_7 [i_6])), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_5 - 2]))))))));
                            }
                        } 
                    } 
                }
                arr_24 [i_0] [i_1] = ((/* implicit */short) (~(max((1292019902U), (((/* implicit */unsigned int) -1769393095))))));
            }
        } 
    } 
}
