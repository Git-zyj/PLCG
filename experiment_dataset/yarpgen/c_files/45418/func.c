/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45418
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
    var_20 = ((/* implicit */_Bool) min((var_20), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) var_10))), ((~(4255845691U))))))))));
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) -1635179459))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [4])) ? (((/* implicit */long long int) max((2147483631), (2147483641)))) : (max((((/* implicit */long long int) -2147483632)), (var_5))))));
                /* LoopNest 3 */
                for (signed char i_2 = 4; i_2 < 14; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [i_0 + 2] [i_0 + 2] = ((/* implicit */_Bool) ((unsigned char) max((max((((/* implicit */long long int) arr_2 [i_1])), (arr_7 [i_0] [i_1] [i_2 + 1] [i_2 + 1]))), (((/* implicit */long long int) arr_3 [(unsigned short)11])))));
                                arr_14 [(unsigned short)7] [i_1] [9LL] [(unsigned short)6] [i_0] [i_2 - 1] = ((/* implicit */signed char) max((arr_2 [i_1]), (min((arr_3 [(short)16]), (((/* implicit */int) arr_1 [i_0 + 1]))))));
                                var_23 = ((/* implicit */signed char) var_5);
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) ((arr_4 [(unsigned short)10] [(short)8] [(_Bool)1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483631)) ? (var_16) : (-2147483632)))) ? (arr_10 [i_0] [i_0] [6] [i_3] [i_4]) : (arr_11 [12] [8U] [14ULL] [(unsigned char)0]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 4; i_5 < 15; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) ((unsigned int) (!((!((_Bool)1))))));
                            var_26 = ((/* implicit */_Bool) arr_7 [i_6] [i_6] [(unsigned char)3] [i_6]);
                            arr_21 [i_0] [i_0] [i_0 - 1] [i_1] = ((/* implicit */unsigned int) (((((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [5LL])))) >= (((-15) / (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_5 - 4] [i_1 - 3]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_1 [i_5]))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2672054570874508116LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_18)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32247))) + (0ULL)))))));
                            arr_22 [i_1] [i_6] [i_5] [i_1 - 3] [i_1] = ((/* implicit */unsigned short) (((+(var_17))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [5ULL] [i_1] [i_1] [i_5])))));
                            var_27 = ((/* implicit */_Bool) ((var_14) % (2147483631)));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_8))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) ((((var_14) == (((/* implicit */int) var_1)))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)122)) & (var_8))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)-32247)))))))));
}
