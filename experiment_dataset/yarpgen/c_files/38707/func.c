/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38707
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-2825149921541568857LL), (((/* implicit */long long int) 3934311981U))))) ? (((((/* implicit */_Bool) 7635014007375734760ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))) ? (((/* implicit */unsigned long long int) (-(-1196379868)))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_2]))))), (min((3682396660610763422ULL), (var_2)))))));
                    arr_7 [i_2] [i_1] [i_2] = (-((-(((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_2 [i_0] [i_1] [(unsigned char)12])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_2] [i_4] [i_3 + 2]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_0] [i_0]))))) : (((((/* implicit */_Bool) -1617109339)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58840))) : (7635014007375734780ULL))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2))))), (max((((/* implicit */unsigned long long int) (unsigned char)143)), (7635014007375734749ULL))))))))));
                                arr_12 [i_0] [i_0] [i_3] [i_3 + 1] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)48)))), (((/* implicit */int) min((var_3), (((/* implicit */signed char) arr_3 [(unsigned char)12]))))))))));
                                arr_13 [i_0] [i_1] [i_0] [i_0] [(short)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_3])) ? (arr_4 [i_0] [i_1] [i_2] [i_3]) : (arr_4 [i_1] [i_0] [i_2] [i_3 + 1])))))) ? (min((((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_3 + 2] [i_4]))))), (min((arr_8 [i_0]), (((/* implicit */long long int) var_5)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 243889312274197836LL)), (var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2231691814165313135LL))))) : ((+(((/* implicit */int) var_5)))))))));
                                var_12 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 265017217653647968LL)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned short)24848))))))) ? (((((/* implicit */_Bool) max((arr_5 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */signed char) arr_11 [(unsigned short)12] [i_1] [i_1] [i_3 - 1]))))) ? (min((arr_4 [(short)17] [i_1] [i_1] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_3 [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)19)), (arr_6 [i_0] [i_0] [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)23)), (arr_0 [i_0]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (~(2147483647)))), ((+(var_9))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 867864910)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))));
}
