/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18964
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
    var_20 = ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-3)))))))), (((int) max(((short)28752), (((/* implicit */short) (signed char)3)))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_10 [i_2 - 3] [i_0] = min((-914743349), (-1866742791));
                    var_21 ^= ((/* implicit */_Bool) ((short) (+((-9223372036854775807LL - 1LL)))));
                }
            } 
        } 
        arr_11 [i_0] = min((max((((/* implicit */unsigned long long int) ((var_16) * (((/* implicit */int) var_11))))), (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (-914743349) : (((/* implicit */int) var_0))))));
    }
    var_22 = ((/* implicit */int) var_0);
    var_23 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = (!(((/* implicit */_Bool) var_0)));
        arr_15 [i_3] = ((/* implicit */long long int) (~((+(((/* implicit */int) var_8))))));
        arr_16 [i_3] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)10755)) >= (((/* implicit */int) (unsigned short)6805))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_24 |= max(((+(((/* implicit */int) (signed char)3)))), (min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)0)) : (-914743344))), ((-(((/* implicit */int) (_Bool)0)))))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (-((+(var_13))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */long long int) max(((~(min((var_7), (-914743344))))), (min((((/* implicit */int) var_15)), (((int) (short)-8792))))));
        var_27 = ((/* implicit */int) max((max((2427195290528333362ULL), (((/* implicit */unsigned long long int) (signed char)10)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)58731)))))));
        var_28 = ((/* implicit */unsigned short) 18446744073709551615ULL);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] = ((/* implicit */_Bool) (~(max((((/* implicit */int) (unsigned short)58733)), (-914743344)))));
        arr_26 [11ULL] |= ((/* implicit */signed char) (+(((long long int) var_7))));
    }
}
