/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209529
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 792388850)) ? (9612058412958602647ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_0] [i_0])))) ? (2458216655717444020LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) - (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_0])) ? (((((/* implicit */_Bool) arr_1 [4])) ? (3885059109152135553ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [11] [i_2] [(signed char)6] [i_4]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_4 + 1] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1])))))))));
                                arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_4 + 1] [i_2] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */int) arr_2 [i_0])), (arr_1 [i_1]))) > (((/* implicit */int) (!(((/* implicit */_Bool) 256983891))))))))) : (arr_7 [i_4] [i_2] [(unsigned short)0] [i_0])));
                                arr_19 [i_0] [i_0] [i_2] [(unsigned char)3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3] [i_4])) ? (arr_17 [i_0] [i_0] [i_2] [i_3] [i_1]) : (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_4 [i_2]))))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_3] [i_4])) : (((/* implicit */int) (unsigned char)228))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1]))) : (((((/* implicit */_Bool) (unsigned char)241)) ? (8239941611947536014LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_1] [i_2] = min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) (short)(-32767 - 1)))))), (arr_10 [i_0] [i_1] [i_2] [i_2]))), (((/* implicit */long long int) arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2])));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5])) ? (((/* implicit */int) arr_22 [i_5] [i_5])) : (((/* implicit */int) arr_22 [i_5] [3LL]))))) ? (((((/* implicit */_Bool) arr_22 [i_5] [i_5])) ? (((/* implicit */int) (short)17217)) : (arr_23 [i_5]))) : (((/* implicit */int) max((arr_22 [i_5] [i_5]), (((/* implicit */unsigned short) arr_21 [7U]))))))), (((((/* implicit */_Bool) arr_23 [i_5])) ? (((((/* implicit */_Bool) arr_21 [i_5])) ? (((/* implicit */int) (unsigned char)225)) : (arr_23 [i_5]))) : (((/* implicit */int) arr_21 [i_5]))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_17 += (-(arr_26 [i_6]));
                    var_18 = ((/* implicit */unsigned short) arr_28 [i_7] [i_7 - 1] [(signed char)21]);
                    arr_31 [i_5] [i_7] [i_7] [i_5] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) ((unsigned char) arr_23 [i_5]))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_5] [(unsigned char)3] [i_7 - 1])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_30 [i_6]))))))))));
                }
            } 
        } 
    }
}
