/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34796
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)65527), (((/* implicit */unsigned short) (unsigned char)234))))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (var_10))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)2)) ^ (var_7))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2])) - (((/* implicit */int) var_3))))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) arr_5 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)253)) == (((/* implicit */int) arr_4 [i_2] [i_2] [i_0]))))))) & (((/* implicit */int) max((arr_0 [i_3 + 3]), (arr_0 [i_0]))))));
                                var_12 = ((/* implicit */short) (~(((/* implicit */int) ((min((arr_12 [2ULL] [i_3] [i_0]), (((/* implicit */unsigned int) arr_2 [i_4])))) != (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_4])) << (((((/* implicit */int) (unsigned short)9497)) - (9497)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43355))) : (9296892487502094913ULL)));
    var_14 = ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) 9149851586207456703ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_3)) > (((/* implicit */int) var_6)))) ? (var_10) : (((/* implicit */long long int) min((var_5), (((/* implicit */int) var_0)))))))));
    var_15 = ((/* implicit */unsigned char) ((var_7) >= ((~((~(var_7)))))));
    var_16 = ((/* implicit */int) (((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_7)) : (-9LL))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (15748695575699348827ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11)))))) ? (((/* implicit */int) ((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49478)))))) : (((/* implicit */int) ((var_1) != (var_1)))))))));
}
