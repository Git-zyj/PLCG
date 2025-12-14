/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190095
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
                        var_16 = (+(max((1222672908555689212ULL), (18446744073709551615ULL))));
                        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (18446744073709551596ULL)))))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned short) (+((-((-(((/* implicit */int) arr_1 [i_0]))))))));
        var_19 = (-(max((arr_7 [i_0]), (5683661007144090378ULL))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 1) 
    {
        arr_13 [i_4] [i_4] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) var_0)))), ((+(((/* implicit */int) arr_11 [i_4 - 1]))))));
        arr_14 [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)41620)))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((max((469664816680751557ULL), (((/* implicit */unsigned long long int) (unsigned short)43908)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_4 + 2]))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) (unsigned short)57767)), (var_4)))));
                    var_22 ^= (-(max((((/* implicit */unsigned long long int) (unsigned short)30435)), (arr_19 [i_4 + 3]))));
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_19 [i_5 + 2]), (var_4))))));
                }
            } 
        } 
    }
    var_24 |= ((/* implicit */unsigned long long int) var_2);
}
