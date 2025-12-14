/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221986
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            var_17 -= ((/* implicit */long long int) 18446744073709551594ULL);
            var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (arr_0 [i_1 - 3] [i_1 - 3])))) ? (min((-1388509991), (86368536))) : (((arr_0 [i_1 + 1] [i_1 - 3]) & (arr_0 [i_1 - 3] [i_1 - 3])))))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) ((arr_3 [i_0] [i_1 - 1] [i_2 - 1]) / (arr_3 [2] [i_1 - 2] [i_2 - 2])))))))));
                        arr_10 [7ULL] [i_1] [i_2] [9ULL] = ((/* implicit */unsigned short) max((min((min((var_13), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((arr_4 [i_3]) ? (((/* implicit */int) (unsigned short)4040)) : (((/* implicit */int) var_7))))))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) ^ (arr_5 [i_0] [i_0])))));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            var_20 = ((/* implicit */short) 5705386310541890250LL);
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */signed char) max((((arr_13 [i_4 + 1] [(signed char)1]) - (max((((/* implicit */unsigned long long int) arr_6 [i_0])), (17309990853390673625ULL))))), (((/* implicit */unsigned long long int) var_15))));
                var_22 = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) min((arr_15 [i_5] [3ULL]), (((/* implicit */signed char) arr_8 [i_0] [i_4]))))))));
                arr_17 [i_0] [i_5] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(-86368532)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_16 [i_5] [i_4 + 2] [i_0]))))))) : (((/* implicit */int) var_3))));
            }
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned char) var_10);
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((-86368564) + (2147483647))) << (((((/* implicit */int) (unsigned short)4022)) - (4022)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 13538052805827538114ULL)) && (((/* implicit */_Bool) var_9))))) : (((-86368532) & (((/* implicit */int) var_2))))));
                            var_25 &= ((/* implicit */signed char) max(((((+(((/* implicit */int) (unsigned short)10)))) - ((-(86368536))))), (((366840229) - (((/* implicit */int) (unsigned short)4040))))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            var_26 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) var_3)))))));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [0ULL] [i_9] [(signed char)4])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_3))));
            var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
        }
    }
    var_29 = ((/* implicit */signed char) ((unsigned long long int) ((_Bool) var_9)));
}
