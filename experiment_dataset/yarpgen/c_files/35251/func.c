/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35251
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)3)), ((unsigned short)65535)))) >> (((((((/* implicit */int) var_8)) << (((((/* implicit */int) var_5)) + (95))))) - (552845305)))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)201)) - (((/* implicit */int) (unsigned char)108)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (arr_0 [i_1]) : (((/* implicit */int) arr_3 [i_1] [i_0])))), (((/* implicit */int) var_8)))))));
                var_17 = ((/* implicit */unsigned short) ((3556726096565042983ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17)))));
                var_18 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) (short)-1))))) && (((/* implicit */_Bool) ((unsigned long long int) var_9))))), (((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (arr_0 [i_0])))) && ((!(((/* implicit */_Bool) var_14))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_16 [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_2] [i_1] [i_1]))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
                                var_19 += ((/* implicit */_Bool) (~(arr_10 [i_1 + 1] [i_1] [i_2] [i_2])));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */unsigned char) var_2);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1)))))))) < ((-(((2024664947001394073ULL) << (((var_11) - (13922211597164771341ULL)))))))));
}
