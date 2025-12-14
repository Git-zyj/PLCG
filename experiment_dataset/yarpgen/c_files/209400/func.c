/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209400
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_3])) ? (((/* implicit */int) arr_6 [i_3] [i_1])) : (((/* implicit */int) (_Bool)1)))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_5) : (var_3)));
                            var_21 -= ((/* implicit */_Bool) (~(((arr_0 [i_0]) % (arr_0 [i_0])))));
                        }
                    } 
                } 
                var_22 |= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]);
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) arr_0 [7ULL])))))) : (((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_24 = (i_5 % 2 == zero) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_3 [i_0])))) >> ((((+(((/* implicit */int) arr_15 [i_5])))) - (85)))))) : (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_3 [i_0])))) >> ((((((+(((/* implicit */int) arr_15 [i_5])))) - (85))) + (121))))));
                                var_25 = ((/* implicit */short) ((var_18) | (((/* implicit */unsigned long long int) ((((_Bool) arr_4 [i_0] [i_5 + 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5]))) : ((-(arr_14 [i_0] [i_0] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) var_16);
    /* LoopSeq 2 */
    for (unsigned int i_7 = 3; i_7 < 19; i_7 += 3) 
    {
        var_27 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((arr_22 [i_7]) != (arr_21 [5U] [i_7 + 2])))))), (((unsigned long long int) (-(var_4))))));
        var_28 = ((/* implicit */short) arr_22 [i_7 + 1]);
        var_29 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(var_18))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)5096)))))));
        var_30 = ((/* implicit */long long int) var_18);
    }
    for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
    {
        var_31 = ((/* implicit */unsigned char) var_12);
        var_32 = ((/* implicit */unsigned long long int) arr_11 [2ULL] [i_8] [i_8]);
        var_33 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)60439)) >> (((/* implicit */int) var_11))))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_7 [i_8])), (var_6)))) : (((/* implicit */int) arr_6 [i_8] [(_Bool)1])))));
    }
    var_34 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) * (((-44737426) / (((/* implicit */int) var_16))))));
}
