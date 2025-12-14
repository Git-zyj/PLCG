/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191291
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_14))) & (max((((/* implicit */int) ((signed char) var_1))), ((+(((/* implicit */int) var_4))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) ((unsigned int) arr_7 [i_0] [i_1] [i_2])));
                    var_18 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)49013)))) > (((((/* implicit */_Bool) var_15)) ? (-5158746539808105281LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))))))) % (((int) 14243981023958119044ULL))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(var_8)))))) ? (min((((/* implicit */long long int) (signed char)72)), (var_15))) : (((8857212938856456990LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37777)))))));
                        var_19 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_3])))))))) >= (((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_2]))))));
                        var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_15))))))), (((arr_2 [i_0]) ? (min((arr_0 [i_0]), (((/* implicit */long long int) (short)-32767)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_7 [i_0] [i_1] [i_2]))))))));
                    }
                    for (signed char i_4 = 2; i_4 < 16; i_4 += 2) 
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_4 + 1] |= ((/* implicit */_Bool) min((((/* implicit */long long int) (((~(((/* implicit */int) (signed char)-106)))) >> (((((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_0] [6LL] [i_1])) >> (((2482744337U) - (2482744318U)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1502937975881702131LL)) ? (((/* implicit */unsigned long long int) arr_6 [i_4 - 2] [i_2] [i_0] [i_0])) : (18ULL)))) ? (((/* implicit */long long int) ((arr_6 [i_0] [i_1] [i_2] [i_4 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163)))))) : ((+(var_15)))))));
                        arr_18 [i_4] [i_2] [11LL] [i_0] |= ((/* implicit */int) ((((((/* implicit */int) (signed char)73)) >= (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_4])) ? (((/* implicit */int) arr_13 [i_4 - 2] [i_1] [i_1] [17LL] [6U] [i_4])) : (var_13))))) ? (min((((3151837242U) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) var_4)) > (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4))))))))));
                        var_21 = ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) (-(3151837242U)))), (((unsigned long long int) 1568666137U)))));
                    }
                    arr_19 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_16 [i_2] [i_1] [i_0])))))))) != (((((/* implicit */_Bool) ((unsigned int) arr_16 [i_0] [i_1] [i_2]))) ? (((/* implicit */unsigned long long int) (~(var_11)))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) arr_0 [(unsigned short)14])) : (2887400165588066675ULL)))))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (-695664530) : (((/* implicit */int) var_5)))) ^ (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)176)), (arr_12 [i_0] [i_1])))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) var_9);
}
