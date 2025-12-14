/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47378
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
    var_12 ^= ((int) max((((/* implicit */unsigned long long int) (unsigned short)48498)), (min((3123858253079202463ULL), (((/* implicit */unsigned long long int) (unsigned short)52738))))));
    var_13 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */int) ((unsigned char) var_4))), ((+(((/* implicit */int) arr_0 [i_0])))))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(15322885820630349181ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_0])))) : (((long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0])))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8))))), (max((((/* implicit */unsigned int) (_Bool)1)), (var_5)))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) var_11);
        var_17 = ((/* implicit */int) ((short) ((unsigned long long int) arr_4 [i_1] [i_1])));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (!(var_11)));
                    var_18 = ((/* implicit */_Bool) (+(((arr_7 [i_1] [i_1] [i_1] [i_1]) - (arr_7 [i_1] [i_2] [i_2] [i_3])))));
                    arr_10 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) (+(var_5)))))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1]);
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((3123858253079202463ULL) & (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_4]))) ? (max((((/* implicit */long long int) var_7)), (arr_14 [i_4] [i_4]))) : (6001978113824957062LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (arr_18 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) arr_6 [i_5] [i_5] [i_5])) : (((((/* implicit */_Bool) var_1)) ? (arr_3 [i_4]) : (((/* implicit */unsigned int) arr_15 [i_4] [i_5])))))))));
            arr_19 [i_4] [i_5] = ((/* implicit */_Bool) ((int) ((arr_14 [i_4] [i_4]) == (arr_14 [i_4] [i_5]))));
        }
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
        {
            var_21 ^= var_0;
            var_22 = ((unsigned char) var_5);
            var_23 = ((/* implicit */signed char) arr_5 [i_4] [i_4] [i_4]);
        }
        var_24 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_4]))), (((unsigned long long int) var_3)))), (arr_18 [i_4] [i_4] [i_4])));
        arr_23 [i_4] = ((/* implicit */unsigned char) arr_21 [i_4] [i_4]);
        arr_24 [i_4] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min(((short)-28575), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) ((var_10) - (var_10)))) ? (max((((/* implicit */long long int) var_6)), (arr_12 [i_4] [i_4]))) : (((/* implicit */long long int) ((int) arr_17 [i_4])))))));
        var_25 = ((/* implicit */unsigned char) var_8);
    }
}
