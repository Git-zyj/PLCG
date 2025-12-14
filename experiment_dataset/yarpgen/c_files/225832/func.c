/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225832
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
    var_17 = var_13;
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 858294166)) : (((((/* implicit */_Bool) var_2)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)35)))))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    var_19 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) (+(var_6)))) : (var_16));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (unsigned short)55574))));
                var_21 = ((/* implicit */long long int) (unsigned short)55603);
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 21; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                                var_22 = ((/* implicit */signed char) (~(((/* implicit */int) var_15))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) (unsigned short)9950);
                    var_24 = ((long long int) arr_12 [i_2 + 1] [i_2 + 1]);
                }
                for (long long int i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
                {
                    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((((/* implicit */long long int) -1354556173)) / (arr_15 [i_0] [i_1] [i_5] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) min((arr_6 [i_0] [i_5 + 2]), (arr_6 [i_0] [i_1 + 2])))));
                    arr_18 [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (unsigned short)9952)))) : (((((/* implicit */int) arr_16 [i_0] [i_0] [i_5])) * (((/* implicit */int) ((unsigned char) (unsigned char)253)))))));
                    var_26 = ((/* implicit */short) ((int) (signed char)0));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        for (short i_7 = 1; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0] [i_1])) || (((/* implicit */_Bool) arr_22 [i_6] [i_7]))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_0]))))))) ? (((((/* implicit */_Bool) (unsigned short)9933)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23))) : (1884497341U))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)125)) >= (arr_22 [i_6] [i_6])))) % (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_1)) : (arr_10 [19LL] [i_1 - 3] [i_5] [19LL] [i_5] [19LL] [i_7 + 1]))))))));
                                var_28 += ((/* implicit */int) arr_6 [i_1] [i_1]);
                                arr_23 [i_0] [i_1 + 3] [i_1 + 2] [i_5] [i_6 - 1] [i_7] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_10)) ? (arr_8 [i_0] [i_6 - 1] [i_5] [i_7 - 1] [i_5 + 2]) : (arr_8 [i_7] [i_1] [i_5 - 1] [i_7 - 1] [i_5 + 3]))), (min((arr_8 [i_0] [i_1 + 2] [i_1 - 2] [i_7 - 1] [i_5 + 1]), (((/* implicit */long long int) (unsigned short)8))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */short) ((((max((var_13), (((/* implicit */long long int) arr_19 [i_0] [i_0] [i_0] [(signed char)21] [i_1])))) >= (((/* implicit */long long int) (+(((/* implicit */int) var_8))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)59228)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)52)))))) : (1869796689)));
                }
                for (long long int i_8 = 1; i_8 < 21; i_8 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */_Bool) min((var_30), ((!(((/* implicit */_Bool) ((arr_9 [i_1 - 2] [i_8 + 4] [i_8] [i_8 + 3]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_9 [i_1 - 2] [i_8 + 4] [i_8] [i_8 + 3])))))))));
                    var_31 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)57193))));
                    var_32 = ((/* implicit */short) arr_13 [i_8] [i_8] [i_8] [i_8] [i_0]);
                    arr_26 [i_8 + 4] = ((/* implicit */unsigned short) (~(var_10)));
                }
                var_33 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)55574))))) || (((/* implicit */_Bool) ((arr_0 [i_1]) ? (var_7) : (var_7)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((((/* implicit */_Bool) (unsigned char)241)) || (((/* implicit */_Bool) (unsigned char)99))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)89)) && (((/* implicit */_Bool) (unsigned char)20)))))));
            }
        } 
    } 
    var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (-9223372036854775803LL) : (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) < (63LL))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-19781))) / (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)20)) ? (2410469962U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30632))))))))));
}
