/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4571
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
    var_14 = ((/* implicit */unsigned short) max((max((((short) (unsigned short)19802)), (var_6))), (((/* implicit */short) var_10))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_15 = ((unsigned int) max((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)20955)) : (((/* implicit */int) (unsigned char)32)))), ((-(((/* implicit */int) arr_0 [i_0 - 2]))))));
        var_16 *= max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0 - 1]))))), (5285861228154282598ULL));
    }
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned short) var_3))), (min((((/* implicit */long long int) var_9)), (max((-213555586496565624LL), (((/* implicit */long long int) (unsigned short)21574))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_18 |= ((/* implicit */long long int) arr_3 [(unsigned char)8]);
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_4 [i_2 + 2]), (arr_4 [i_2 + 1]))))));
            var_20 = ((/* implicit */short) min((((/* implicit */int) max(((unsigned short)65526), ((unsigned short)3475)))), (((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) arr_0 [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_8 [i_1] [i_3] [i_3]), (arr_8 [i_1] [i_1] [i_3])))) > (((((((/* implicit */int) var_7)) / (((/* implicit */int) arr_2 [i_1])))) & (((/* implicit */int) ((short) arr_8 [i_1] [i_1] [i_1])))))));
            var_22 = ((/* implicit */long long int) min((((/* implicit */int) var_3)), ((-(((/* implicit */int) arr_0 [i_1]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        {
                            arr_20 [i_1] [(unsigned short)7] [(short)11] [13LL] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)198)), ((unsigned short)49907)));
                            arr_21 [i_1] &= max(((~((-(arr_18 [i_1] [i_4] [i_5]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((15898520308314954547ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65530)))))) ? (((/* implicit */int) arr_5 [i_1] [i_3] [i_4])) : (((/* implicit */int) (unsigned short)5967))))));
                        }
                    } 
                } 
            } 
            var_23 *= ((/* implicit */short) ((unsigned short) (((!(((/* implicit */_Bool) var_12)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 213555586496565623LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))));
        }
        for (short i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) min((5730835583803450744ULL), (((/* implicit */unsigned long long int) -213555586496565606LL))))) ? (((/* implicit */int) (unsigned short)49897)) : (((/* implicit */int) arr_16 [i_1] [i_1] [i_7] [i_7] [i_7]))))));
            arr_24 [i_1] [i_1] [i_7] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((short) (short)-1))) ? ((-(arr_18 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) arr_6 [i_1])))));
            var_25 = ((/* implicit */unsigned short) var_0);
        }
        for (short i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (short i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_16 [i_1] [i_8] [i_8] [i_9] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_9]))) : (8451317485653755067ULL))), (((/* implicit */unsigned long long int) arr_15 [(short)18] [i_8] [i_8] [i_9]))))) ? (((/* implicit */int) var_12)) : ((((!(((/* implicit */_Bool) arr_8 [i_1] [i_8] [i_9])))) ? (((/* implicit */int) (unsigned short)15628)) : (((/* implicit */int) arr_9 [(short)3] [(short)3]))))));
                var_27 = ((/* implicit */unsigned short) (unsigned char)35);
                var_28 = ((/* implicit */long long int) var_11);
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_8] [i_9]))))) != (((/* implicit */int) arr_10 [i_8] [i_9]))));
            }
            for (short i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                var_30 += ((/* implicit */short) ((((/* implicit */int) (unsigned short)2604)) & (((/* implicit */int) (unsigned short)57485))));
                arr_31 [i_1] [i_10] [i_10] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_11)) ? ((-(arr_30 [i_10] [(unsigned short)12] [i_8] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7222)))))));
                var_31 = ((/* implicit */long long int) (short)4078);
                var_32 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_1] [i_1] [i_10])))))));
            }
            /* vectorizable */
            for (short i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                arr_35 [i_1] [i_8] [i_8] [i_11] = ((/* implicit */short) 12715908489906100869ULL);
                var_33 += ((/* implicit */unsigned char) ((((/* implicit */int) (short)-7194)) / (((/* implicit */int) arr_25 [i_1] [i_11]))));
                var_34 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)33164)) ? (213555586496565619LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12)))));
            }
            arr_36 [i_8] = ((/* implicit */long long int) ((arr_30 [i_8] [i_1] [i_8] [i_8]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2))))));
        }
    }
    var_35 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
}
