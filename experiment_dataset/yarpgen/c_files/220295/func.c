/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220295
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((signed char) 0ULL))) : (((/* implicit */int) ((unsigned char) var_7)))))) - (var_3)));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) ^ (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned short)44930)))) || (((((/* implicit */_Bool) 9377182637558416016ULL)) || (((/* implicit */_Bool) 22ULL)))))))));
        var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20611)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)38026)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (unsigned short)44930))))) : ((-(3940954695U)))));
    }
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */unsigned long long int) 3940954695U)) : (8091497950352974944ULL)))) ? (((/* implicit */int) (unsigned short)20586)) : (((/* implicit */int) (unsigned char)154))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44930))) : (((unsigned long long int) 3940954692U))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 3940954690U))) << (((((/* implicit */int) (unsigned short)44937)) - (44925)))));
        arr_6 [i_1] [i_1] = ((unsigned long long int) (unsigned short)20606);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned char) 354012605U);
                    arr_13 [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 3940954695U)) ? (5ULL) : (((/* implicit */unsigned long long int) 3940954716U))));
                    var_16 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 18446744073709551593ULL)) ? (3940954690U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
    {
        arr_18 [i_4] = (+(var_3));
        arr_19 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (354012586U)));
        arr_20 [i_4] = ((/* implicit */short) (-(3940954690U)));
        arr_21 [i_4] = ((/* implicit */unsigned int) ((((_Bool) 4268787716U)) ? (5850710227738293719ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117)))));
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) (((!((!(((/* implicit */_Bool) 12596033845971257896ULL)))))) || ((!((_Bool)1)))));
        var_18 = ((/* implicit */short) (-((+(354012605U)))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) -1LL))));
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)44938)) & (((/* implicit */int) (unsigned short)44525))));
    }
    var_20 = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */_Bool) 354012607U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20582))) : (5850710227738293736ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
}
