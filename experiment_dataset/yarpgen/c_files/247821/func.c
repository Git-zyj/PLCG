/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247821
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (unsigned short)65535))));
    var_12 = ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((min((((/* implicit */int) var_1)), (var_10))) + (135610072))))))));
                    var_14 -= ((/* implicit */unsigned short) max((((/* implicit */int) ((2147483647) > (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1]))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483643)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) var_7))));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (((-(2147483647))) & (((/* implicit */int) ((unsigned short) (unsigned short)3))))))));
                            var_16 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)60)) + ((-2147483647 - 1))));
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned char) ((unsigned short) var_2))))));
                            var_18 = ((/* implicit */unsigned short) var_0);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) (-(2147483647)))))))));
                            var_20 ^= ((/* implicit */unsigned int) ((arr_6 [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? (((/* implicit */int) ((unsigned short) -2147483621))) : (((/* implicit */int) (unsigned char)14))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_7)))) ? (((var_1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((var_2) != (((/* implicit */long long int) 2147483635))))))))));
                        }
                        var_22 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_4 [i_1])))));
                    }
                    var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((1711039681) >= (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)14))))))) > (((/* implicit */int) ((_Bool) 10978361896679089778ULL)))));
                }
            } 
        } 
    } 
}
