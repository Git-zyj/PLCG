/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212663
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
    var_10 = ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) (signed char)-32))))) : (var_8));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_0]), (arr_5 [i_0])))) ? (((/* implicit */int) ((arr_5 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) (signed char)109))));
                    arr_8 [i_0] [i_0] [8ULL] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */int) min(((signed char)15), ((signed char)-61)))) : ((-(((/* implicit */int) (signed char)122))))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-30)) ? (((((/* implicit */_Bool) 2147483647)) ? (-2147483647) : (((/* implicit */int) (unsigned short)65517)))) : (((((/* implicit */_Bool) 3882488514199319796ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)496))))));
                }
            } 
        } 
    } 
    var_12 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((signed char) (signed char)126))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-8)) * (((/* implicit */int) var_7)))) + (((/* implicit */int) var_5))))) : (max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) 11744764727256302120ULL)) ? (11744764727256302120ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12804)))))))));
    /* LoopNest 3 */
    for (short i_3 = 3; i_3 < 22; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (short i_5 = 3; i_5 < 23; i_5 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) (((~(272678883688448ULL))) * (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)11163)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (_Bool)1))));
                    arr_16 [i_3] = ((/* implicit */signed char) min((min((arr_10 [i_3 - 1]), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)9))))) : (((/* implicit */int) (signed char)-127)))))));
                }
            } 
        } 
    } 
}
