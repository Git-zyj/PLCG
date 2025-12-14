/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2380
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) max((min((var_0), (max((((/* implicit */unsigned long long int) var_9)), (2019105511925576222ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_4)) : (4026531840U)))))))))));
    var_12 &= ((/* implicit */long long int) min((((/* implicit */unsigned int) 0)), (689236804U)));
    var_13 = ((var_5) + (var_2));
    var_14 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) (unsigned short)0)), (16777215U))), (((/* implicit */unsigned int) var_10))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_15 = ((((/* implicit */_Bool) (+(var_4)))) ? (((arr_1 [13U] [13U]) * (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned char) var_10))))) ? (min((4026531840U), (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (+((-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) var_3)) : (367952399U)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 3; i_2 < 16; i_2 += 2) 
        {
            var_16 = ((/* implicit */long long int) ((268435455U) ^ (((((/* implicit */_Bool) 1372884673)) ? (arr_7 [i_1] [i_2 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19799)))))));
            var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_1] [(_Bool)1])) : (var_3)))));
            var_18 = ((((/* implicit */_Bool) ((unsigned int) (short)-22466))) ? (arr_3 [i_1]) : (((/* implicit */long long int) arr_1 [i_2 - 3] [i_2])));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (int i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */unsigned long long int) 0)) : (arr_15 [i_3]))))));
                            var_20 ^= ((/* implicit */long long int) (+(arr_12 [(short)0] [i_4 + 1] [i_4] [i_4])));
                        }
                        var_21 = ((/* implicit */unsigned short) (+(arr_8 [(unsigned char)11] [i_2 + 1] [i_4 + 4] [i_4 + 1])));
                    }
                } 
            } 
        }
        arr_17 [i_1] = ((/* implicit */unsigned long long int) (-(arr_3 [i_1])));
    }
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        var_22 = ((/* implicit */_Bool) var_9);
        var_23 = ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_6]))));
        var_24 = ((/* implicit */unsigned long long int) min((((arr_18 [(_Bool)1]) ? (var_4) : (((/* implicit */int) arr_18 [i_6])))), ((-(((/* implicit */int) (unsigned char)8))))));
        var_25 = ((/* implicit */_Bool) ((((min((256030643386726796ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))) * (((/* implicit */unsigned long long int) (+(var_7)))))) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)0)), (7105409767159125901LL))))));
    }
}
