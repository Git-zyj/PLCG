/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202296
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)45)) >= (((/* implicit */int) arr_0 [i_0] [(_Bool)1])))))) / (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) 3226887064U))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) min((0LL), (((/* implicit */long long int) (short)-7610))));
                    var_13 = ((/* implicit */long long int) ((((_Bool) var_5)) ? (((((/* implicit */_Bool) (signed char)-31)) ? (var_7) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (18446744073709551592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)45))))))))))));
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 29ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((var_2), (min((((/* implicit */unsigned long long int) var_4)), (arr_1 [i_0] [i_1])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_16 [i_1] [(unsigned short)10] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */int) ((var_5) < (((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 2] [i_4]))))) : (((/* implicit */int) var_6))));
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_4] [i_2 - 1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)253))))) >= (var_0))))) & (((29ULL) >> (((var_5) + (353181430))))));
                                var_14 = (-(((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned long long int) arr_15 [11] [i_3] [i_2] [i_1] [i_0] [i_0])), (var_9))) : (((/* implicit */unsigned long long int) 1490667330654650206LL)))));
                                arr_18 [i_1] [i_1] = ((/* implicit */unsigned char) var_0);
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_8 [i_2] [i_2] [i_2 - 1])), (var_2)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                }
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */signed char) max((var_10), (((/* implicit */long long int) min((-1786285447), (((/* implicit */int) ((unsigned char) var_0))))))));
        arr_23 [i_5] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])), (arr_21 [i_5] [i_5]))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_1)) < (var_5)))))));
        var_17 = ((((/* implicit */_Bool) arr_21 [i_5] [i_5])) || (((/* implicit */_Bool) min(((unsigned char)68), (((/* implicit */unsigned char) (_Bool)0))))));
        arr_24 [i_5] [i_5] = ((/* implicit */short) min((arr_21 [i_5] [i_5]), ((((!(((/* implicit */_Bool) var_11)))) ? (143974450587500544ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_5] [i_5])))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
    {
        arr_27 [i_6] = ((/* implicit */unsigned long long int) var_5);
        arr_28 [i_6] [i_6] = ((/* implicit */_Bool) 1091581356);
    }
    var_18 = ((/* implicit */unsigned char) var_3);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) 24ULL)) && (((/* implicit */_Bool) 2925355497223925270LL))))), (var_1)))) && (var_3)));
    var_20 = ((/* implicit */unsigned char) var_1);
}
