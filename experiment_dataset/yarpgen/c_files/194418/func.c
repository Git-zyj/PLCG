/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194418
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
    var_18 *= ((/* implicit */unsigned short) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [(signed char)9] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        arr_5 [(short)2] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [(_Bool)1])) == (((/* implicit */int) arr_1 [5U]))));
    }
    for (unsigned char i_1 = 2; i_1 < 8; i_1 += 3) 
    {
        var_20 -= ((/* implicit */short) ((((/* implicit */int) (!(arr_7 [i_1])))) != ((~(((/* implicit */int) arr_1 [i_1 + 3]))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1 + 1])) / (((/* implicit */int) min(((short)(-32767 - 1)), ((short)-32761))))));
        arr_8 [i_1] = ((/* implicit */short) min((max((((/* implicit */int) (unsigned short)64575)), (((((/* implicit */int) arr_1 [i_1 + 1])) - (((/* implicit */int) (unsigned short)64558)))))), (((((/* implicit */_Bool) 2830483035U)) ? (((((/* implicit */int) arr_6 [i_1] [(short)3])) / (((/* implicit */int) arr_6 [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) && (((/* implicit */_Bool) arr_6 [i_1] [i_1])))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */int) min((arr_11 [i_2] [i_2]), (arr_11 [15LL] [i_2])))) : (((/* implicit */int) arr_10 [i_2] [i_2])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2830483035U))))) : (((((/* implicit */_Bool) 1464484250U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))))))))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-32767))))))) ? (min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))))), (min((((/* implicit */long long int) arr_11 [i_2] [(short)16])), (3858270629840845683LL))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) 4288391231535208819LL)) ? (((/* implicit */int) (unsigned short)64561)) : (((/* implicit */int) (signed char)-97)))) & ((~(((/* implicit */int) (signed char)61)))))))));
    }
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)32745)) : (((/* implicit */int) (unsigned short)7))))) ? (min((-4288391231535208816LL), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_15)))))))) ? (min(((((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15)))), (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
    var_25 = var_13;
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) -4288391231535208819LL))));
}
