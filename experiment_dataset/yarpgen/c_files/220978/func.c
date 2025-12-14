/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220978
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)62973)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52140))) : (arr_0 [i_0] [i_1]))), (((/* implicit */long long int) (-(((/* implicit */int) var_19)))))))) ? (max((((var_0) >> (((7402173904407991537ULL) - (7402173904407991521ULL))))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((3134205648U) > (arr_1 [i_0] [i_0])))))));
                var_21 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)36862))));
            }
        } 
    } 
    var_22 *= var_2;
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))), (var_2)))));
        var_24 = max((((((/* implicit */_Bool) (~(17298832773372001791ULL)))) ? (26U) : (var_10))), (arr_7 [i_2]));
        var_25 |= ((/* implicit */long long int) var_12);
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) ((arr_8 [i_3]) - (((((/* implicit */_Bool) arr_7 [i_3])) ? (arr_7 [i_3]) : (arr_7 [i_3])))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    {
                        var_27 *= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 2907940046U)) / (11044570169301560078ULL))) >> (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 845475903U))))), (2907940058U)))));
                        var_28 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 20U)) ? (((/* implicit */unsigned long long int) -5098436079029385662LL)) : (var_0)))));
                        var_29 = ((arr_19 [4U] [i_3] [i_4 - 1] [i_4 + 1] [i_4 - 1]) & (((/* implicit */unsigned long long int) min((5098436079029385646LL), (((/* implicit */long long int) 4294967272U))))));
                        var_30 = ((/* implicit */unsigned long long int) 5098436079029385631LL);
                        var_31 = ((/* implicit */unsigned int) (unsigned short)65535);
                    }
                } 
            } 
        } 
    }
}
