/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240370
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (var_3)))))))));
                var_12 = ((/* implicit */signed char) var_4);
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))) | (((unsigned int) arr_10 [i_0] [(unsigned char)18]))))));
                                var_14 -= ((/* implicit */unsigned char) var_9);
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (19ULL) : (34ULL)));
                                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned short)17898)) ? (arr_10 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_8 [11U] [i_1] [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47638)) ? (((/* implicit */int) (unsigned short)47638)) : (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (~(18446744073709551584ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))) : ((+(arr_10 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 18446744073709551577ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [i_1] [i_0])))))))));
                                arr_13 [(_Bool)1] [i_1] [10] [i_2] [10] [i_3] [(unsigned char)10] = ((/* implicit */long long int) (+(18446744073709551563ULL)));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) var_0);
                    arr_15 [i_2] [i_1] [i_2] = ((/* implicit */short) ((((max((((/* implicit */unsigned long long int) var_3)), (18446744073709551597ULL))) >> (((arr_5 [i_1]) - (12243401307833823147ULL))))) % (((/* implicit */unsigned long long int) var_3))));
                }
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_10))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(19ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 6U)) : (((var_5) / (((/* implicit */long long int) arr_16 [i_5] [i_0] [i_5] [i_5]))))))));
                        var_19 -= (-(arr_5 [i_6 - 1]));
                    }
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */_Bool) (+(min((arr_16 [i_5] [i_5] [i_5] [i_5]), (arr_16 [i_5] [i_5] [i_5] [i_7])))));
                        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) 9223372036854775805LL))));
                    }
                    var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [i_1] [i_0])) ? (arr_8 [i_0] [i_1] [i_5]) : (arr_8 [i_0] [i_1] [i_5])))));
                    arr_24 [i_5] [i_5] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) min((min((max((35184372088832ULL), (((/* implicit */unsigned long long int) 9223372036854775792LL)))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_5])))), (((/* implicit */unsigned long long int) var_7)))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (unsigned short)50859))))), ((((_Bool)1) ? (18446744073709551597ULL) : (12ULL)))))));
}
