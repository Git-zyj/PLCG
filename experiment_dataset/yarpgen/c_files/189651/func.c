/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189651
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
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))) == (((/* implicit */int) max(((unsigned char)238), (((/* implicit */unsigned char) var_2)))))))), (var_10)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_16 ^= (((!(((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) : (arr_3 [(unsigned char)8]));
                arr_4 [i_0] [i_0] [4U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [(short)3] [i_1])) || (((/* implicit */_Bool) (short)-1)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        for (long long int i_3 = 3; i_3 < 24; i_3 += 4) 
        {
            for (short i_4 = 1; i_4 < 21; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_2 + 2] [i_2]))) ? ((+(((/* implicit */int) var_10)))) : ((+(((/* implicit */int) (unsigned char)215)))))) : (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_8 [i_3] [i_4 - 1])))))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 4140970613U)) ? (((/* implicit */int) (unsigned short)16368)) : ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((arr_5 [i_3 + 1]) == (((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((939024285U) - (939024276U))))))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 19; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            {
                var_19 += ((((/* implicit */unsigned int) max((arr_7 [i_5 + 1] [i_5 - 1]), (((/* implicit */int) (unsigned char)217))))) < (1722435801U));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6] [22U])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2016))) : (((((/* implicit */_Bool) arr_12 [i_5 + 2] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5] [i_6]))) : (arr_9 [i_5] [i_6] [12ULL])))))) || (((/* implicit */_Bool) arr_14 [i_5 + 2] [i_5] [0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 2; i_9 < 9; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 1) 
                    {
                        {
                            var_21 += ((((/* implicit */int) (!(((/* implicit */_Bool) 701047796))))) != (((/* implicit */int) max((arr_14 [i_10 - 1] [i_9 - 1] [i_7]), (arr_1 [i_9] [i_9])))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10)))) + (min((3745086706U), (13U))))))));
                            var_23 = ((/* implicit */unsigned int) arr_6 [i_8]);
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_21 [i_7] [i_7]))));
                        }
                    } 
                } 
                var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_13)) > (((/* implicit */int) (unsigned char)0)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((/* implicit */int) arr_23 [i_7] [i_8] [i_8] [i_7]))))) : (((((/* implicit */_Bool) arr_19 [i_8])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_12 [i_7] [i_8])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) 3572841799450610556ULL))) > (((/* implicit */int) arr_23 [i_7] [i_7] [i_7] [6U])))))) : (((long long int) var_12))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_5 [i_7]), (((/* implicit */unsigned int) ((arr_5 [i_8]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7] [i_8]))))))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)6634))))));
            }
        } 
    } 
}
