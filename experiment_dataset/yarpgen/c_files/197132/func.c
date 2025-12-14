/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197132
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
    var_11 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_10)) ? (268427264) : (((/* implicit */int) var_5))))))));
    var_12 &= max(((((!(((/* implicit */_Bool) 4251300363U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((signed char) 14344101623652771333ULL))))), (((int) 2147483647)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((unsigned long long int) (short)4974);
        var_14 -= ((/* implicit */_Bool) var_9);
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 504403158265495552ULL)) ? (((/* implicit */int) var_2)) : (((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_2)))) ? (max((((/* implicit */int) arr_1 [(short)2])), (var_4))) : (arr_0 [i_1])))));
        var_16 ^= ((/* implicit */short) var_5);
        var_17 ^= ((/* implicit */short) (-(var_4)));
    }
    for (short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)62615))));
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_2]))));
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) var_3)), (((unsigned int) ((((/* implicit */_Bool) 13764963044527423850ULL)) ? (2147483643) : (((/* implicit */int) var_5)))))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_4))));
                        }
                    } 
                } 
            } 
        }
        for (int i_7 = 2; i_7 < 17; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_8 = 2; i_8 < 15; i_8 += 3) 
            {
                for (short i_9 = 3; i_9 < 17; i_9 += 4) 
                {
                    {
                        var_22 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(-9223372036854775799LL)))) ? (((/* implicit */int) min((var_9), (arr_21 [4ULL] [i_7] [i_7])))) : (((/* implicit */int) (!(var_5))))))), ((-(arr_14 [i_7 - 2] [i_7 - 2])))));
                        var_23 = ((/* implicit */signed char) min((9223372036854775784LL), (((/* implicit */long long int) min((((/* implicit */signed char) var_5)), (arr_25 [i_8 - 2] [i_7] [i_8] [i_9]))))));
                        var_24 = ((short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (var_6)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2]))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2])))));
                        arr_27 [i_2] [i_7] [i_9] [i_2] = ((/* implicit */short) arr_17 [i_2] [i_7] [i_8] [i_8] [i_9]);
                        var_25 ^= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [14U])) : (((/* implicit */int) (unsigned short)32768)))))))));
                    }
                } 
            } 
            var_26 = ((unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
        }
        var_27 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (4681781029182127766ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2147483631), (2020761285)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_2]))))) : (arr_23 [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) min((arr_16 [i_2] [1ULL] [i_2]), (((/* implicit */int) arr_6 [i_2]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_2] [i_2]))))) : (((unsigned long long int) arr_7 [i_2])))));
    }
}
