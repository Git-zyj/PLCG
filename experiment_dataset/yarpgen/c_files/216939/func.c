/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216939
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((arr_3 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0)))) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) / (var_1)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) - (((/* implicit */int) (signed char)-122))));
            arr_10 [i_0] [i_0] = arr_3 [i_0];
        }
        arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) != (4057001423U))))));
    }
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_7 [i_2] [i_2]) : (arr_3 [i_2])))));
        var_15 = arr_1 [i_2];
    }
    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) (+(min((((var_10) + (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_3)), ((signed char)-10))))))));
        var_17 = var_9;
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) (+(var_10)));
        arr_17 [i_3] [i_3] = ((((/* implicit */_Bool) ((arr_2 [i_3]) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8))))))) ? ((+(var_0))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_14 [i_3])), (arr_15 [i_3] [i_3])))));
        arr_18 [i_3] [i_3] = (~(((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (4057001437U))))))));
    }
    var_18 |= ((/* implicit */int) 2585312796691200410ULL);
    var_19 = ((/* implicit */signed char) (~(((min((6620213640776032514ULL), (((/* implicit */unsigned long long int) var_6)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_3)), ((signed char)-11)))))))));
    /* LoopNest 2 */
    for (long long int i_4 = 2; i_4 < 11; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            {
                var_20 = arr_7 [(signed char)23] [i_5];
                arr_23 [i_4] [i_5] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_4]) ? (36024398972452864LL) : (arr_3 [i_5])))) ? (0U) : (237965868U)))));
            }
        } 
    } 
}
