/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28137
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
    var_16 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (16173199037777129779ULL)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (7428268688503826077ULL) : (((/* implicit */unsigned long long int) -952551221))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8)) ? (var_14) : (((/* implicit */int) (short)-11212))))) : (min((((/* implicit */unsigned long long int) (signed char)-120)), (16173199037777129779ULL)))))) ? (((/* implicit */int) ((signed char) var_15))) : (var_11)));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 239786121)) ? (9551883269206523219ULL) : (10394956288452907595ULL))) - (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))) % (4292870144U))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_1] [10U] [i_2] [i_2] [i_4])) / (((/* implicit */int) var_9))))))))));
                            var_18 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3792798763510953203LL)) ? (((/* implicit */int) arr_8 [(short)11] [9] [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_3)))) - (((/* implicit */int) ((952551221) > (((/* implicit */int) (unsigned short)39197)))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 12; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_1))));
                            var_20 *= ((/* implicit */short) arr_10 [i_0] [i_0]);
                        }
                        var_21 += ((/* implicit */short) 1952305986166269928ULL);
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                    {
                        var_22 &= ((/* implicit */unsigned short) (_Bool)1);
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6])))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (11018475385205725539ULL)))) : ((~(((/* implicit */int) var_6))))));
                    }
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) var_13);
                        var_25 = ((/* implicit */unsigned long long int) arr_9 [i_7]);
                        var_26 = ((/* implicit */_Bool) arr_16 [5ULL] [i_1] [(short)8]);
                        var_27 ^= ((/* implicit */int) ((arr_4 [i_7] [i_0] [i_1] [i_0]) == ((-(2194336269U)))));
                    }
                }
            } 
        } 
    } 
    var_28 = 16173199037777129779ULL;
    var_29 = ((/* implicit */signed char) ((((((var_5) >> (((/* implicit */int) var_15)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((unsigned int) (_Bool)1))));
}
