/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44848
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
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (signed char)117)), ((-9223372036854775807LL - 1LL))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_14 [i_0] [i_0] = ((/* implicit */short) ((unsigned short) var_9));
                        arr_15 [i_0] [i_0] [(unsigned char)7] [i_0] [i_3] [8U] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_12))) < (var_8)));
                        var_13 |= ((/* implicit */signed char) (~(var_10)));
                    }
                    for (unsigned char i_4 = 2; i_4 < 19; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 1; i_5 < 20; i_5 += 2) 
                        {
                            arr_23 [(unsigned short)20] [(unsigned short)20] [i_0] [i_0] [i_4 + 2] [i_4 - 1] [18U] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_3)))))) > (var_10)));
                            arr_24 [i_0] [i_1] [i_0] [i_4 - 2] = ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
                            arr_25 [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_8)));
                            var_14 = ((/* implicit */unsigned short) ((unsigned char) (short)-10781));
                            var_15 = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_5))))));
                        }
                        var_16 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10)))) / (max((((/* implicit */unsigned int) var_9)), (var_3)))));
                    }
                    arr_26 [i_0] [1LL] [1LL] [1LL] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (unsigned char)50))))))));
                    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */long long int) var_12)), (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))))))));
                    var_18 ^= (~(min((((((/* implicit */int) var_5)) << (((var_7) - (1822390800U))))), ((-(((/* implicit */int) var_11)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(var_3)))) / (var_0))))));
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) var_9)), (((signed char) var_3)))))));
}
