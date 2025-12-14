/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240201
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
    var_10 = ((/* implicit */short) max((((/* implicit */long long int) (+(0)))), (max((max((var_7), (((/* implicit */long long int) (signed char)109)))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_6)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)(-127 - 1))))), (max((9223372036854775807LL), (((/* implicit */long long int) max(((unsigned char)136), (((/* implicit */unsigned char) (_Bool)1)))))))));
        arr_2 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_0 [i_0]), (arr_1 [i_0])))) << (((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) + (15712))) - (27)))));
        arr_3 [(unsigned char)12] [(unsigned char)12] = ((/* implicit */unsigned short) max((max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)29110)))), (((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        var_12 = (short)-29117;
        var_13 = ((/* implicit */_Bool) max((max((max((var_7), (((/* implicit */long long int) (unsigned short)65535)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) arr_1 [i_1 + 3]))));
        var_14 -= ((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [(unsigned short)14] [(unsigned short)2])), (max((((/* implicit */unsigned short) arr_6 [(unsigned char)2])), ((unsigned short)57761)))));
        var_15 = ((/* implicit */signed char) (_Bool)1);
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)12))));
        var_16 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-118)), (var_2))))) == (((-6864819419256516829LL) + (((/* implicit */long long int) ((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) (+(arr_7 [i_2])))) ? (max((var_4), (((/* implicit */unsigned int) (unsigned short)27)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29116))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) max(((short)-29111), (((/* implicit */short) arr_9 [i_2] [i_2]))))))))));
    }
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((/* implicit */int) ((((674504170363500087LL) & (var_0))) == (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) max((1831666262U), (((/* implicit */unsigned int) var_3))))) ? (max((-435673475), (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) var_2)))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)8340)), (1639953917U)));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((arr_13 [i_3]), (((/* implicit */unsigned int) ((int) (+(8023820652547895447ULL))))))))));
        arr_14 [i_3] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_9 [19U] [i_3])) < (((/* implicit */int) var_5))))) << (((((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_8 [i_3 - 1] [i_3])))) - (236))))))));
        arr_15 [i_3] = ((/* implicit */unsigned short) var_3);
    }
}
