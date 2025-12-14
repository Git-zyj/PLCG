/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34433
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
    var_17 = ((/* implicit */long long int) 7424378831798363320ULL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) 5403891232929773008LL);
        var_18 = ((/* implicit */int) (+(var_4)));
    }
    for (unsigned short i_1 = 2; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_19 = min((((unsigned int) ((((/* implicit */int) (unsigned char)48)) / (((/* implicit */int) (unsigned char)112))))), ((+(((unsigned int) (_Bool)1)))));
        var_20 += ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [(_Bool)1])) & (var_10)))), (((unsigned long long int) (unsigned short)18319))))));
        var_21 = ((/* implicit */unsigned int) ((_Bool) ((max((((/* implicit */unsigned long long int) (unsigned char)137)), (66977792ULL))) | (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) : (18446744073709551615ULL))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 17; i_2 += 2) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) - (0)));
        var_22 = ((/* implicit */signed char) 18446744073709551615ULL);
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31))))))));
            arr_11 [i_2 - 2] [i_3] = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)12655));
        }
        for (unsigned short i_4 = 3; i_4 < 15; i_4 += 3) 
        {
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)67)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43436)))))))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) << (((((/* implicit */int) arr_5 [(unsigned short)15] [i_4 + 2])) - (55245)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_4]))))) : (((unsigned long long int) arr_4 [i_2]))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)160)) <= (((/* implicit */int) (signed char)0))));
            arr_16 [i_2] [i_2] [i_2] &= (+(4184174543U));
            arr_17 [i_2 + 1] [9ULL] = ((/* implicit */int) (((+(288212783965667328ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        for (signed char i_6 = 2; i_6 < 17; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_27 [i_6] [i_6] [i_6] = ((/* implicit */int) 11359565387428532091ULL);
                    var_27 = (+(1596160050));
                    var_28 ^= ((/* implicit */unsigned int) var_7);
                    arr_28 [i_6] [i_6] = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (((long long int) var_15))))) > (max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5]))) : (4846997079234498265ULL))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */signed char) 127LL);
    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (signed char)-71))));
}
