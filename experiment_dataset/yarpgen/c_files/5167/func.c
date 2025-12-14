/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5167
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
    var_16 = ((/* implicit */short) (-(min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) 403967558U)) ? (((/* implicit */int) var_11)) : (var_4))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = (-(max((((/* implicit */long long int) max((403967558U), (((/* implicit */unsigned int) (unsigned short)37791))))), ((+(var_7))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */unsigned long long int) min((var_11), (var_11)))), (min((var_15), (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_7), (((/* implicit */long long int) var_5)))) != (min((var_14), (var_14)))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (unsigned short i_3 = 2; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_18 = ((((/* implicit */_Bool) var_3)) ? (((((((var_14) + (9223372036854775807LL))) >> (((var_0) - (959302234U))))) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_7))) - (20041LL))))) : (((((/* implicit */_Bool) var_6)) ? (((long long int) (unsigned short)65535)) : (min((var_14), (((/* implicit */long long int) var_2)))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) var_2);
                    }
                } 
            } 
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((3797667838U) / (min((var_1), (((/* implicit */unsigned int) var_12))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37792))) / (3890999738U)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (2485725386348017561LL))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_6)))))) : ((~(((((/* implicit */_Bool) 3797667838U)) ? (12691515012706185093ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27158)))))))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_20 = ((((/* implicit */_Bool) (unsigned short)27744)) ? (((/* implicit */long long int) 1548451180)) : (2485725386348017590LL));
                            arr_18 [i_0] = (~((((_Bool)0) ? (arr_0 [i_0] [i_1]) : (min((var_6), (((/* implicit */long long int) (short)-27083)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) (short)-17112);
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_0)), (var_14))) + (((/* implicit */long long int) (~(var_5))))))) && ((!(((/* implicit */_Bool) var_1))))));
        }
    }
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) 8921675199742936370LL);
        var_24 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) var_2))))), (var_6)))), (max((((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */unsigned long long int) -358825167)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_3) : (var_3))))))));
        arr_24 [i_8] = ((/* implicit */unsigned int) ((unsigned char) min((((((/* implicit */_Bool) arr_23 [(_Bool)1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_13))))))));
    }
}
