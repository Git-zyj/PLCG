/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33018
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) (-(min((arr_0 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_6);
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) & (((/* implicit */int) (signed char)71))))) : (arr_0 [i_0])))) ^ (max((4261412864ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7)))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((18446744069448138752ULL) & (((/* implicit */unsigned long long int) max((-1198853722), (2147483584)))))))));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2]))) : (arr_5 [i_1] [i_1])));
            arr_11 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_6 [i_1 + 1] [i_1]), (((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (17132693389485384189ULL))))));
        }
        for (signed char i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_3 - 1] [i_1] [i_5] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((arr_12 [i_1]) >> (((/* implicit */int) (!(((((/* implicit */unsigned long long int) var_1)) != (18446744069448138735ULL))))))))) : (((/* implicit */unsigned short) ((((arr_12 [i_1]) + (2147483647))) >> (((/* implicit */int) (!(((((/* implicit */unsigned long long int) var_1)) != (18446744069448138735ULL)))))))));
                        var_12 = ((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_1] [i_4] [i_5]);
                        var_13 *= ((/* implicit */unsigned int) arr_8 [4U] [i_3]);
                    }
                } 
            } 
            arr_19 [i_1] = ((/* implicit */signed char) (+((-2147483647 - 1))));
            var_14 = ((/* implicit */long long int) (-(max((-2147483608), (1198853721)))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        arr_24 [i_1] [i_1] [i_1] [i_7] = (+(arr_9 [i_1]));
                        var_15 = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-72))) : (3236942041504209751ULL)))) ? (((/* implicit */unsigned long long int) ((arr_23 [i_6] [i_3 - 1] [i_6] [i_6] [i_1] [i_1]) << (((arr_23 [i_1] [i_3 + 1] [i_6] [i_7] [i_1] [i_7]) - (1023627162U)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 34359738366ULL)) || (((/* implicit */_Bool) arr_5 [i_6] [i_1])))))) - (max((((/* implicit */unsigned long long int) 2146435072U)), (arr_5 [i_1] [i_1])))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-72))) : (3236942041504209751ULL)))) ? (((/* implicit */unsigned long long int) ((arr_23 [i_6] [i_3 - 1] [i_6] [i_6] [i_1] [i_1]) << (((((arr_23 [i_1] [i_3 + 1] [i_6] [i_7] [i_1] [i_7]) - (1023627162U))) - (4265034043U)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 34359738366ULL)) || (((/* implicit */_Bool) arr_5 [i_6] [i_1])))))) - (max((((/* implicit */unsigned long long int) 2146435072U)), (arr_5 [i_1] [i_1]))))))));
                    }
                } 
            } 
        }
        for (short i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            arr_27 [i_8] [i_8] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_4)), (((unsigned int) max((var_7), (((/* implicit */unsigned long long int) 7LL)))))));
            var_16 ^= ((/* implicit */unsigned short) max((min((arr_6 [i_8] [i_8]), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [i_8] [i_8] [i_8] [i_8] [i_8])) : (arr_6 [i_1 + 2] [i_8]))))), (((/* implicit */int) arr_17 [i_8] [i_8] [i_1 - 2] [i_8]))));
            var_17 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) 4261412867ULL)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (signed char)-72)))), (((((/* implicit */_Bool) 13715450384309439276ULL)) ? ((-2147483647 - 1)) : (2147483584)))));
            arr_28 [i_1] = 10723986664449721578ULL;
        }
    }
    var_18 = ((/* implicit */unsigned long long int) var_10);
}
