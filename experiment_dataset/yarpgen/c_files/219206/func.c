/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219206
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (unsigned short)41652))));
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((long long int) var_6))))) && (((/* implicit */_Bool) ((((18301086582177125070ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15291))))) ? (max((var_11), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
    var_14 += ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)111))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (min((var_9), (((/* implicit */unsigned int) var_2)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                arr_7 [i_0 - 1] [i_1] [i_1] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 9223372036854775801LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41671))) : (-9223372036854775801LL)))))), (((((/* implicit */_Bool) (unsigned short)8188)) ? (min((((/* implicit */unsigned long long int) var_2)), (1099511627775ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65518))))))))));
                arr_8 [i_0 - 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1])) - (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1]))))));
                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))), (913073899U))))));
            }
            for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (!(var_8)))) != (((/* implicit */int) (unsigned short)21511)))))));
                arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_1), (var_7)))) ? ((~(((arr_1 [i_0 - 1] [i_0 - 1]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                arr_13 [i_0] [i_0] [i_0] = max(((unsigned short)56760), ((unsigned short)57340));
            }
            for (int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0])))))))));
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (var_1)))) ? (((((/* implicit */_Bool) arr_5 [i_0 - 1] [3] [i_4] [i_1])) ? (603240675815355338LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34908))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) min((603240675815355338LL), (((/* implicit */long long int) (unsigned short)62359))))) ? (((unsigned long long int) 2084228374U)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) (-(-3LL)))));
            }
            arr_16 [i_0 + 1] [i_0 - 1] [i_1] = ((/* implicit */unsigned short) (-((+(arr_1 [i_0 - 1] [i_0 - 1])))));
            arr_17 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_0 - 1] [i_0 - 1]));
        }
        arr_18 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0 + 1])))))));
    }
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
    {
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_20 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23872))) : (arr_20 [i_5]))) : ((+(arr_20 [i_5])))));
        var_18 = ((/* implicit */int) (~(((var_4) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6)))) : (((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57366))) : (634093737824244511LL)))))));
        var_19 += ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */int) (unsigned short)8188)) : (((/* implicit */int) var_8)))) == ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-31938))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
    {
        arr_24 [i_6] = ((/* implicit */long long int) var_4);
        arr_25 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_19 [i_6]))) ? ((+(((/* implicit */int) arr_19 [i_6])))) : (((/* implicit */int) ((((/* implicit */_Bool) 1656050185046939183LL)) || (((/* implicit */_Bool) -16162711)))))));
        arr_26 [i_6] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4547324923593010540LL)) ? (4294967292LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30963))))))));
        arr_27 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 4547324923593010540LL)) ? (((/* implicit */int) var_10)) : ((~(((var_8) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)1))))))));
    }
}
