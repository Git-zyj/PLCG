/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200780
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
    var_10 |= ((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) (short)9))));
    var_11 = ((unsigned char) (unsigned char)200);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)200)), (-524183885)))), (3000015585U)));
                        var_13 = ((/* implicit */unsigned int) (+(11827025375862372898ULL)));
                        arr_10 [i_2] [i_2] = ((/* implicit */int) var_7);
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) var_1);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_14 += ((/* implicit */short) (+(((((/* implicit */_Bool) (~(4294967287U)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)195)), ((short)511))))))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((_Bool) 4294967287U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 9; i_6 += 2) 
        {
            for (unsigned int i_7 = 2; i_7 < 10; i_7 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) 1571456080U)), (max((((/* implicit */unsigned long long int) (unsigned char)119)), (11827025375862372898ULL))))))));
                    var_17 *= ((/* implicit */unsigned char) ((452424220U) >= (((unsigned int) (unsigned char)124))));
                    arr_24 [i_7] [i_6] [i_0] = ((/* implicit */long long int) var_8);
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (~((((!(((/* implicit */_Bool) 3842543092U)))) ? (min((((/* implicit */long long int) var_3)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (4294967268U) : (var_9)))))))))));
                    arr_25 [2] [0] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (max((1571456079U), (14U))) : (max((max((((/* implicit */unsigned int) (signed char)69)), (var_7))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_6)))))))));
                }
            } 
        } 
    }
    var_19 &= ((/* implicit */unsigned char) ((((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200))) < (1947526294U)))) - ((-(-1617474320))))) + (2147483647))) >> ((((((-2147483647 - 1)) - (-2147483643))) + (34)))));
}
