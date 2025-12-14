/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208903
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
    var_10 += ((/* implicit */signed char) max(((short)27662), (((/* implicit */short) (unsigned char)2))));
    var_11 -= ((/* implicit */int) ((_Bool) min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) max((((/* implicit */short) var_1)), ((short)27662)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] &= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7532912569433643495ULL)) ? ((~(((/* implicit */int) (unsigned short)26442)))) : (((/* implicit */int) (unsigned char)80))))), (((((/* implicit */_Bool) 1796120969)) ? (((/* implicit */unsigned long long int) 4294967273U)) : (2337856511634362022ULL))));
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) > (((unsigned long long int) ((unsigned int) var_6))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 6; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_13 -= ((/* implicit */short) arr_4 [i_0] [i_1 - 3] [i_1 - 3]);
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((unsigned char) max((((/* implicit */unsigned short) ((3836524301082255331ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_4])))))), (min((var_3), (((/* implicit */unsigned short) var_6)))))))));
                                var_15 = ((/* implicit */int) max((((/* implicit */short) (unsigned char)237)), ((short)27662)));
                                var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_4]), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (var_1))))))) ? (((/* implicit */int) arr_1 [(short)9])) : (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))), (((/* implicit */int) arr_9 [i_2] [(unsigned char)4] [i_1] [i_2]))))));
                                var_17 = ((/* implicit */unsigned char) ((((arr_9 [i_0] [i_3 - 1] [i_0] [i_1]) ? (arr_10 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) var_5)))) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) (short)0))))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_8 [i_1 - 2] [i_2 - 2] [i_1] [i_2])))) + (153)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3892484508U))));
                var_19 = ((/* implicit */unsigned long long int) min((max(((+(((/* implicit */int) arr_15 [i_5])))), (((/* implicit */int) var_7)))), ((-(((/* implicit */int) max(((unsigned char)50), ((unsigned char)2))))))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_5])) && (((/* implicit */_Bool) arr_17 [i_5]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)32))))))))));
            }
        } 
    } 
}
