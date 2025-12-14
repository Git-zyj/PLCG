/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203384
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_11 [i_2] [i_3] [i_2] [i_1] [3U] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (-(var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [12U] [i_0 - 1] [i_1 + 2] [i_2] [i_2])) && (((/* implicit */_Bool) var_8)))))) : (min((((((/* implicit */_Bool) arr_2 [9ULL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned char)11] [i_2 - 1] [(_Bool)1] [i_0] [i_0]))) : (var_7))), (((/* implicit */long long int) max(((unsigned short)43126), (arr_2 [i_1] [i_1]))))))));
                            var_10 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) ((((/* implicit */int) arr_0 [8U])) < (arr_6 [i_0]))))))));
                            var_11 = ((/* implicit */long long int) min((var_11), (min((arr_8 [i_2 + 1] [9ULL] [9ULL] [2LL] [i_2]), (min((arr_8 [i_2 + 1] [i_3] [(unsigned char)13] [i_2 + 1] [i_3]), (((/* implicit */long long int) var_2))))))));
                            var_12 &= ((/* implicit */short) 3579132166179836594ULL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (int i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
                            {
                                var_13 -= ((/* implicit */unsigned long long int) var_4);
                                var_14 = ((/* implicit */unsigned int) arr_14 [i_0 - 1] [i_1] [i_4]);
                                var_15 = ((/* implicit */long long int) (+(min((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_14 [i_1 - 1] [(unsigned short)4] [i_0 + 1]))))));
                            }
                            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
                            {
                                var_16 &= ((/* implicit */long long int) min(((~(((((/* implicit */int) arr_15 [i_0] [9LL] [i_4] [i_5])) + (((/* implicit */int) arr_14 [i_7] [i_1] [i_4])))))), (((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((arr_15 [i_1] [i_4] [i_1] [i_0 - 1]) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) arr_5 [i_0] [8U] [i_7])))) : (((/* implicit */int) ((_Bool) var_5)))))));
                                var_17 = ((/* implicit */int) arr_10 [i_0] [i_5] [(unsigned char)10] [i_7] [i_7]);
                                arr_22 [i_0] [(unsigned char)12] [(unsigned char)12] [i_0] [i_0] = ((/* implicit */unsigned int) (+(max((1298238547), (((/* implicit */int) ((((/* implicit */_Bool) 6380107424729559636LL)) || (((/* implicit */_Bool) var_1)))))))));
                            }
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) + (1335260779)));
                        }
                    } 
                } 
                arr_23 [12LL] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_3 [i_0 - 1] [(unsigned char)6])) && (((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1 - 1])))) || (((/* implicit */_Bool) (unsigned short)16563)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_10 [i_0] [i_0] [i_1] [11LL] [i_0 + 1]))) && ((!(((/* implicit */_Bool) arr_20 [i_0] [i_1 + 1] [i_1])))))))));
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((+(var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((var_7) <= (var_0)))))))) ? (((((/* implicit */_Bool) max((14532117547989586658ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_2)))))) : (((/* implicit */int) var_4))));
}
