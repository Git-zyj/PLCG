/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234615
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
    var_10 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1644746087)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (0ULL)))) ? (((/* implicit */int) min((var_7), (((/* implicit */signed char) (_Bool)1))))) : (((((-1644746092) + (2147483647))) >> (((-7685873204948957379LL) + (7685873204948957382LL))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_11 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) -1644746065)) && (((/* implicit */_Bool) arr_1 [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [(signed char)9] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)99)) - (((/* implicit */int) (signed char)-100)))))));
                                arr_13 [4U] [i_1] [4U] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((var_4) * (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
                                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((unsigned short) ((689335728U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4])))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)92)) == (((/* implicit */int) arr_2 [i_0 + 1] [i_0]))));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-14)) + ((+(((/* implicit */int) (unsigned char)255)))))))));
                }
                /* vectorizable */
                for (unsigned int i_6 = 1; i_6 < 7; i_6 += 4) 
                {
                    var_14 += ((unsigned int) var_0);
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)6331))) == (((((/* implicit */_Bool) 3605631567U)) ? (var_1) : (((/* implicit */long long int) var_0))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (int i_8 = 4; i_8 < 6; i_8 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) var_8);
                                arr_25 [i_8] [i_0] [(signed char)3] [i_6] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_9 = 1; i_9 < 7; i_9 += 2) 
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((signed char) arr_6 [(short)6] [6])))));
                    arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 1632784414);
                }
                var_18 -= ((/* implicit */signed char) max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) var_7))));
            }
        } 
    } 
}
