/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194776
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) min((((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_3 [i_1] [i_2 - 1] [i_3 - 1])) : (var_3)))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_13))) <= (var_0)))), (var_4))))));
                                arr_12 [i_4] [i_4] = ((/* implicit */unsigned short) min((-182882825), (-1922255936)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((signed char) (((-(var_16))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
                        arr_17 [i_0] [i_0] [i_0] [i_2 - 2] [i_5] = ((/* implicit */short) -9223372036854775807LL);
                        var_19 = ((/* implicit */long long int) var_8);
                        arr_18 [i_0] [0U] = ((/* implicit */int) (-(-9223372036854775807LL)));
                    }
                }
                for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) (!(var_15)))), (arr_13 [i_6 + 1] [i_6 + 4] [i_6] [i_6] [i_6 + 4])))) <= (((/* implicit */int) ((_Bool) arr_4 [i_6 - 1])))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((((/* implicit */long long int) arr_2 [i_0] [i_7 - 1])), (-9223372036854775807LL)));
                                var_22 -= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_5)) ? (1257345639575710777ULL) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                                var_23 -= ((((/* implicit */_Bool) min((var_7), (((/* implicit */int) (short)-3370))))) ? (((((/* implicit */_Bool) var_10)) ? (1257345639575710758ULL) : (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */long long int) var_4))))))) : (((/* implicit */unsigned long long int) var_12)));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    for (long long int i_10 = 1; i_10 < 17; i_10 += 1) 
                    {
                        {
                            var_24 = (+(arr_16 [i_0] [i_10 + 3] [i_10] [i_10 + 2]));
                            arr_33 [i_0] [(unsigned short)9] [i_9] [4LL] = ((/* implicit */unsigned long long int) (~(((unsigned int) var_3))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) (+(min((((/* implicit */long long int) max((var_12), (var_6)))), (((((/* implicit */_Bool) 7736106660753361015LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (9223372036854775781LL)))))));
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 20; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        {
                            arr_39 [i_12] [i_12] [i_11 - 2] [i_12] = ((/* implicit */unsigned short) min((max((max((((/* implicit */unsigned long long int) arr_3 [i_0] [(unsigned short)3] [(signed char)18])), (1257345639575710756ULL))), (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) (unsigned char)1))))))), (((/* implicit */unsigned long long int) max((((int) var_0)), ((+(((/* implicit */int) var_8)))))))));
                            arr_40 [i_0] [i_12] [i_12] [i_11 - 2] [i_12] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-3352)), (arr_37 [i_12])))) ? (min((var_2), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 15729167460895973703ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_2)) : (var_11))), (((/* implicit */unsigned long long int) (-(var_3))))))));
}
