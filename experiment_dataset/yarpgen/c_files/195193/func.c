/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195193
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
    var_13 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_14 -= ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_2]);
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((long long int) arr_6 [i_0] [i_0] [i_3]))) == (min((((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */unsigned long long int) 7050200026462962143LL)) : (arr_4 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))))))))));
                        var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (7050200026462962143LL) : (-628989879984271525LL)))), ((-(16049935477216536179ULL)))));
                    }
                } 
            } 
        } 
        var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (16049935477216536176ULL) : (((/* implicit */unsigned long long int) -7050200026462962139LL))));
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 2) 
        {
            for (unsigned char i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                {
                    var_18 *= ((/* implicit */_Bool) 2493085646U);
                    var_19 = ((/* implicit */short) arr_1 [i_4]);
                    arr_18 [i_5] [i_4 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_4]))) << ((((((-(((/* implicit */int) (unsigned short)2909)))) + (2935))) - (19)))))));
                }
            } 
        } 
    }
    var_20 += ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_9) / (((/* implicit */unsigned int) var_3))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_7)) : (1359263183275630316ULL))))))));
    var_21 = ((/* implicit */int) max((var_21), (min((-1526134461), (((/* implicit */int) var_11))))));
}
