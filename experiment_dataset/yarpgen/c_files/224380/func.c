/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224380
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
    var_14 = ((/* implicit */int) var_9);
    var_15 ^= ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_2 [(unsigned short)11] = min((((/* implicit */unsigned short) max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))), (min((var_5), (((/* implicit */unsigned short) (short)25238)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max(((short)25238), ((short)(-32767 - 1))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((/* implicit */int) (short)-25238)), (182456)))) != (1290683579U)))), ((unsigned char)144))))));
            var_17 = ((/* implicit */unsigned char) (short)25235);
        }
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((11603531771441629580ULL), (((/* implicit */unsigned long long int) var_7)))))));
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            for (unsigned int i_5 = 1; i_5 < 11; i_5 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        arr_19 [i_3] [i_5] [i_3] [(short)1] = ((/* implicit */_Bool) var_4);
                        var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [10U])))) ? (min((arr_15 [i_3] [(_Bool)1] [(_Bool)1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_3]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)6])))));
                    }
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 3; i_8 < 11; i_8 += 1) 
                        {
                            {
                                arr_25 [i_3] [i_3] [(short)0] [0] [i_5] = ((/* implicit */unsigned char) (-(-2097642816)));
                                var_20 ^= ((/* implicit */int) 11603531771441629580ULL);
                            }
                        } 
                    } 
                    var_21 = var_3;
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            for (unsigned short i_10 = 2; i_10 < 12; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_38 [(short)9] [(short)9] [(_Bool)1] [(short)9] [10] = (-(((arr_7 [i_12] [i_12 - 1] [i_12 - 1]) ? (((/* implicit */int) arr_7 [i_12] [i_12 - 1] [i_12 - 1])) : (((/* implicit */int) arr_7 [i_12] [i_12 - 1] [i_12 - 1])))));
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_24 [8] [8] [i_10] [(unsigned char)12] [(signed char)8] [(short)10] [(_Bool)1]))));
                                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_16 [i_3] [(signed char)1] [i_3] [6ULL] [2]) | (((/* implicit */unsigned int) ((/* implicit */int) min((var_13), (((/* implicit */short) (unsigned char)144)))))))))));
                                var_24 = ((/* implicit */unsigned long long int) 652484407U);
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_3))));
                            }
                        } 
                    } 
                    var_26 ^= ((/* implicit */int) arr_7 [i_10 + 2] [i_10 + 2] [i_10 + 2]);
                }
            } 
        } 
    }
}
