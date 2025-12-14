/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243331
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
    var_15 = ((/* implicit */long long int) max(((unsigned char)76), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)175)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */short) (unsigned char)175);
                                var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32760)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0 - 2] [i_1] [i_2] [3U] [0LL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_2 - 1] [16U] [i_2 - 1])) ? (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) <= (((arr_4 [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1]))) : (4437271632960737844ULL)))));
                                arr_22 [18ULL] [i_1] [18ULL] [14LL] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((signed char) arr_9 [i_0] [i_1] [i_2] [i_0] [i_2]))))) ? (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) arr_4 [i_0]))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [19ULL] [i_1] [i_2] [i_5] [7LL] [i_6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_13 [14U] [i_1] [16ULL] [2ULL] [i_6]))))))))));
                                arr_23 [7U] [i_1] [i_2 - 1] [i_2 - 1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(4437271632960737844ULL)))) ? (((/* implicit */int) (short)1008)) : ((~(((/* implicit */int) (short)-17575))))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (-1841507721361433175LL))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned short)13312)))))))));
                        var_18 = ((/* implicit */_Bool) (+(arr_9 [i_0] [i_0] [i_1] [i_2] [i_7])));
                        arr_28 [i_0] [i_0] [i_1] [(signed char)13] [(signed char)6] [(signed char)14] = arr_13 [(short)3] [1ULL] [i_1] [i_1] [i_0];
                    }
                    for (short i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                    {
                        arr_33 [i_0] [i_1] [i_2] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)25)) >> (((14986174008460238020ULL) - (14986174008460237991ULL)))));
                        arr_34 [i_0] [i_1] [(unsigned char)3] [i_2] [i_8] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_29 [i_0 + 2] [i_1] [i_2] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (3819229414U)))));
                    }
                    var_19 = ((/* implicit */short) ((signed char) max((((/* implicit */int) (unsigned short)11427)), (var_11))));
                    var_20 = min((var_5), (((/* implicit */short) (signed char)-39)));
                }
            } 
        } 
    } 
}
