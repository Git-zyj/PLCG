/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240358
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1048448U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))))))));
    var_14 = ((/* implicit */short) ((unsigned int) ((unsigned int) 4294967295U)));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)20177)) ? (((/* implicit */long long int) var_5)) : (128890928223517769LL)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) 13518950295351432446ULL);
                    var_17 += ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (short)1920)) ? (536870911U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (3701499352998369457ULL) : (((/* implicit */unsigned long long int) 4077345952U))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)48)), ((short)7316)))))))));
                                var_19 = ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (((((/* implicit */int) var_4)) > (((/* implicit */int) var_8))))))), (((unsigned char) ((((/* implicit */_Bool) arr_5 [(signed char)9] [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)0)))))));
                                var_20 = ((/* implicit */unsigned char) arr_11 [i_3] [i_3] [i_3] [(_Bool)1] [i_3]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) ((unsigned char) (short)3072))))), (((((/* implicit */int) var_4)) / ((-(((/* implicit */int) var_6))))))));
                    var_22 = ((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_2]))) < (arr_10 [i_1] [i_1] [i_2] [i_0 + 1] [(signed char)2])))), ((short)-1921)));
                }
            } 
        } 
    } 
}
