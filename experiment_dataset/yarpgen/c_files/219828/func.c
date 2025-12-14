/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219828
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
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) + (2147483647))) >> ((((~(var_3))) - (2555221341U)))))), (((((/* implicit */unsigned int) ((/* implicit */int) max(((short)4625), ((short)4614))))) + (((var_5) ? (var_7) : (((/* implicit */unsigned int) -1203342624))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_12 *= ((/* implicit */unsigned char) (+(arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */signed char) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) ((short) min((var_3), (arr_1 [i_0] [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned int) arr_5 [i_1] [i_1])))) & (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (var_3) : (max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) (-2147483647 - 1)));
        var_14 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (-(arr_4 [i_1] [i_1])))) ? (max((((/* implicit */unsigned int) var_1)), (arr_4 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_1] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))))))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) -268435456)))));
        var_15 -= ((/* implicit */short) arr_4 [i_2] [i_2]);
    }
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
    {
        var_16 += ((/* implicit */short) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_11 [i_3]))))));
        /* LoopSeq 4 */
        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            var_17 = ((/* implicit */short) arr_8 [i_3] [i_4]);
            arr_15 [i_4] [i_3] = ((/* implicit */unsigned long long int) (-(((int) arr_11 [i_3]))));
            arr_16 [i_3] [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) max((var_3), (var_3)))) : (min((((/* implicit */unsigned long long int) (signed char)-50)), (arr_7 [i_3]))))), (arr_0 [i_3] [i_3])));
        }
        for (int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) || (((/* implicit */_Bool) var_10))))), (max((max((((/* implicit */unsigned long long int) arr_11 [i_3])), (arr_7 [i_5]))), (arr_7 [i_5])))));
            var_19 = min((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_12 [i_3] [i_3] [9ULL])), ((short)-4608))))) | (arr_0 [i_3] [i_5]))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_3] [i_3] [i_5]))))), (max((arr_0 [i_3] [i_5]), (((/* implicit */unsigned long long int) arr_17 [i_5])))))));
        }
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            arr_24 [i_6] [i_6] [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (unsigned short)22725)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_6] [i_6]))) : (arr_4 [i_6] [i_6]))) : (((((/* implicit */_Bool) arr_23 [i_3] [i_6] [i_6])) ? (arr_21 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) (-((+(arr_8 [i_6] [i_3]))))))));
            arr_25 [i_6] [i_3] [8U] = min(((-(((/* implicit */int) (unsigned short)22709)))), (((/* implicit */int) arr_5 [i_6] [i_6])));
        }
        for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_7])) ^ (((/* implicit */int) arr_13 [i_3] [i_3] [i_3]))))) >= (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) (-(arr_2 [i_3])))) : (max((((/* implicit */unsigned long long int) arr_21 [i_3])), (9383503200591053465ULL)))))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)20555)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42826)))));
            arr_29 [i_3] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_3]))))), (arr_28 [i_3] [i_3])));
            arr_30 [i_3] [i_3] [i_7] = ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (1884590259)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) arr_27 [i_3] [i_3])) + (((/* implicit */int) arr_10 [i_7])))));
            arr_31 [i_3] [i_3] [i_3] = ((/* implicit */short) max((((/* implicit */int) max(((short)1557), ((short)1557)))), (((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3])) ? (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_27 [i_3] [i_7])) : (((/* implicit */int) arr_14 [i_3] [i_7] [i_3])))) : (((/* implicit */int) ((_Bool) 17671317421252743481ULL)))))));
        }
        arr_32 [i_3] = ((/* implicit */short) (~(min((((((/* implicit */_Bool) 228064839980618672ULL)) ? (-1884590260) : (((/* implicit */int) var_2)))), ((~(((/* implicit */int) (unsigned short)65535))))))));
        var_22 = ((/* implicit */unsigned long long int) arr_11 [i_3]);
        var_23 = ((/* implicit */unsigned char) ((max((max((((/* implicit */unsigned long long int) var_4)), (arr_7 [i_3]))), (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3])))) ^ (((((((/* implicit */_Bool) 4294967273U)) && (((/* implicit */_Bool) var_4)))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))))));
    }
    var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-53)) <= (((/* implicit */int) var_6)))) ? ((~(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (var_2)))))))) ? (((((/* implicit */_Bool) 775426652456808146ULL)) ? (9383503200591053465ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22709))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) var_6)))) : (((var_6) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))))));
}
