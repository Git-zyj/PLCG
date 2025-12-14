/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248886
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) var_2))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(arr_6 [i_1])))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) 3381443278U)) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)253)), (var_8))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)9)) - (var_5))) ^ (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)4772)))))))));
                var_14 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 913524018U)) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])), (var_10))))))) << ((((+(max((arr_3 [i_1]), (((/* implicit */unsigned long long int) (unsigned short)60781)))))) - (4990893897115977202ULL)))));
                var_15 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_5 [i_1]), (var_2))))))), (max((arr_6 [i_0]), (((/* implicit */unsigned long long int) 1005795363U))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 3; i_2 < 8; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_16 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((arr_6 [i_2 - 2]) % (arr_6 [i_2 - 2]))) > (min((arr_6 [i_2 - 2]), (((/* implicit */unsigned long long int) (signed char)76))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */int) arr_14 [i_4] [i_3]);
                        var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_9)) << (((3381443278U) - (3381443276U))))) : ((-(((/* implicit */int) arr_13 [i_3] [i_3] [i_3]))))))) - (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_3] [i_2 - 1]))) | (arr_6 [i_4]))) / (((/* implicit */unsigned long long int) (+(127U))))))));
                        var_18 = ((/* implicit */unsigned int) var_8);
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2 - 2] [i_2 - 3] [i_2] [i_2])) ? (((/* implicit */int) arr_18 [i_2 - 2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_18 [i_2 - 2] [i_2] [i_2] [i_2 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))) : (var_6)));
    }
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        arr_24 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((3362050921854362772LL) / (-3362050921854362763LL)))) - (var_10)));
        var_20 = ((/* implicit */unsigned char) arr_23 [i_6]);
        var_21 = ((/* implicit */signed char) var_6);
        var_22 = ((/* implicit */unsigned short) ((signed char) var_5));
    }
    var_23 = ((/* implicit */long long int) min((min((max((((/* implicit */int) (unsigned char)92)), (var_5))), (((((/* implicit */int) (unsigned short)60799)) << (((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (unsigned short)42649)) ? (((/* implicit */int) (unsigned char)124)) : (var_5))) : ((+(((/* implicit */int) var_1))))))));
}
