/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219339
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned long long int) min((var_10), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) var_0))))) | (var_8)))));
        var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) var_0))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_12 = ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1)))))))));
        var_13 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (var_0)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_2)) : (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (var_0)))) : ((+(var_7))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((17592186044160ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-47))))))));
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned long long int) var_2))))))) ? (((((/* implicit */_Bool) (-(var_8)))) ? (max((((/* implicit */unsigned long long int) var_2)), (var_6))) : (((/* implicit */unsigned long long int) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) var_8)) ? (var_1) : (var_8))))))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 16011109678168416375ULL)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (signed char)-2))))), (max((var_9), (((/* implicit */long long int) var_7))))))) ? ((+(min((((/* implicit */long long int) var_2)), (var_9))))) : (((((/* implicit */_Bool) 2435634395541135240ULL)) ? (5892570284917370453LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)57)))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            for (short i_4 = 1; i_4 < 20; i_4 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_7)) : (var_6))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ^ (min((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_9)) ? (var_8) : (var_8)))))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (var_1)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)28199)), ((unsigned short)56444)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (((((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) ? ((~(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                        var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (1558043744U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) ? (min((var_7), (((/* implicit */unsigned int) var_3)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_0)) : (var_7)))))));
                    }
                    for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        arr_20 [i_3] [i_3] = ((/* implicit */unsigned long long int) var_7);
                        arr_21 [i_2] [i_3] [i_6] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551595ULL)) ? (435297552) : (((/* implicit */int) (short)12288))))) ? (((/* implicit */int) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : ((+(((/* implicit */int) (unsigned char)164))))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25672)) ? (1698228978U) : (4134925132U)))) : (((((/* implicit */unsigned long long int) var_0)) + (var_8)))))));
                        arr_22 [i_2] [i_3 + 1] [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) max((var_4), (var_4)))) : ((-(((/* implicit */int) (short)-6407)))))), (((/* implicit */int) var_3))));
                        var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) (short)6406)), (997479990U)));
                    }
                    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_0)) : (var_7)))) < (var_1)))))))));
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (((var_8) / (var_1)))))) ? (((/* implicit */unsigned long long int) ((min((var_2), (((/* implicit */unsigned int) var_3)))) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_9)) : (var_8)))))))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_8)))) ? (((/* implicit */unsigned long long int) var_9)) : (max((var_8), (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) var_0))))) ? (((var_8) - (((/* implicit */unsigned long long int) var_9)))) : (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
}
