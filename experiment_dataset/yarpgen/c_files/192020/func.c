/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192020
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 1] [i_0 + 1] = ((/* implicit */short) (!(((((/* implicit */_Bool) ((unsigned char) var_0))) && (((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_3 [i_1]))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0 + 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0 + 1] [i_2] [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_0 - 1] [i_3] [i_2] = ((/* implicit */int) arr_1 [i_1]);
                                arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) var_1);
                                var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0 + 1])) && (((/* implicit */_Bool) arr_11 [i_0 - 1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 4; i_5 < 18; i_5 += 1) 
                    {
                        var_14 ^= ((/* implicit */signed char) arr_1 [i_2 + 1]);
                        arr_17 [i_0 - 1] [i_1] [i_2] [i_5 - 2] = ((/* implicit */unsigned short) arr_6 [i_5 + 1] [i_2] [i_1] [i_0 + 2]);
                    }
                }
                for (unsigned char i_6 = 1; i_6 < 18; i_6 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((int) arr_9 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])) >= (((/* implicit */int) (((-(((/* implicit */int) arr_1 [i_6])))) < (((/* implicit */int) ((signed char) -1539051145093218904LL)))))))))));
                    arr_20 [i_6] = ((/* implicit */_Bool) arr_6 [i_6] [i_1] [i_1] [i_0 + 1]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 17; i_8 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_26 [i_6 - 1] [18ULL] [i_7])))), (((((int) -1669550289)) > (((/* implicit */int) (unsigned char)1)))))))));
                                var_17 += ((/* implicit */unsigned char) ((((/* implicit */long long int) max(((-(((/* implicit */int) arr_14 [i_0 - 1] [i_6] [i_7] [i_8])))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)27806)) < (((/* implicit */int) (unsigned short)37729)))))))) >= (((long long int) arr_19 [i_0 + 2] [i_0 + 1] [i_6 + 2] [i_8 - 1]))));
                                var_18 = ((/* implicit */unsigned short) ((signed char) arr_21 [i_8] [i_8]));
                                var_19 = ((/* implicit */long long int) arr_18 [i_6] [i_1]);
                                var_20 += ((/* implicit */int) ((unsigned char) (signed char)84));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((unsigned char) max((max((var_5), (((/* implicit */unsigned long long int) (unsigned short)37729)))), (((/* implicit */unsigned long long int) var_0)))));
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_7))));
}
