/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214882
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
    var_14 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_1))));
                            arr_14 [i_0] [i_1] [i_2] = (short)-27476;
                            arr_15 [i_0 + 1] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (short)32754)))))), (((((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_3 - 1])) % (((((/* implicit */int) var_12)) + (((/* implicit */int) var_9))))))));
                            var_16 += ((/* implicit */long long int) (~(((/* implicit */int) min(((unsigned char)8), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)222)) && (((/* implicit */_Bool) 16731149455622404715ULL))))))))));
                        }
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) ^ (16731149455622404708ULL)))) ? (((((/* implicit */_Bool) 1715594618087146890ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)7791)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)28)) : (((/* implicit */int) var_9)))))));
                arr_17 [i_0 - 2] [i_0 - 1] [i_0] = ((/* implicit */short) (~(max(((~(var_11))), (arr_13 [(short)8] [i_1] [(short)8] [(_Bool)1])))));
                arr_18 [i_0 - 1] [i_0] [5LL] = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) var_2))))))) != ((~(((((/* implicit */_Bool) var_3)) ? (9223372036854775807LL) : (5226918465200463079LL))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(2251799813685247ULL)))) ? (((/* implicit */int) min((((/* implicit */short) var_8)), (min(((short)23682), (var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) min((((/* implicit */short) var_13)), ((short)-18965)))) : (((/* implicit */int) var_2))))));
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            for (long long int i_6 = 4; i_6 < 22; i_6 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) / (-6118070663238084235LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) 46409224U)) ? (arr_25 [i_6 - 3] [i_6 - 4] [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))))))));
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 22; i_7 += 3) 
                    {
                        for (int i_8 = 1; i_8 < 22; i_8 += 2) 
                        {
                            {
                                arr_31 [i_4] [(short)22] [i_7] [i_6] [i_8] [i_8 + 1] [14LL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-16463)) / (((/* implicit */int) (unsigned char)68))))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_30 [i_7])))));
                                var_19 -= ((/* implicit */short) (+(((((/* implicit */int) min(((short)-13242), (((/* implicit */short) arr_23 [i_4] [i_7]))))) ^ ((+(((/* implicit */int) var_1))))))));
                                var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) arr_24 [i_6])) ? (-6118070663238084216LL) : (((((/* implicit */_Bool) (signed char)-38)) ? (var_3) : (var_4)))))) ? (((/* implicit */long long int) 162794521)) : (min((-6118070663238084253LL), (((/* implicit */long long int) (signed char)118))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
