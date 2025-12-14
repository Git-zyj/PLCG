/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231933
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((arr_0 [i_0 + 2] [i_0 - 1]) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)0)))))))) : (((/* implicit */int) (signed char)-88))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33790))) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (10695763761330914080ULL))))));
        var_20 = ((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) var_5)));
        var_21 = ((/* implicit */short) var_8);
    }
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        var_22 = max((((/* implicit */unsigned long long int) arr_5 [i_1])), (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) -13LL)) ? (3235979046640950677ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        var_23 = ((/* implicit */short) 17575006175232LL);
        arr_6 [i_1 - 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [i_1 + 2])), (((var_14) / (var_9)))))) / (var_11)));
    }
    /* vectorizable */
    for (unsigned char i_2 = 4; i_2 < 20; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 3227623141U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)254))));
        arr_11 [i_2] = (-(((((/* implicit */_Bool) (short)18468)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_17))));
        arr_12 [i_2] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)221))));
    }
    var_24 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 1) 
    {
        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) 
        {
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) <= (((/* implicit */int) (unsigned char)233))));
                var_26 = ((/* implicit */unsigned char) 274877906688LL);
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_13 [i_3]))));
            }
        } 
    } 
}
