/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3924
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
    var_12 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_13 = ((/* implicit */short) arr_3 [(unsigned short)11]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_16 [18ULL] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_4 - 1]))));
                                var_14 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((_Bool) arr_6 [i_4 + 1] [i_4 - 3]))), (arr_14 [i_4 + 3] [i_4 + 1] [4U] [i_4 - 1] [i_4 - 1])));
                                arr_17 [(unsigned short)2] [i_2] [i_3] [(unsigned char)8] [(_Bool)1] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_5 [i_0] [i_0])))))) ? (((/* implicit */int) arr_15 [i_1])) : ((-(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_6 [i_0] [i_0]))))))));
                                var_15 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)7089)) ? (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (unsigned short)45682))))) : (((/* implicit */int) ((((/* implicit */_Bool) 2406674035U)) || (((/* implicit */_Bool) var_7))))))) / (((/* implicit */int) (unsigned short)65522))));
                    arr_18 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((unsigned long long int) (-(var_5)))) ^ (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (unsigned short)19861)))))))));
                }
                var_17 = ((/* implicit */short) ((((/* implicit */int) ((short) (unsigned short)19854))) | (((((/* implicit */int) arr_11 [(signed char)10] [(signed char)10])) ^ (((/* implicit */int) arr_11 [6U] [i_1]))))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((_Bool) ((var_0) < (arr_8 [i_0] [(short)4] [10U] [16U])))) ? (min((((((/* implicit */_Bool) (unsigned short)18987)) ? (-2147483632) : (((/* implicit */int) arr_13 [i_1])))), ((+(((/* implicit */int) (signed char)-78)))))) : (((/* implicit */int) (unsigned short)65535)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) / (min(((~(1991146054))), ((-(((/* implicit */int) (signed char)77))))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) (unsigned short)5))));
}
