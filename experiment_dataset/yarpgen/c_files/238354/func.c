/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238354
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
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */unsigned long long int) (-(arr_1 [i_0 + 2])));
                    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_6)), (arr_7 [i_0] [i_1] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) > (4294967295U))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(short)10] [i_2])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [(unsigned short)16] [i_0])))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (unsigned char)96)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_1)))))))) : (((/* implicit */unsigned long long int) 0LL)));
                    arr_8 [i_0] [i_1] [8U] [12LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (signed char)-112))) ? (arr_6 [i_0] [i_0 + 1] [i_0] [i_0]) : (((/* implicit */long long int) min((3U), (((/* implicit */unsigned int) (signed char)-99)))))))) ? (((/* implicit */long long int) arr_2 [i_0])) : (min((((((/* implicit */_Bool) (signed char)-112)) ? (arr_6 [i_0] [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) var_14))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [(_Bool)1] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) 0U);
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 2] [i_4])))))) ? (((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned short)16854))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)0) ? (((/* implicit */long long int) 4294967295U)) : (arr_6 [i_0 - 1] [i_1] [i_2] [i_0 - 1]))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) var_9)))))))))));
                                arr_16 [i_4] [i_4] [7ULL] [7ULL] [i_1] [i_0] = ((/* implicit */short) (+(var_2)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_5);
    var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
}
