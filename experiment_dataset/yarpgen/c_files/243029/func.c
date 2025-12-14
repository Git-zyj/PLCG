/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243029
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (short)417))));
    var_14 = ((int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) -1791675177)), (2407072210U)));
        var_16 = (-(((/* implicit */int) var_11)));
        var_17 ^= ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((4250440641U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 539350636U)) ? (((/* implicit */int) (short)12427)) : (((/* implicit */int) (signed char)126)))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26)))))) ? (((/* implicit */unsigned int) arr_3 [i_1])) : (arr_4 [i_1])))) : (((min((var_6), (((/* implicit */unsigned long long int) arr_3 [i_1])))) - (((/* implicit */unsigned long long int) arr_4 [i_1]))))));
        arr_7 [i_1] [i_1] = (+((-((-(arr_3 [i_1]))))));
        arr_8 [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */long long int) 4205609120U)) == ((+(5155245871300462741LL))))))));
        var_19 = ((signed char) 2941784241U);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((arr_11 [i_2] [i_3] [i_2]) >= (((/* implicit */long long int) 829284601U))));
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_3] [i_4]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        arr_18 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)142))) + (arr_16 [16LL] [i_3] [i_4] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2])) + (((/* implicit */int) var_7)))))));
                        arr_19 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) 5361848267754326972LL);
                    }
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        arr_22 [i_2] [i_3] [i_4] [i_6] [i_2] [i_3] = ((/* implicit */short) (+(-5155245871300462737LL)));
                        var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)55869)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)12))));
                        arr_23 [9] [i_2] [i_2] [i_4] [i_6] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4])) ? (arr_13 [i_2] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_4] [i_2] [i_4] [i_6] [i_7] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_4])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_9))) >= (((/* implicit */unsigned long long int) (+(arr_11 [i_6] [i_2] [i_2]))))));
                            var_23 = ((/* implicit */short) (+((~(((/* implicit */int) var_2))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_2] [i_3] [i_4] [i_6] [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_17 [i_2] [i_2] [i_3] [i_3] [i_8] [i_3]))));
                            arr_32 [i_2] [i_6] [i_4] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) : (var_9)));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) (short)12446);
                            var_25 = ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)9638))))) - (9223372036854775807LL));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_29 [i_2] [i_3] [i_2] [i_2] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_3] [i_3] [i_4] [i_6] [i_9])))))) ? (((/* implicit */unsigned long long int) (+(arr_12 [i_2] [i_3])))) : (20ULL)));
                        }
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (arr_16 [i_2] [i_3] [i_4] [i_6]) : (arr_16 [i_2] [(_Bool)1] [i_4] [i_6]))))));
                    }
                }
            } 
        } 
        arr_35 [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
        var_28 = var_2;
    }
}
