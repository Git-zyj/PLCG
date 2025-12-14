/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202513
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
    var_17 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -610867060)) ? (((/* implicit */unsigned int) var_3)) : (var_2)))) ? (((long long int) -322275140)) : (7130556765232635165LL))));
    var_18 = ((/* implicit */short) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_9))));
    var_19 -= ((/* implicit */short) ((long long int) var_10));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_10);
        var_20 = ((/* implicit */unsigned int) var_14);
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) var_12)) ? (((4673303805167528881LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))) : (-5768385996981854197LL)))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_22 = ((((/* implicit */_Bool) ((int) (-(1989177805U))))) ? (min((min((-2525135817717806621LL), (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) 33263046U)) ? (((/* implicit */int) var_11)) : (var_3)))))) : (((/* implicit */long long int) 4161879564U)));
            var_23 = ((/* implicit */int) min((((/* implicit */long long int) ((int) var_8))), (min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-18459)))))))));
            var_24 = ((/* implicit */long long int) max((var_24), ((-(((((/* implicit */_Bool) ((8891038052620925815LL) / (-4689524750627836709LL)))) ? (((1625317209546279804LL) / (1625317209546279804LL))) : (((/* implicit */long long int) min((1139197739), (((/* implicit */int) (signed char)-76)))))))))));
        }
        var_25 -= ((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) var_0)) ? (-6909775253006650379LL) : (((/* implicit */long long int) 1136290842U)))))), (((((/* implicit */_Bool) min((var_1), (3060905524U)))) ? (var_10) : (((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) var_11)))))))));
    }
    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_26 -= min((4261704249U), (((/* implicit */unsigned int) var_7)));
        var_27 = ((/* implicit */int) (+(min((((/* implicit */long long int) min((2143906937U), (((/* implicit */unsigned int) (short)19376))))), (min((var_6), (((/* implicit */long long int) -1990578207))))))));
    }
    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((short) var_6)))));
}
