/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28658
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */long long int) ((unsigned short) 2666461726861748527ULL));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_17))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) arr_0 [i_0])))))));
            arr_6 [i_0] = ((/* implicit */_Bool) (-(arr_4 [i_0])));
            var_21 -= ((long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (short)(-32767 - 1))) : (var_6)));
            var_22 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0]))))));
        }
        var_23 = ((/* implicit */signed char) arr_4 [i_0]);
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_24 ^= ((/* implicit */int) min(((!(((/* implicit */_Bool) -252053183)))), (((((/* implicit */int) var_17)) <= (((/* implicit */int) (signed char)-29))))));
        /* LoopNest 3 */
        for (long long int i_3 = 4; i_3 < 14; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    {
                        var_25 += ((/* implicit */_Bool) ((long long int) max((((int) 1932488356486157395LL)), (((int) arr_12 [i_3])))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 3; i_6 < 16; i_6 += 4) 
                        {
                            arr_18 [i_2] [i_3] &= ((/* implicit */signed char) (unsigned short)3401);
                            arr_19 [i_2] [11] [i_2] [2U] [i_6 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned int) (-(arr_7 [i_2] [i_2]))))))) ? (arr_13 [(unsigned char)4] [(unsigned char)8] [i_4] [i_4] [i_4]) : (1060876874U)));
                            arr_20 [(unsigned short)16] [i_2] = ((/* implicit */long long int) min((((-4964855501154400710LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-5919))))), (((_Bool) arr_13 [i_2] [i_3 - 4] [i_4 + 1] [i_5] [i_2]))));
                        }
                        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 162432278523429296LL))));
                        var_27 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65523))))) ? (((/* implicit */int) ((((/* implicit */int) (short)28615)) > (1320871706)))) : (((/* implicit */int) (signed char)64))))) == (((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (-5823780693679366893LL) : (((/* implicit */long long int) (+(arr_15 [i_2] [i_3] [(_Bool)1] [(signed char)0] [(_Bool)1] [i_5] [i_5]))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        arr_30 [i_2] [i_7 + 1] [i_7] [i_8] [i_2] [i_7] = ((/* implicit */long long int) (((((_Bool)1) ? (arr_21 [(_Bool)1]) : (2147136949U))) >= (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_28 [i_9] [i_9] [i_8] [i_7] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                        var_28 = ((/* implicit */int) min((var_28), (((int) (unsigned short)26771))));
                        arr_31 [i_2] [i_7 + 1] [(unsigned short)15] [i_9] [i_2] = ((/* implicit */long long int) 1511925872U);
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_17 [i_9] [i_8] [i_7] [i_7] [(signed char)13]))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        var_30 *= ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_7 [i_7 + 1] [i_7 + 1])) / (arr_17 [i_7] [(unsigned short)5] [i_7 + 1] [i_7] [i_7 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_10] [i_2] [i_7] [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned int) (unsigned short)59120)), (2548721225U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)101))))))))) : (6331816258018910189LL));
                        arr_34 [i_2] [i_2] = max((((int) (~(((/* implicit */int) var_17))))), (((/* implicit */int) ((-8658624167638812519LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (1216020914U) : (((/* implicit */unsigned int) -1976440901)))))))))));
                    var_32 *= ((/* implicit */signed char) arr_33 [i_2] [i_2] [i_2] [i_8] [i_2]);
                    arr_35 [i_2] [i_2] [i_7] [i_8] = ((/* implicit */_Bool) var_7);
                }
            } 
        } 
    }
    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (short)-6767))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_13)), (var_5)))) ? (((/* implicit */int) ((2870100864U) == (var_14)))) : (var_11))))));
}
