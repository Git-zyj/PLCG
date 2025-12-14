/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214880
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
    var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((~(((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((3585200597U) >> (((((/* implicit */int) (signed char)-115)) + (145))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((0LL), (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) var_16))))) ? (min((var_17), (((/* implicit */unsigned long long int) ((arr_10 [i_2] [i_1] [i_0]) * (var_9)))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_10)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))))))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (var_0))))) | (((((/* implicit */_Bool) max((3585200597U), (((/* implicit */unsigned int) (signed char)116))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_2]))))) : (var_2)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_16 [i_2] [i_2] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_6))))), (min((12292949985310729838ULL), (((/* implicit */unsigned long long int) var_5)))))), (((((((/* implicit */_Bool) 17045651456LL)) ? (16298622922388750320ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))) + (((/* implicit */unsigned long long int) max((3585200614U), (4294967293U))))))));
                                arr_17 [(unsigned char)17] [(unsigned char)17] [i_2] [i_4] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 1046426447)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [17ULL] [17ULL] [i_1] [1ULL] [i_0] [1ULL]))) : (var_2))) == (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_0])) < (709766698U)))) : (max((((/* implicit */int) var_15)), (var_12)))))) : (((((/* implicit */_Bool) (-(arr_10 [i_0] [i_1] [i_2])))) ? (((/* implicit */long long int) (~(arr_3 [i_0])))) : ((+(10LL)))))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1046426447)))))) : (max((((arr_10 [16U] [9U] [i_3]) / (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [10LL] [i_3] [10LL] [i_3])) / (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))))));
                                var_22 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22235)) ? (((/* implicit */int) ((2147483647) >= (((/* implicit */int) (short)10064))))) : (((/* implicit */int) (signed char)0)))))));
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_6))))) / (((/* implicit */long long int) (-(arr_7 [i_0] [i_1] [(unsigned char)14]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) / (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_0]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_1))))) : (((((/* implicit */long long int) ((/* implicit */int) var_15))) / (arr_2 [i_0] [i_1])))))) : (min((var_13), (((/* implicit */unsigned long long int) -8197738902102689355LL))))));
                }
            } 
        } 
    } 
}
