/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218398
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_16 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 4])) ? (-2) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((arr_5 [i_0 + 3]) > (arr_5 [i_0 + 2])))) : (((/* implicit */int) ((unsigned char) arr_5 [i_0 - 1]))));
            var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_1 [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) ? (((arr_3 [i_1]) << (((min((var_4), (((/* implicit */unsigned int) (short)-32758)))) - (144628542U))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [i_1] [i_1]))))));
            var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) ((int) arr_1 [i_0 - 2] [i_0 - 2]))) ? (((/* implicit */long long int) 4294967286U)) : ((~(((((/* implicit */_Bool) (short)32467)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) arr_5 [i_1]))))))))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned short)534))))) / ((+(var_7)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) arr_5 [11ULL])) : (arr_1 [i_2] [11U])))), (((var_6) * (((/* implicit */unsigned long long int) var_4)))))))))));
                arr_9 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) ((unsigned char) (signed char)6))), (arr_0 [i_1])))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (short)-3794);
                            arr_14 [i_0] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) 9U)), ((-((-(arr_4 [i_0] [i_3])))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [19] [i_1] [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)17112)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_12 [i_0] [i_0 - 2] [i_0 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [(unsigned short)14] [i_5]))) : (arr_0 [i_0])));
                    var_21 = ((/* implicit */short) min(((-(((((/* implicit */_Bool) (unsigned short)65001)) ? (((/* implicit */int) (signed char)11)) : (2147483638))))), ((+(((/* implicit */int) arr_6 [i_5] [i_5]))))));
                    var_22 -= (_Bool)0;
                    arr_18 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [i_0] [(unsigned short)12]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0]))) : (((unsigned long long int) arr_15 [i_0] [i_1] [i_0] [i_5]))))) ? (((/* implicit */long long int) ((unsigned int) var_5))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4136)) ? (arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((((/* implicit */_Bool) (short)6011)) ? (arr_12 [i_2] [i_1] [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_5] [(unsigned short)11]))))) : (var_14)))));
                }
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                {
                    arr_23 [15ULL] [15ULL] [i_0] [i_6] [i_6] = 16215391336987014444ULL;
                    var_23 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) (_Bool)1)))));
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 67098052U)) ? (((/* implicit */int) ((short) arr_1 [i_0] [(signed char)13]))) : (((/* implicit */int) arr_8 [i_1]))))) ? (arr_19 [i_0] [4U] [i_0 + 4] [i_0 - 1] [i_0 + 4]) : (((((/* implicit */_Bool) (unsigned short)2697)) ? (arr_7 [i_2] [i_2] [i_0]) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 4] [i_0 + 4] [i_0 - 1])))))))));
                }
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((unsigned long long int) ((arr_5 [i_2]) == (((/* implicit */int) arr_11 [i_1] [i_0 - 2]))))))));
                    arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_16 [i_0 - 1] [i_0] [i_0] [i_7])) : (((/* implicit */int) arr_16 [i_2] [i_0] [i_2] [(signed char)11]))))) ? (((unsigned int) arr_16 [i_0 + 1] [i_0] [0U] [i_7])) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))));
                    arr_28 [i_0 - 1] [i_1] [i_2] [i_0] = ((/* implicit */short) var_5);
                    var_26 += ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_16 [i_0 + 2] [i_1] [i_0 + 2] [i_1]))))));
                }
                var_27 -= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_9)) ? (arr_19 [i_0] [(short)8] [i_0] [i_1] [i_2]) : (((/* implicit */int) var_9)))) <= (((/* implicit */int) arr_13 [i_2] [i_1] [i_1] [i_1] [i_0 + 2] [i_0 + 2] [i_0 + 2])))) ? (((/* implicit */int) ((((long long int) arr_4 [i_1] [i_1])) > (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (((/* implicit */int) ((signed char) var_1)))));
            }
        }
        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            var_28 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_21 [i_8] [i_0] [(unsigned char)15]) : (var_11)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((var_6) > (var_15)))))));
            arr_31 [i_0 + 3] [i_0] = ((/* implicit */unsigned short) ((((var_0) <= (((/* implicit */long long int) arr_0 [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(short)17])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4141))) : (arr_4 [i_0] [(unsigned short)8])))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10423))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */int) arr_15 [i_0 + 3] [i_0 + 4] [i_0] [i_0 - 2])) : (((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */int) (signed char)112)) : (arr_26 [i_0]))))))));
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (-((-(4501608320719468924LL))))))));
            var_30 |= ((/* implicit */long long int) arr_25 [i_0] [i_0] [i_0 + 4] [i_8]);
        }
        arr_32 [i_0] = ((/* implicit */signed char) ((long long int) var_12));
        arr_33 [i_0] = ((/* implicit */unsigned short) ((_Bool) ((int) arr_24 [i_0 - 2] [i_0] [i_0])));
    }
    var_31 |= ((/* implicit */_Bool) ((min((var_2), (((var_6) | (var_15))))) << (((var_15) - (4701850504109284816ULL)))));
}
