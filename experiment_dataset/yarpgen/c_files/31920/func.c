/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31920
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (+(var_17)));
                arr_5 [4] [17ULL] [i_0] = max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_1 + 2])) : (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1 + 2] [i_1 + 2]))))));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (2693908119U))) ^ (((/* implicit */unsigned int) (-(var_1))))))) ? (((/* implicit */int) ((_Bool) (unsigned short)12028))) : ((~(((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (-2147483646) : (((/* implicit */int) (unsigned short)53496))))) ? (var_17) : (((/* implicit */int) var_11))))));
    /* LoopSeq 4 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) ^ (4294967295U)))) && (((/* implicit */_Bool) ((unsigned int) (unsigned short)44043))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2] [i_2]))) == (arr_0 [i_2])))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_0 [i_2]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) -1223873964);
        arr_13 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -789051036)) ? ((~(var_10))) : (((/* implicit */unsigned int) var_12))))) ? (max((arr_9 [10U] [i_3]), (((/* implicit */unsigned long long int) var_1)))) : ((~(arr_0 [i_3])))));
        arr_14 [13U] [i_3] = ((((arr_1 [i_3] [i_3]) + (((/* implicit */unsigned long long int) (+(var_10)))))) != (arr_9 [i_3] [i_3]));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 1) 
    {
        var_23 += ((/* implicit */unsigned char) 6U);
        var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_4 - 1])) ? (var_14) : ((((_Bool)1) ? (var_14) : (((/* implicit */long long int) var_6))))));
    }
    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_3 [i_5] [(_Bool)1] [i_5]))));
                    var_26 = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3)))) - (((((/* implicit */_Bool) var_15)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))));
                    var_27 = ((/* implicit */_Bool) ((max((4361101661228249519ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))) / (((/* implicit */unsigned long long int) (-(max((((/* implicit */int) var_7)), (2147483643))))))));
                    var_28 = ((/* implicit */unsigned int) ((var_9) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 131071)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_22 [4U] [(_Bool)1] [i_5])))) : (((/* implicit */int) arr_24 [i_6] [i_6])))) : ((+((-(var_6)))))));
                }
            } 
        } 
        arr_25 [i_5] = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */int) arr_20 [i_5] [6U])), (arr_11 [i_5]))));
        var_29 = ((((var_12) - (arr_11 [16]))) >= (((/* implicit */int) arr_21 [10U] [10U])));
        var_30 = ((/* implicit */unsigned short) -1103483241);
    }
    var_31 = ((/* implicit */_Bool) (((-(max((((/* implicit */long long int) 1103483252)), (var_14))))) + (((/* implicit */long long int) max(((+(-1103483238))), (-1))))));
}
