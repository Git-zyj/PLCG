/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238520
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
    var_12 = ((/* implicit */unsigned char) max((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30))) / (var_9))), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */int) max((arr_4 [i_1] [i_0]), (arr_4 [i_0] [i_1])))) / (((/* implicit */int) ((arr_1 [i_0]) >= (arr_1 [i_1]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned short)30)) - (((/* implicit */int) (unsigned short)65512)))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) max((var_6), (arr_8 [i_0] [i_0] [i_0] [i_0])))) == (((/* implicit */int) max((var_5), (var_1)))))))));
                            var_15 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)28053))))) >= (((/* implicit */int) ((((/* implicit */_Bool) (short)-8589)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 1])) * (((/* implicit */int) (short)0))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (1697497731U)))), (((18446744073709551615ULL) * (0ULL)))));
                            var_17 ^= ((/* implicit */unsigned char) min((min((((/* implicit */short) var_6)), (var_2))), (max((arr_4 [i_1] [i_5]), (var_2)))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((min((((/* implicit */int) (_Bool)0)), (arr_11 [i_5 + 3] [i_5] [i_5 + 2] [i_5 + 2] [i_5] [i_5 - 2]))), (((/* implicit */int) max((var_5), (var_2)))))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_1)), (var_9))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), ((unsigned short)27)))))))) | (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((((/* implicit */_Bool) (signed char)20)) && ((_Bool)1))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    for (signed char i_7 = 4; i_7 < 13; i_7 += 2) 
                    {
                        {
                            arr_17 [0LL] [i_6] [i_1] [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) ((arr_12 [i_7 + 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_10)))))))) >= (((((((/* implicit */int) (signed char)-2)) + (2147483647))) << (((var_9) - (1200822229258082550ULL)))))));
                            var_20 += ((/* implicit */int) ((min((854749641), (((/* implicit */int) arr_10 [i_7 - 4] [i_7 - 3] [i_7 - 1] [i_7 - 2])))) != (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_11)))))));
                            var_21 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */short) (_Bool)1)))))) / (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_8 [i_7 - 3] [i_7 - 1] [i_7] [i_7]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)91)) ^ (((/* implicit */int) (short)7626)))), (((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned char)190))))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_9)))))));
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) ((((((/* implicit */int) (short)20940)) / (((/* implicit */int) var_3)))) < (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (unsigned char)65)))))))))))));
}
