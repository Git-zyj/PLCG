/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234553
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
    var_17 = ((/* implicit */int) var_16);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_1)));
                        var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_8 [i_0] [i_1])) : (var_3))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) var_10)))))));
                        var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) (unsigned short)52060)) : (((/* implicit */int) var_12))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) % (((/* implicit */int) ((signed char) arr_5 [i_0] [i_1 + 2] [i_1 + 2] [i_3])))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4)) ? (((((/* implicit */int) var_0)) % (((/* implicit */int) var_6)))) : (arr_6 [i_1 + 1] [i_1] [i_1 + 1])));
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) ((unsigned char) arr_1 [i_0]));
        }
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (4294967269U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((1835207713) + (-2147483647))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)52060)) : (((/* implicit */int) var_5)))))))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 2; i_5 < 19; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6405)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52058)))));
                        var_26 = ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_5 + 3] [i_5 + 1]) : (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_0] [i_4] [i_5 + 4]) : (var_15))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (4294967268U)))));
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_5 [i_0] [i_4] [i_4] [i_4]))));
        }
        for (int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_6))));
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */int) var_0)) : (var_14)));
            var_31 |= ((/* implicit */unsigned char) -2134208877);
        }
        var_32 = ((/* implicit */signed char) (-(arr_11 [i_0] [i_0])));
        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) -2147483625))));
    }
    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((long long int) var_12)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))))))) ? (max((((/* implicit */long long int) 1079710621)), (((long long int) (unsigned char)139)))) : (((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) (unsigned short)65535)))))))))));
    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((int) var_12)) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    var_36 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))));
}
