/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2481
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
    var_12 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) ((signed char) var_10))) : ((+(((/* implicit */int) var_2))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_13 *= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) (unsigned char)193))), ((+(((/* implicit */int) ((short) 14227238800798390898ULL)))))));
        var_14 = ((/* implicit */unsigned long long int) min((4287388094U), (2641520150U)));
        var_15 = ((/* implicit */long long int) (-(arr_2 [i_0])));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_16 *= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 9557337178583767138ULL)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((/* implicit */unsigned long long int) arr_4 [i_4] [i_3])), (((arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0]) & (arr_12 [i_0] [i_1] [i_1 + 3] [i_2] [i_3] [i_4]))))))));
                                arr_16 [i_1] [6] = (~(((arr_5 [i_1] [i_3] [i_1]) ? ((-(7579201U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (arr_4 [i_1] [7U])))))));
                                var_18 = ((/* implicit */int) arr_14 [i_0] [i_1]);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) (((((-(7579185U))) << (((((/* implicit */int) max(((signed char)-41), ((signed char)36)))) - (34))))) << (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_8))));
        arr_22 [i_5] = (+(var_11));
        var_20 = ((/* implicit */short) var_4);
        var_21 = ((/* implicit */unsigned short) ((short) (~(-6400384269643240350LL))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
    {
        var_22 ^= ((/* implicit */_Bool) (-((~(((/* implicit */int) var_6))))));
        arr_25 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 765820319353858515ULL)) ? (((/* implicit */int) arr_8 [(signed char)10] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_8 [4] [i_6] [4ULL] [i_6]))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_8 [2LL] [i_6] [i_6] [4U]))))))));
    }
}
