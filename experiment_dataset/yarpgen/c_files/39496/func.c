/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39496
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
    var_11 = ((/* implicit */long long int) var_1);
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min(((short)27743), (((/* implicit */short) var_4)))), (((/* implicit */short) (unsigned char)70))))) ? (var_8) : (-710941006165027123LL)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) ((((min((arr_4 [i_0] [i_2] [i_3]), (var_2))) / (((/* implicit */long long int) ((int) 710941006165027122LL))))) + (((/* implicit */long long int) (-(((4294967273U) + (((/* implicit */unsigned int) arr_0 [i_3])))))))));
                            var_14 -= ((((unsigned long long int) var_5)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((_Bool) var_2))))));
                            var_15 = ((/* implicit */_Bool) 21U);
                            arr_9 [i_0] [i_1] [i_2] [i_3] = 1702167712549388182LL;
                            var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (arr_0 [i_0]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) 20U)))))))) ^ (max((max((((/* implicit */unsigned int) arr_5 [i_3] [i_2] [i_1] [i_0])), (4294967275U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) (signed char)-114)))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_1] [(short)0])), (((arr_2 [(unsigned char)8] [i_1] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4095)))))));
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    arr_14 [i_0] [(unsigned char)2] = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_10 [i_0] [i_4] [i_4])) - (((/* implicit */int) (short)7864)))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_4])))))) + (((/* implicit */int) ((unsigned char) (short)-109)))));
                    arr_15 [i_0] [i_1] [i_4] [i_1] = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) | (-8699361271801763199LL))) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_6 [i_0] [i_0] [i_4]))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(_Bool)1]))) ^ (((((/* implicit */_Bool) max((arr_7 [i_1] [i_4]), (((/* implicit */unsigned long long int) var_8))))) ? (((((/* implicit */_Bool) var_4)) ? (-7000691910502904128LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (-688134210000564855LL)))));
                }
            }
        } 
    } 
}
