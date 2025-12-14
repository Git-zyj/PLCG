/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29201
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
    var_12 = ((/* implicit */long long int) var_7);
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)17), (((/* implicit */unsigned char) (signed char)0))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_8)))))));
    var_14 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
                {
                    arr_8 [7U] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) : (arr_1 [i_0])))));
                    arr_9 [i_1] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (~(2281790897333302581ULL)));
                }
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    arr_13 [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-(arr_7 [i_0] [i_1] [i_3] [i_3]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))))) && (((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0 + 2] [i_1])), (((((/* implicit */_Bool) 134217724U)) ? (((/* implicit */int) var_7)) : (arr_4 [i_0] [i_1] [i_3]))))))));
                    arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_12 [i_3] [i_1] [i_1] [i_0]))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned char)1))))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_3])) == (arr_4 [i_0] [(signed char)10] [i_3])))) + (((/* implicit */int) ((unsigned short) arr_5 [i_0]))))) : ((+(((/* implicit */int) (unsigned char)35))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        arr_19 [i_4] [i_3] [i_1] [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0] [i_1] [i_4])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_7 [i_0 - 2] [i_1] [i_1] [i_4])))));
                        arr_20 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))))));
                    }
                    arr_21 [i_0] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (var_6))), (((/* implicit */int) max((var_8), (arr_2 [i_0] [i_0])))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_27 [i_0 - 3] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)5)))) / (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))))) ? (max(((-(((/* implicit */int) arr_24 [i_0 + 2] [i_0 + 2] [i_5] [i_6])))), (((((/* implicit */_Bool) (unsigned short)7770)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) arr_0 [i_6] [i_1])))))) : (max((var_6), (((/* implicit */int) (unsigned char)17))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                            {
                                arr_31 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_7] [i_0 - 1] [i_1] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (arr_6 [i_0 - 1]) : (arr_6 [i_0 + 2]))));
                                arr_32 [i_0] [i_1] [i_5] [11ULL] [15] [i_7] = (((+((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_1] [i_5] [i_6] [i_6] [i_5]))) : (4160749583U))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [i_5] [i_7]), (var_7)))))))));
                                arr_33 [i_0] [i_0 - 1] [i_5] [i_6] [i_7] [i_6] = ((/* implicit */long long int) (unsigned char)16);
                            }
                        }
                    } 
                } 
                arr_34 [i_0 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
