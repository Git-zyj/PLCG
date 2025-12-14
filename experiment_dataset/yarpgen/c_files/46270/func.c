/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46270
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
    var_16 = max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3442623342935392972ULL)) ? (1471084780) : (1471084787))))))), (max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_0)))));
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) ((unsigned int) arr_2 [i_0 - 2] [i_0]))), (var_7))))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (var_2)));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_1 [i_0 - 2] [i_0 + 1]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) << (((((var_4) << (((var_11) - (15830244526308588326ULL))))) - (9143970080612745210ULL)))))) : (min((arr_2 [i_0 - 1] [i_0 + 2]), (((/* implicit */unsigned int) var_0))))));
    }
    for (short i_1 = 2; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */int) ((short) 4264449709U));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(arr_2 [i_1] [i_1 + 3]))))));
    }
    for (short i_2 = 2; i_2 < 11; i_2 += 4) /* same iter space */
    {
        var_21 = (+(((/* implicit */int) ((_Bool) ((((-2120502443) + (2147483647))) << (((15593644196054410959ULL) - (15593644196054410959ULL))))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [i_5]))) : (var_15))) * (((/* implicit */long long int) (-(2120502443))))))))));
                        arr_15 [i_4] = ((/* implicit */_Bool) ((int) var_2));
                        var_23 = ((/* implicit */_Bool) arr_5 [i_2]);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) arr_5 [i_2]);
    }
    for (short i_6 = 2; i_6 < 11; i_6 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) 9223372036854775807LL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((int) arr_8 [i_6 - 2])))));
            arr_20 [i_7] = ((/* implicit */unsigned long long int) (~(arr_3 [i_6 + 3])));
            arr_21 [(_Bool)1] [i_6] [i_7 - 1] |= ((/* implicit */long long int) ((-1892455586) / ((-(((/* implicit */int) (signed char)70))))));
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_3 [i_6 - 2]))));
        }
    }
}
