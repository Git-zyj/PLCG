/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2229
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) 7185044214961032585ULL);
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((unsigned char) arr_6 [i_1] [i_2] [i_4]))) ? ((+(((/* implicit */int) arr_1 [i_1] [i_4])))) : (((((/* implicit */int) (signed char)4)) + (((/* implicit */int) var_4)))))), (((((/* implicit */int) (signed char)4)) - (((/* implicit */int) arr_9 [i_0] [i_0]))))));
                                var_17 = ((/* implicit */long long int) min((var_17), (var_3)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (signed char)-4))) + (((/* implicit */int) (signed char)-27))))) ? (((/* implicit */int) ((unsigned char) ((unsigned long long int) var_0)))) : (min((arr_17 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_2 - 1]), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)4)))))))));
                                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_5] [i_5] [i_5] [i_2 + 1] [i_1] [i_0]))))) >> (((((/* implicit */int) arr_15 [i_6] [i_5] [i_1] [i_2] [i_1] [i_1] [i_0])) - (20497)))))) ? ((~(((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_1])) <= (((/* implicit */int) var_2))))))) : (((/* implicit */int) ((((/* implicit */int) max(((short)22774), (((/* implicit */short) arr_8 [i_0] [i_1] [i_6]))))) > (((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_1] [(unsigned char)10]))))))));
                                var_20 &= ((/* implicit */unsigned short) (-(max((((11261699858748519030ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [11] [i_1] [i_1] [i_1] [i_1] [i_1] [11]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (arr_12 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)22774))))))))));
                                arr_18 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2 + 2] [i_2 + 3] = ((/* implicit */int) arr_6 [i_0] [i_2] [i_0]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) arr_13 [i_0 + 1] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 18; i_8 += 2) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned long long int) arr_16 [i_0 - 1]);
                                var_23 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0])) ? (arr_21 [i_0] [i_1] [i_2] [i_7] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) > (6226462600675218138LL)))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 + 2] [i_2] [i_7])) < ((((-2147483647 - 1)) / (((/* implicit */int) (signed char)25))))))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_14 [(short)0] [i_7] [i_2] [i_7] [i_0])) + (min((var_3), (((/* implicit */long long int) var_1)))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_8 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)89)) : (1406196811)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (signed char i_10 = 3; i_10 < 7; i_10 += 2) 
        {
            for (unsigned char i_11 = 3; i_11 < 9; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_9] [(short)10] [i_11 + 2]))))) ? (((((/* implicit */_Bool) var_12)) ? (2251799813685248LL) : (((/* implicit */long long int) arr_23 [i_9])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2376107486U)))))))))));
                                var_26 -= ((/* implicit */short) (signed char)126);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned int) 2251799813685248LL)), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))))), ((signed char)-1)))) : (((((var_14) + (2147483647))) << (((max((-4124287067997049434LL), (((/* implicit */long long int) var_7)))) - (1714829882LL))))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */signed char) max((var_28), (var_0)));
}
