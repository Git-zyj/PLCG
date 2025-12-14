/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49624
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
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3495912767U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (3132085154524570533LL)))) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-9935)) ? (((/* implicit */int) (_Bool)1)) : (var_9))))))) < (var_11)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */int) var_8)) > (var_14)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_9))));
                                var_18 = ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_2] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) (_Bool)1);
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (var_2) : (3495912752U)));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_11 [i_0] [(unsigned short)4] [i_0] [5U] [5U]))));
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4)))) & (((((/* implicit */_Bool) var_7)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 2; i_7 < 9; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((_Bool) var_2)) ? (((/* implicit */long long int) ((((var_9) <= (((/* implicit */int) var_1)))) ? (var_7) : (var_7)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [2ULL] [i_7] [i_7] [(signed char)9] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_7)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) var_5)) * (arr_1 [i_5])))) : (((((/* implicit */_Bool) arr_3 [i_5] [(short)7])) ? (((/* implicit */long long int) 799054530U)) : (var_4))))))))));
                        arr_21 [i_5] [i_5] [i_7] [i_8] [(signed char)0] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) : (var_2)))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-32711)) / (((/* implicit */int) (signed char)-24))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max((((/* implicit */long long int) var_0)), (var_4)))))));
                        var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)4633)) : (((/* implicit */int) (signed char)-24)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_6)) << (((((/* implicit */int) (unsigned short)4626)) - (4614))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (var_7))))))) : (((unsigned long long int) 2147483647))));
                    }
                } 
            } 
        } 
        arr_22 [i_5] [i_5] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58314))) < (var_7))) ? (((((((/* implicit */int) var_13)) << (((var_11) - (13977251510413220373ULL))))) ^ (var_9))) : (((/* implicit */int) ((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5]))))))));
    }
    for (long long int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) var_11);
        var_26 &= ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (5610229486476058736ULL))) > (((unsigned long long int) (short)24990)));
        var_27 = ((/* implicit */_Bool) var_5);
    }
    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) var_11))));
}
