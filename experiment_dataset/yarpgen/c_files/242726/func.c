/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242726
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
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (((/* implicit */int) var_9)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_14)), ((unsigned char)8))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (var_12)))) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_0 - 1]))) : ((+(((/* implicit */int) arr_0 [i_0]))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_5)))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (var_13)))) : (var_13)))) : (((unsigned int) arr_0 [i_0]))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_0 - 1])))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-22)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (((((/* implicit */_Bool) 16U)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (min((arr_3 [i_1]), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)52807), ((unsigned short)0)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((var_13) == (((/* implicit */int) (unsigned short)52820)))))) * (((var_0) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150)))));
        var_21 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (arr_3 [i_1]) : (arr_3 [i_1])))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        arr_7 [i_2] = (_Bool)0;
        arr_8 [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) var_17)) << (((((/* implicit */int) var_2)) - (23697)))))))));
        var_22 = ((/* implicit */unsigned int) ((((2703047580U) - (((/* implicit */unsigned int) 1670797989)))) > (((/* implicit */unsigned int) var_4))));
        arr_9 [i_2] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) max((var_17), (((/* implicit */unsigned short) arr_6 [i_2])))))) < (var_1));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 1549519358788011816LL)) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (var_10))), (max((((/* implicit */int) var_15)), (arr_1 [i_2])))))) : ((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 4294967278U)) : (var_5)))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 4; i_3 < 17; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            {
                arr_14 [9U] [(unsigned char)7] [i_4] = ((/* implicit */_Bool) (unsigned char)240);
                var_24 = ((/* implicit */long long int) var_4);
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) min((var_2), (((/* implicit */unsigned short) var_9))));
}
