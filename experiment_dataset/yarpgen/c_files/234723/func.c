/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234723
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1] [(_Bool)1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((max((var_3), (var_10))), (min((((/* implicit */long long int) var_9)), (-1145593036483786797LL)))))), (min((max((var_2), (((/* implicit */unsigned long long int) (short)2413)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11246))) : (5ULL)))))));
                    var_12 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((var_0), (var_5)))), (((((/* implicit */_Bool) var_11)) ? (var_1) : (var_1)))));
                    arr_10 [i_2] [(unsigned char)1] [i_2] [i_1] = min((min((((((/* implicit */_Bool) (unsigned char)3)) ? (var_10) : (((/* implicit */long long int) var_9)))), (max((((/* implicit */long long int) var_11)), (var_6))))), (((/* implicit */long long int) (unsigned char)0)));
                    arr_11 [i_2] [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (short)11245))))))) ? (min((min((549224846812148958ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) max((-2147483623), (((/* implicit */int) (unsigned char)84))))))) : (min((((/* implicit */unsigned long long int) 8935141660703064064LL)), (var_4)))));
                }
            } 
        } 
    } 
    var_13 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-16053)), (549224846812148966ULL)))) ? (((/* implicit */long long int) (~(var_9)))) : (var_10))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        arr_14 [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) -2147483623)), (var_1))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))) : (var_4)))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (var_9)))) ? ((-(var_1))) : (max((15724841538493080962ULL), (((/* implicit */unsigned long long int) (short)511)))))) : (((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) (-2147483647 - 1)))))) : (var_4)))));
        var_14 = ((/* implicit */long long int) (((_Bool)1) ? (min((((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) var_0)))), (var_4))) : (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */unsigned long long int) max((var_10), (0LL)))) : (var_2)))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) var_10);
                        arr_22 [i_4] [i_4] [i_6] [i_5] [i_4] [i_5] = ((/* implicit */signed char) var_1);
                        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (14339687992504926084ULL) : (((/* implicit */unsigned long long int) var_5)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        arr_25 [(signed char)1] = ((/* implicit */_Bool) var_8);
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -25856293)) ? (((((/* implicit */_Bool) 7119151686645856602ULL)) ? (((/* implicit */long long int) 2147483647)) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        var_18 = ((((/* implicit */_Bool) 127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (0ULL));
        arr_26 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) -236796891)) ? (var_4) : (((/* implicit */unsigned long long int) var_3))));
    }
    for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1519429677783451236ULL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)103))))))))), (min((((((/* implicit */_Bool) var_7)) ? (var_6) : (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_9) : (var_9)))))))))));
        var_20 ^= ((/* implicit */unsigned char) var_6);
        arr_30 [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((((/* implicit */int) (short)16756)), (var_9))), ((~(((/* implicit */int) (unsigned char)3)))))))));
        var_21 = ((/* implicit */signed char) var_8);
        arr_31 [i_8] [i_8] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))), ((-(var_1)))));
    }
}
