/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226678
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_0]))));
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (var_0))))));
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)252)) * ((-(((/* implicit */int) (signed char)-45))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 22; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((min((((-8670258295227676966LL) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1 - 1])) * (((/* implicit */int) (_Bool)0))))))) * (((/* implicit */long long int) ((((((/* implicit */int) var_13)) * (((/* implicit */int) var_10)))) | (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_9 [(signed char)7])) : (arr_11 [i_1] [i_3] [i_1])))))))))));
                    arr_12 [i_1] [i_2] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_9 [i_3]))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            {
                                arr_17 [(unsigned char)16] [i_2] [i_2] [(unsigned char)16] [(unsigned char)16] [i_5] = ((/* implicit */long long int) ((int) ((arr_15 [i_5 + 1] [i_1] [i_2] [i_3 + 1]) / (((/* implicit */long long int) (+(var_11)))))));
                                var_19 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) arr_4 [i_2]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) var_6);
                }
            } 
        } 
        arr_18 [i_1 + 3] [(unsigned char)16] = ((/* implicit */unsigned int) (-(((/* implicit */int) (((~(var_6))) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        arr_19 [i_1 + 1] = ((/* implicit */signed char) (_Bool)0);
    }
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_0))));
}
