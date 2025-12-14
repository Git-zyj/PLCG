/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227491
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-18709))))) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : (((/* implicit */int) min(((short)8), (max((arr_2 [(unsigned short)3]), (((/* implicit */short) var_11))))))));
                    arr_8 [i_0] [i_2] [i_2 + 3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-8)) : (((/* implicit */int) var_3))))), (((unsigned int) -638848075))))) || (((/* implicit */_Bool) ((long long int) (signed char)-92)))));
                    var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) (unsigned short)65516)) : (((((/* implicit */_Bool) (short)4)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)0))))))) ? (((((((/* implicit */int) var_11)) > (arr_3 [i_1]))) ? (((/* implicit */int) (short)7)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-34)))))) : (((/* implicit */int) ((unsigned char) min((arr_0 [i_0] [1]), ((signed char)-118)))))));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) ((arr_3 [(unsigned char)6]) == (((/* implicit */int) var_9))))), (((unsigned long long int) var_5)))))))));
        arr_9 [i_0] = ((/* implicit */unsigned short) max((((unsigned long long int) (!(((/* implicit */_Bool) (short)10527))))), (((/* implicit */unsigned long long int) (!(((var_5) > (((/* implicit */int) var_1)))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */_Bool) arr_11 [i_3]);
        arr_14 [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)114))));
        var_14 ^= ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (-2147483631))) >> (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) (_Bool)1)))) + (113))));
    }
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_9)) : (min((((/* implicit */int) var_7)), (var_6)))))) ? (((int) (signed char)28)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)226)) && (((/* implicit */_Bool) (short)-7)))))));
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((/* implicit */unsigned short) var_7)), (var_9))))));
    var_17 = ((/* implicit */short) var_3);
}
