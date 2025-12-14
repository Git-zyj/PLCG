/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2616
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) arr_3 [i_0] [i_0] [i_1])));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_0] [i_1])))));
                var_20 = ((/* implicit */int) (+(max((arr_1 [i_0]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [0])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (((~(((/* implicit */int) (signed char)46)))) % (((/* implicit */int) (signed char)-1)))))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 2; i_2 < 8; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -7067888631290646411LL)) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) (unsigned short)255))))) ? (-7067888631290646402LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)267))))))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) & ((-(((/* implicit */int) var_1))))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_17 [i_2] [i_2] [i_2] [(unsigned short)10]) / (((/* implicit */unsigned int) min((-1371784058), (((/* implicit */int) var_7)))))))) || (((/* implicit */_Bool) ((31457280ULL) % (18446744073709551615ULL))))));
                                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_3])), (7243743259807804102LL))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) min((min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) ((signed char) (unsigned short)52975))))), (((((/* implicit */int) ((1062805815) == (((/* implicit */int) (short)-24670))))) & (((int) 0LL))))));
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 2106097537)) : (arr_1 [i_2])))))) ? (((/* implicit */int) max((arr_6 [i_2] [i_4]), (((/* implicit */unsigned short) var_2))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) 1800268656)), (1U)))) ? (((/* implicit */int) (signed char)108)) : (((((/* implicit */int) var_7)) - (((/* implicit */int) var_10)))))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)255))) >= (var_4))));
}
