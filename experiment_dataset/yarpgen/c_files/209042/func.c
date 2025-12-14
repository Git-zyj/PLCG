/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209042
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = arr_0 [(unsigned short)1] [i_1];
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((arr_9 [i_0] [i_1] [i_1] [10ULL]) | (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) (unsigned char)0)))))) + (((var_17) * (((/* implicit */unsigned long long int) var_0)))))))));
                            var_22 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((13635995643190445538ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_9 [i_3] [i_2] [i_1 - 2] [21ULL]))), (((/* implicit */unsigned long long int) ((max((arr_4 [i_0] [i_2] [i_0]), (arr_7 [i_0]))) >> (((((((/* implicit */unsigned long long int) arr_11 [i_2])) % (var_17))) - (4120172858ULL))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) (+(max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))));
                        var_24 = ((/* implicit */long long int) var_6);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_25 ^= ((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_0] [i_1])) - (((/* implicit */int) ((((/* implicit */int) (signed char)30)) < (((/* implicit */int) (unsigned char)245))))))) - (var_0)));
                                var_26 *= ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_7] [i_4 + 4])) < (((/* implicit */int) (_Bool)1))))), (max(((unsigned short)48437), (((/* implicit */unsigned short) (unsigned char)47)))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_4] [2ULL]))));
                }
            }
        } 
    } 
    var_28 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-19648), (((/* implicit */short) (unsigned char)18)))))) | (var_15)))));
}
