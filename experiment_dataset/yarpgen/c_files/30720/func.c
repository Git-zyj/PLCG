/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30720
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
    var_16 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((3989835380U), (((/* implicit */unsigned int) var_14))))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) ((((/* implicit */unsigned int) (-2147483647 - 1))) <= (3989835385U))))))), (var_7));
    var_17 = ((/* implicit */unsigned short) (short)16320);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) 1289860206);
                var_19 = (-(arr_0 [i_0]));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(arr_1 [i_2]))))));
                    arr_10 [i_1] [i_1 - 2] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? ((-(var_9))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned char)0]))))))));
                    var_21 = ((/* implicit */unsigned char) ((1289860213) > (((/* implicit */int) var_14))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (+(arr_11 [i_0] [i_2] [i_3 - 1] [i_4])));
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_10))));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_1 - 2] [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) var_15))));
                                arr_16 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)7)) * (((/* implicit */int) arr_2 [i_0])))) + (((/* implicit */int) var_4))));
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (((-(arr_1 [i_0]))) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (short)-31140)))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    var_25 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_17 [i_1 - 3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_12 [4] [i_1] [i_1 - 1] [i_1 - 3] [i_1 - 1])))), (((((/* implicit */int) arr_8 [i_5] [(signed char)10] [2] [i_0])) + (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_12 [12LL] [12LL] [12LL] [12LL] [12LL]))))))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) -1289860207)) ? (3989835365U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38))))))));
                    arr_20 [i_0] [i_1] [i_0] [i_0] = ((arr_1 [i_1 - 3]) != (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])));
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) << (((262016) - (262016)))))) ? (((unsigned long long int) arr_6 [i_1])) : (min((var_7), (((/* implicit */unsigned long long int) 305131915U))))));
                }
                arr_21 [i_1] = ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) >= (min((var_13), (((/* implicit */long long int) (signed char)-37))))))) > ((+((-(((/* implicit */int) (short)-16308)))))));
                arr_22 [i_1] [(short)9] [i_1] = ((/* implicit */unsigned int) ((-1289860227) / (((/* implicit */int) (short)16320))));
            }
        } 
    } 
}
