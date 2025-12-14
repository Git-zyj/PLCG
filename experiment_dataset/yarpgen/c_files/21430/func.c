/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21430
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
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((((/* implicit */int) var_10)) / (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (var_14)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8340137689673677773LL)) ? (8340137689673677773LL) : (((/* implicit */long long int) -1327670628))))) ? (((((/* implicit */_Bool) min((8340137689673677773LL), (8340137689673677773LL)))) ? (((((arr_6 [0ULL]) + (2147483647))) << (((var_7) - (4236054116674543048LL))))) : (max((594451795), (((/* implicit */int) var_8)))))) : (((/* implicit */int) min(((unsigned short)62), (((/* implicit */unsigned short) (_Bool)1))))))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) ((_Bool) var_12))) : (min((((/* implicit */int) arr_4 [i_0])), (arr_5 [i_0] [i_1] [i_1] [i_1])))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) + (((/* implicit */int) ((short) 16991339667314818754ULL))))) : (((var_2) ? (arr_5 [i_0] [i_3] [i_1 + 1] [i_3]) : (arr_5 [i_0] [i_1] [i_1 + 2] [i_0])))));
                        arr_12 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_7 [i_1 + 1])) - (var_1))) <= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) 0ULL)) ? (arr_10 [i_0] [i_1] [i_2] [i_2] [i_0]) : (-8340137689673677773LL))))))));
                        var_17 = ((/* implicit */unsigned int) (-(var_5)));
                        arr_13 [i_0] [i_0] [12ULL] [i_3] = ((/* implicit */unsigned short) ((min((arr_10 [i_0] [i_1] [i_0] [i_3] [i_1 - 2]), (arr_10 [i_0] [i_0] [i_2] [i_3] [i_1 - 2]))) + (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_1] [i_1] [i_1] [i_3] [i_1 - 1]) > (arr_10 [i_3] [i_3] [i_3] [i_3] [i_1 - 3])))))));
                        arr_14 [i_0] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((16972646908070173329ULL) + (((/* implicit */unsigned long long int) (~(arr_5 [i_0] [i_0] [i_1 + 1] [i_1]))))));
                    }
                    for (signed char i_4 = 2; i_4 < 12; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_4] = ((/* implicit */unsigned long long int) arr_7 [i_1]);
                        var_18 = ((/* implicit */_Bool) max((max((2100152656484693402ULL), (((/* implicit */unsigned long long int) max((-6893680899860116050LL), (((/* implicit */long long int) var_3))))))), (((/* implicit */unsigned long long int) var_13))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        arr_22 [i_0] [i_1 - 1] = ((/* implicit */long long int) ((short) var_2));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 1; i_6 < 12; i_6 += 1) 
                        {
                            var_19 = arr_23 [i_6 - 1] [i_6] [i_0] [i_0] [i_0] [i_0] [i_0];
                            var_20 -= ((2305843007066210304ULL) * (((/* implicit */unsigned long long int) 8340137689673677773LL)));
                            arr_26 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_5 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : ((~(-6609414389181432781LL)))));
                        }
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) arr_8 [i_1 + 2] [i_5 + 2]);
                            var_22 = ((/* implicit */signed char) var_5);
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_27 [i_0] [i_1])))));
                        }
                        arr_31 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */_Bool) ((unsigned char) arr_3 [i_0]));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        arr_34 [i_0] [i_2] [i_1 - 3] [i_1] [i_0] = ((/* implicit */short) ((arr_33 [i_0] [i_1 + 2] [i_1 - 3] [i_1] [i_1 - 3] [i_1 - 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_1 - 1] [i_0] [i_1 - 1])))));
                        var_23 *= ((/* implicit */unsigned int) arr_29 [i_2] [i_0]);
                    }
                }
            } 
        } 
    } 
}
