/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28897
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
    var_18 = var_5;
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_3))));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((var_9), (var_9))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */int) ((signed char) (-(((((/* implicit */_Bool) (signed char)-11)) ? (986482254U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))))))));
        var_22 = var_0;
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_23 = arr_0 [i_1];
        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) & (-6159217352000283374LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-83))) >= (-6159217352000283374LL))))) : (((((/* implicit */_Bool) 2652337516633693916LL)) ? (((/* implicit */unsigned long long int) 868610934U)) : (var_9))));
    }
    for (signed char i_2 = 2; i_2 < 10; i_2 += 2) 
    {
        var_25 ^= ((/* implicit */unsigned char) 6130250496037217273ULL);
        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 2652337516633693916LL))) ? ((~(2506610581843416697LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_16)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)62))) : (-2652337516633693925LL)))) ? (arr_3 [i_2 - 2] [i_2 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((2506610581843416711LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
        /* LoopNest 2 */
        for (signed char i_3 = 3; i_3 < 10; i_3 += 2) 
        {
            for (int i_4 = 1; i_4 < 10; i_4 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(347241601)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) 18153943079494261453ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))) : (3762749582U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-43))))) : (((/* implicit */int) var_11))));
                    var_27 = ((/* implicit */short) ((2506610581843416697LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10477)))));
                    var_28 += ((/* implicit */signed char) ((((/* implicit */int) ((13865449949090603447ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49090)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 1558338950616449681ULL)))))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */long long int) 3762749591U)), (2652337516633693922LL)))))));
}
