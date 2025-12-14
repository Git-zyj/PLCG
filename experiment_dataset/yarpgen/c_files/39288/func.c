/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39288
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0 - 2] [5ULL] = ((/* implicit */unsigned char) ((signed char) min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 2]))));
                arr_7 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)32767)), ((~(((/* implicit */int) ((_Bool) arr_5 [(signed char)5] [(signed char)5])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 = ((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) (unsigned char)46)));
                            arr_12 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_14 ^= ((/* implicit */short) ((((((/* implicit */int) (short)-8335)) % (((/* implicit */int) arr_4 [i_0 - 1])))) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) var_8))))));
                            var_15 *= ((/* implicit */unsigned int) arr_4 [i_0 + 2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (unsigned char i_5 = 3; i_5 < 9; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [i_0 - 2]), (arr_3 [i_0 - 3])))) ? (((/* implicit */int) (!(((_Bool) arr_4 [i_0]))))) : (((/* implicit */int) var_2))));
                            arr_18 [i_0 + 2] [i_1] [i_5] [i_5] [i_5 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : ((~(var_3)))));
                            arr_19 [i_5] [i_1] [i_4] [4U] = ((/* implicit */int) var_11);
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (min((var_11), (((/* implicit */unsigned long long int) var_10))))));
                        }
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)25)) >= (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 2; i_9 < 9; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            {
                                arr_31 [i_8] [i_7] [(short)3] [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_10 [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_9 - 2] [i_9 - 2]);
                                var_19 = ((/* implicit */_Bool) min((((unsigned char) var_12)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) min((arr_25 [i_8] [i_8] [i_8] [i_8]), (arr_1 [i_9] [i_7])))))))));
                                var_20 = ((/* implicit */short) 2097151);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) ^ (2097151)))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_24 [(signed char)0])))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((unsigned int) (_Bool)0));
}
