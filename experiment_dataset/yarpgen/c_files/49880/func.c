/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49880
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
    var_12 = ((/* implicit */_Bool) max((var_12), ((!((!(((/* implicit */_Bool) var_9))))))));
    var_13 = ((/* implicit */_Bool) (~(var_3)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_14 = 498719418;
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) || (((/* implicit */_Bool) arr_3 [i_1 + 2]))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_5))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) var_5))));
                }
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    var_18 = ((/* implicit */signed char) (((-(min((var_8), (-2079236575))))) % ((((~(((/* implicit */int) arr_0 [i_1] [i_0])))) | (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)33164))))))));
                    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) var_3))), (min((var_5), (arr_1 [i_0]))))))));
                    var_20 = ((/* implicit */signed char) arr_0 [i_0] [13LL]);
                    var_21 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_3]);
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((arr_0 [i_3] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [13]))))))) ? (((((/* implicit */_Bool) ((arr_9 [i_0] [i_1] [i_3]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33158)))))) ? (((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0] [(unsigned char)2])) : (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_1))) || (((/* implicit */_Bool) (~(var_3))))))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) var_7)) % (((/* implicit */int) (unsigned short)33156)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 16; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 2; i_6 < 16; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */short) var_1);
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_6 - 1])) ? (arr_13 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2]) : (((((/* implicit */_Bool) 17297812433295246710ULL)) ? (((/* implicit */int) (unsigned short)33156)) : (((/* implicit */int) (unsigned short)32371))))));
                            var_26 &= ((/* implicit */short) (~(((((/* implicit */_Bool) 1500516640U)) ? (6396548708476896897LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
                        }
                        var_27 = ((/* implicit */unsigned char) ((arr_11 [i_1 + 2] [i_1 - 1] [i_1 - 1]) % (((/* implicit */long long int) ((1773932862U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33141))))))));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) -591254030))));
                    }
                }
                for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_7]))) ? (((((/* implicit */int) arr_8 [(signed char)0] [i_1 + 2] [i_7])) % (((arr_6 [i_0] [i_7]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_17 [i_7] [i_0] [i_7] [i_0] [i_0])))))) : (max((((((/* implicit */int) (short)18347)) - (2147483624))), (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])))))))));
                    var_30 &= ((unsigned int) ((((/* implicit */_Bool) arr_20 [i_1 + 2] [i_0])) || (((/* implicit */_Bool) var_4))));
                    var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(-2147483627))))));
                    var_32 = ((/* implicit */unsigned int) ((int) var_7));
                }
            }
        } 
    } 
}
