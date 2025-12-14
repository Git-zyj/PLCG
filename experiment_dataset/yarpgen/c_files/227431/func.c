/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227431
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
    var_17 = ((/* implicit */unsigned short) var_12);
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (((-(((unsigned long long int) 11818368478280259713ULL)))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) - (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (signed char)-101)))))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((((((/* implicit */int) ((((/* implicit */int) var_10)) < (arr_1 [i_0])))) < (((/* implicit */int) ((((/* implicit */int) (short)30301)) < (((/* implicit */int) var_15))))))) ? (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) var_2)))))) : (-1LL));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((8417555636610195688LL), (((/* implicit */long long int) var_14))))))) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (var_0) : (((/* implicit */unsigned long long int) var_4)))))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) min(((-(280375465082880ULL))), (((/* implicit */unsigned long long int) ((-1LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_1] [i_1]))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))) < ((+(arr_5 [i_1])))))) : (((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) var_2))))));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        arr_18 [i_3] [i_3] [i_3] [(short)15] = ((((/* implicit */int) arr_8 [i_2])) - (((/* implicit */int) ((((/* implicit */int) ((0U) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) < (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_15)))))))));
                        var_21 = ((/* implicit */unsigned int) ((var_8) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14818)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_12))) : ((~(0U))))))));
                        arr_19 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */signed char) 4294967295U);
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            arr_24 [i_3] = ((/* implicit */long long int) (+(((min((((/* implicit */unsigned int) var_10)), (arr_11 [i_4] [i_3] [i_4]))) - (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
                            var_22 = ((/* implicit */unsigned int) (((~(arr_9 [i_2] [i_5]))) == (((((/* implicit */unsigned int) -1)) - (arr_11 [i_2] [i_3] [i_6])))));
                            arr_25 [(_Bool)1] [i_6] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) (signed char)100);
                        }
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (signed char)-31)))))) < (arr_11 [i_2] [i_3] [i_5])));
                    }
                } 
            } 
        } 
        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_14 [i_2] [i_2] [i_2]), ((unsigned short)4095)))) ? (((((/* implicit */int) min((((/* implicit */short) var_11)), (var_2)))) & (((/* implicit */int) var_9)))) : (((/* implicit */int) (signed char)100))));
        arr_26 [i_2] [i_2] = ((/* implicit */unsigned int) var_7);
    }
}
