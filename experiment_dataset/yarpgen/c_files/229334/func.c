/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229334
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [(_Bool)1] [i_1] [i_0] = ((/* implicit */short) (~(((long long int) (~(((/* implicit */int) arr_3 [i_0])))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_14 -= ((/* implicit */_Bool) (-((+(((unsigned int) arr_0 [i_3]))))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */signed char) (-(((long long int) ((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4 - 1] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)17]))))))));
                                var_16 |= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) (-(arr_0 [i_4])))) - (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43002))) - (arr_10 [(_Bool)1] [i_1] [i_1] [i_2] [(signed char)20] [i_1]))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(1270281070))))))));
                                var_17 = ((/* implicit */long long int) (~(1802684401U)));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((1270281070) - (((/* implicit */int) (signed char)83))))))) >= (((unsigned long long int) (~(((/* implicit */int) arr_2 [i_0])))))));
                                arr_14 [i_0] [(signed char)9] [i_0] [(signed char)9] [(unsigned short)3] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) ((signed char) (unsigned short)44367))) > (((((((/* implicit */int) (signed char)-83)) + (2147483647))) << (((((/* implicit */int) (signed char)84)) - (84))))))));
                            }
                        }
                    } 
                } 
                var_18 = (unsigned char)18;
                var_19 = ((/* implicit */unsigned char) ((10863969470179289133ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21169)))));
            }
        } 
    } 
    var_20 -= ((signed char) ((((/* implicit */int) var_11)) <= (((/* implicit */int) ((short) (unsigned char)242)))));
    var_21 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)-42)))) * (((/* implicit */int) var_11))));
}
