/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36976
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_1))), (((/* implicit */long long int) ((signed char) arr_1 [i_2] [i_2])))))) ? (((((((/* implicit */int) arr_5 [i_3] [i_1])) != (((/* implicit */int) (short)-20362)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (1548718974834286037LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)22788)) == (((/* implicit */int) var_10)))))))) : (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */long long int) arr_6 [2LL] [i_3] [i_2] [i_2])) >= (3LL)))), (((((/* implicit */_Bool) (unsigned short)56408)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-20362)))))))));
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_1 [i_2 - 1] [i_2 - 2]))));
                            var_15 = ((/* implicit */unsigned short) min((var_15), (min((((/* implicit */unsigned short) arr_10 [i_0])), (((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))))))));
                            var_16 -= ((/* implicit */unsigned char) ((arr_11 [i_0] [i_0] [(short)20] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_4)), (var_8))))))))));
                        }
                    } 
                } 
                var_17 -= ((/* implicit */long long int) (signed char)-83);
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned char) (+(((/* implicit */int) ((unsigned short) var_6)))))))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((((/* implicit */long long int) var_3)), (max((((long long int) arr_4 [i_0])), (((/* implicit */long long int) ((signed char) var_3))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_1))));
    var_21 -= ((/* implicit */long long int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10))))))))));
    var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((long long int) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (((unsigned int) -1548718974834286037LL)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (2822856684076948770LL) : (((((/* implicit */_Bool) 1548718974834286037LL)) ? (((/* implicit */long long int) var_0)) : (var_1)))))));
}
