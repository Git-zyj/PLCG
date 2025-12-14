/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25962
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
    var_12 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_10 [i_2] [i_2] |= ((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) arr_2 [i_2]);
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */short) arr_5 [i_0]);
                            var_15 = ((/* implicit */short) (-((-(arr_15 [i_1])))));
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [10ULL] = ((/* implicit */int) (+(arr_5 [i_4])));
                            arr_17 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_0] [(unsigned char)4] [i_2] [i_4]);
                        }
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_2])))))));
                    }
                    arr_18 [(unsigned short)2] [i_0] [(unsigned short)2] [i_1] = ((/* implicit */unsigned short) arr_14 [i_0] [8LL] [i_1] [i_0] [i_0]);
                }
                arr_19 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0]))));
                var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (var_11))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_1 [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            {
                arr_25 [i_6] = ((/* implicit */unsigned short) var_7);
                var_18 *= ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_6])) ? (((/* implicit */long long int) arr_22 [i_5])) : (var_7))), (((/* implicit */long long int) arr_23 [i_6] [i_6] [i_5]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (unsigned short)21694);
    var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_2)), (var_1)));
}
