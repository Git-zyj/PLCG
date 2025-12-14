/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205471
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
    var_20 = ((/* implicit */int) var_11);
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) 290814093)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)255)))), ((+(1540101318)))))), (((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (127)))) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_3))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) max((2147483647), (var_18)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */signed char) (((~((~(var_17))))) > (var_10)));
                    arr_10 [i_0] = ((/* implicit */short) max((arr_4 [7U] [i_1]), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) max((((/* implicit */int) var_2)), (290814105)))) : (((3920760776229775996LL) ^ (arr_4 [i_0] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) (short)-2082);
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) arr_8 [i_4] [i_3] [i_1] [i_0]))))), (((arr_0 [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) var_19))))))))));
                            }
                        } 
                    } 
                    var_26 -= ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)6758))) / (arr_0 [i_1]))), (((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (-290814112))))));
                }
            } 
        } 
        var_27 &= ((/* implicit */unsigned int) ((signed char) max(((~(((/* implicit */int) var_15)))), (arr_13 [12]))));
    }
    for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) (~(arr_15 [i_5] [i_5] [i_5] [i_5] [i_5])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7983189588746686655ULL)) ? (-290814121) : (1176997220)))) ? (3) : (((/* implicit */int) (short)-11199)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 8548742464948511283LL)))))) >= (max((4294967295U), (((/* implicit */unsigned int) var_10)))))))))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-99)) + (2147483647))) << ((((((-(((/* implicit */int) var_13)))) + (22396))) - (14)))))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [i_5])) & (var_17))) - (((int) 974813972U)))))));
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_5] [i_5] [(signed char)6] [i_5] [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */unsigned long long int) ((int) arr_16 [i_5] [3LL]))) : (((((arr_6 [i_5] [i_5]) % (((/* implicit */unsigned long long int) var_4)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_5])) ? (var_17) : (var_18))))))));
        arr_18 [(_Bool)1] [(unsigned char)6] |= var_15;
    }
    /* LoopNest 2 */
    for (short i_6 = 3; i_6 < 9; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            {
                arr_24 [i_6 + 1] [i_6 - 3] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((int) arr_9 [i_6]))) ^ ((~(-1LL)))))) ? (var_10) : (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)65515))))), (max(((short)11199), (((/* implicit */short) (_Bool)1))))))));
                arr_25 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((10463554484962864982ULL) + (((/* implicit */unsigned long long int) -1LL))))) ? (max((((((/* implicit */int) arr_20 [i_6] [5LL])) % (((/* implicit */int) (unsigned char)196)))), (((var_14) - (((/* implicit */int) (signed char)3)))))) : ((~(((/* implicit */int) arr_11 [i_6] [i_7] [i_7] [i_7]))))));
            }
        } 
    } 
    var_31 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((unsigned short) var_6)), (((/* implicit */unsigned short) var_19))))) ? (((int) 2464266044U)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1152921504606781440LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)10556)) || (((/* implicit */_Bool) (signed char)-122)))))))));
}
