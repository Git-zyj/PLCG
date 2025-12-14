/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196536
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
    var_14 = var_13;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [(signed char)15] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_1 + 2] [i_1]))))) + (max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0] [i_1])))))));
                var_15 = ((/* implicit */_Bool) var_11);
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [0ULL])) : (14687516033736392227ULL))), (((/* implicit */unsigned long long int) min((var_13), (var_13))))))) ? (max((arr_1 [i_1] [i_1 + 3]), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_2)))))))));
                var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) (unsigned short)1281))))) ? (((/* implicit */long long int) ((((-651087996) + (2147483647))) << (((/* implicit */int) var_1))))) : (var_13))), (min((min((var_4), (((/* implicit */long long int) var_5)))), (((((/* implicit */long long int) var_5)) | (var_8)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_13)))));
    var_19 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (int i_5 = 2; i_5 < 23; i_5 += 4) 
                    {
                        {
                            arr_17 [(unsigned char)20] [10LL] [(signed char)16] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)174))));
                            arr_18 [i_4] &= ((/* implicit */unsigned long long int) max((arr_9 [i_2] [(signed char)11]), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)250)))))));
                            arr_19 [(signed char)19] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (var_7)))) ? (min((var_8), (((/* implicit */long long int) var_5)))) : ((~(var_10)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5 - 2]))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (-(min((arr_15 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]), (((/* implicit */unsigned int) var_12)))))))));
                        }
                    } 
                } 
                arr_20 [i_2] [i_2] [i_2] = max((((/* implicit */int) (short)26321)), ((-2147483647 - 1)));
                var_21 = ((/* implicit */short) min((((((/* implicit */unsigned int) min((var_5), (((/* implicit */int) arr_8 [i_2]))))) % (arr_13 [i_2] [i_3] [i_2] [i_2] [i_3] [i_2]))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))));
                var_22 = ((/* implicit */unsigned int) arr_14 [5ULL] [i_3] [i_2] [i_2]);
                arr_21 [i_3] [i_2] [i_2] = ((/* implicit */_Bool) (-((+(var_3)))));
            }
        } 
    } 
}
